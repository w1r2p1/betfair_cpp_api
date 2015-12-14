#pragma once
#include <exception>
#include <sstream>
#include <string>

#include <cpprest/json.h>
#include <cpprest/http_client.h>
#include <boost/optional.hpp>

#include "json_builder.h"
#include "betfair_exception.h"

#define RESPONCE_LOGGING
#define REQUEST_LOGGING

namespace betfair_api
{   
   const utility::string_t INT_LOGIN_LOGOUT_URL = U("https://identitysso.betfair.com/api/");

   // Italian jurisdiction users:
   const utility::string_t ITA_LOGIN_LOGOUT_URL = U("https://identitysso.betfair.it/api/");

   // Spanish jurisdiction users:
   const utility::string_t ESP_LOGIN_LOGOUT_URL = U("https://identitysso.betfair.es/api/");

   const utility::string_t INT_BETTING_URL = U("https://api.betfair.com/exchange/betting/rest/v1/");
   const utility::string_t INT_ACCOUNTS_URL = U("https://api.betfair.com/exchange/account/rest/v1/");


   // Australian exchange
   const utility::string_t AUS_BETTING_URL = U("https://api-au.betfair.com/exchange/betting/rest/v1.0/");
   const utility::string_t AUS_ACCOUNTS_URL = U("https://api-au.betfair.com/exchange/account/rest/v1.0/");


   // heart beat URL
   const utility::string_t HEARTBEAT_URL = U("https://api.betfair.com/exchange/heartbeat/rest/v1/");

   enum BetfairAPIType
   {
      SPORTS,
      ACCOUNTS,
      HEARTBEAT
   };

   // https://api.developer.betfair.com/services/webapps/docs/display/1smk3cen4v3lu3yomq5qye0ni/Interactive+Login+-+Desktop+Application
   enum BetfairLoginEnum
   {
      International,
      Italian,
      Spanish
   };

   enum BetfairExchangeEnum
   {
      InternationalExchange,
      AustralianExchange
   };


   class BetfairLogin
   {
   public:
      // Copy CTOR
      BetfairLogin(const web::json::value& jsonVal) : token(from_json<utility::string_t>(jsonVal.at(U("token")))),
         product(from_json<utility::string_t>(jsonVal.at(U("product")))),
         status(from_json<utility::string_t>(jsonVal.at(U("status")))),
         error(from_json<utility::string_t>(jsonVal.at(U("error"))))
      {

      };

      utility::string_t get_token() const { return token; };
      utility::string_t get_product() const { return product; };
      utility::string_t get_status() const { return status; };
      utility::string_t get_error() const { return error; };

   private:
      utility::string_t token;
      utility::string_t product;
      utility::string_t status;
      utility::string_t error;

   };


   class BetfairAPIBase
   {

   public:
     
      BetfairAPIBase(const utility::string_t& appid) : m_appID(appid)
      {
         // we always post
         m_req.set_method(web::http::methods::POST);
         // set the normal headers
         m_req.headers()[U("Accept")] = U("application/json");
         m_req.headers()[U("X-Application")] = m_appID;
         m_req.headers()[U("Content-Type")] = U("application/json");

      };

      virtual ~BetfairAPIBase()
      {
         if (!m_token.empty())
         {
            try
            {
               // try to logout of betfair
               logout();
            }
            catch (...)
            {
               // consume any exception to prevent throwing from dtor
            }
         }
      };
      
      BetfairLogin login(const utility::string_t& username, 
                         const utility::string_t& password, 
                         const BetfairLoginEnum login_locaton = BetfairLoginEnum::International)
      {
         web::http::http_request req;
         req.set_request_uri(U("login"));
         utility::stringstream_t bodytext;

         bodytext << U("username=") << username << U("&password=") << password;

         req.set_body(bodytext.str());
         req.set_method(web::http::methods::POST);
         req.headers()[U("Accept")] = U("application/json");
         req.headers()[U("X-Application")] = m_appID;
         req.headers()[U("Content-Type")] = U("application/x-www-form-urlencoded");

         web::http::http_response resp = get_login_client(login_locaton).request(req).get();
         auto resp_body = resp.extract_json().get();

         maybe_throw_betfair_exception(resp_body);

         // todo: i don't like this:
         // Should we throw an exception on a FAIL but not an API exception?? not sure
         if (resp_body.at(U("status")).as_string() == U("SUCCESS"))
         {
            m_token = resp_body.at(U("token")).as_string();

            m_req.headers()[U("X-Authentication")] = m_token;

         }

         return BetfairLogin(resp_body);
      };

      BetfairLogin logout()
      {
         web::http::http_request req;
         req.set_request_uri(U("logout"));

         req.set_method(web::http::methods::POST);
         req.headers()[U("Accept")] = U("application/json");
         req.headers()[U("X-Application")] = m_appID;
         req.headers()[U("X-Authentication")] = m_token;

         // allways use the International to logout, I dont know if this is correct but:
         // https://api.developer.betfair.com/services/webapps/docs/display/1smk3cen4v3lu3yomq5qye0ni/Logout impies so???
         web::http::http_response resp = get_login_client(BetfairLoginEnum::International).request(req).get();

         auto resp_body = resp.extract_json().get();
         maybe_throw_betfair_exception(resp_body);

         // empty the session token to show we are logged out
         m_token.clear();

         return BetfairLogin(resp_body);
      };

   protected:
      
      web::http::client::http_client get_http_client(const BetfairAPIType rootUrl, const BetfairExchangeEnum exhange)
      {
         switch (rootUrl)
         {
         case betfair_api::SPORTS:
            if (exhange == BetfairExchangeEnum::InternationalExchange)
            {
               return web::http::client::http_client(INT_BETTING_URL);
            }
            else
            {
               return web::http::client::http_client(AUS_BETTING_URL);
            }
            break;
         case betfair_api::ACCOUNTS:
            if (exhange == BetfairExchangeEnum::InternationalExchange)
            {
               return web::http::client::http_client(INT_ACCOUNTS_URL);
            }
            else
            {
               return web::http::client::http_client(AUS_ACCOUNTS_URL);
            }
            break;
         case betfair_api::HEARTBEAT:
            return web::http::client::http_client(HEARTBEAT_URL);
            break;
         default:
            // default never used
            return web::http::client::http_client(INT_BETTING_URL);
            break;
         }
      };


      web::http::client::http_client get_login_client(BetfairLoginEnum login_location)
      {

         switch (login_location)
         {
         case betfair_api::Italian:
            return web::http::client::http_client(ITA_LOGIN_LOGOUT_URL);
            break;
         case betfair_api::Spanish:
            return web::http::client::http_client(ESP_LOGIN_LOGOUT_URL);
            break;
         case betfair_api::International: // fall though
         default: 
            return web::http::client::http_client(INT_LOGIN_LOGOUT_URL);
            break;
         }
      };

      void maybe_throw_betfair_exception(const web::json::value& json_resp)
      {
         // if there is a fault code then it is an error retuened
         if (json_resp.has_field(U("faultcode")))
         { 
            throw BetfairException(json_resp);
         }
      }

      template<typename RequestType>
      void prepare_request(const RequestType& request, const utility::string_t& uri)
      {
         m_req.set_request_uri(uri);
         m_req.set_body(request.to_json());

#ifdef REQUEST_LOGGING
         ucout << __FUNCTION__ << " Request " << endl;
         ucout << request.to_json().serialize() << endl;
#endif
      };

      template <class ResponceType, typename std::enable_if<is_vector<ResponceType>::value>::type* = nullptr>
      ResponceType process_responce(const web::json::value& json_resp)
      {
#ifdef RESPONCE_LOGGING
         ucout << __FUNCTION__ << " Responce " << endl;
         ucout << json_resp.serialize() << endl;
#endif
         maybe_throw_betfair_exception(json_resp);
         ResponceType ret;
         for (auto item : json_resp.as_array())
         {
            ret.push_back(ResponceType::value_type(item));
         }

         return ret;

      };


      template <class ResponceType, typename std::enable_if<std::is_base_of<BetfairData, ResponceType>::value>::type* = nullptr>
      ResponceType process_responce(const web::json::value& json_resp)
      {
#ifdef RESPONCE_LOGGING
         ucout << __FUNCTION__ << " Responce " << endl;
         ucout << json_resp.serialize() << endl;
#endif
         maybe_throw_betfair_exception(json_resp);
         return ResponceType(json_resp);

      };


      template <class ResponceType, typename std::enable_if<std::is_same<ResponceType, utility::string_t>::value>::type* = nullptr>
      ResponceType process_responce(const web::json::value& json_resp)
      {
#ifdef RESPONCE_LOGGING
         ucout << __FUNCTION__ << " Responce " << endl;
         ucout << json_resp.serialize() << endl;
#endif
         maybe_throw_betfair_exception(json_resp);
         return json_resp.as_string();

      };
      

      template<typename ResponceType>
      pplx::task<ResponceType> do_request(const BetfairAPIType rootUrl, BetfairExchangeEnum exchange)
      {        
         // if we dont have a session token we cant make the call
         // throw an exception
         if (m_token.empty()) 
         {
            throw BetfairException("No session token exception");
         }

         using web::json::value;
         using web::http::http_response;
         using web::http::status_codes;

         pplx::task<ResponceType>resp_task = get_http_client(rootUrl, exchange).request(m_req).then([](http_response response) {
            if (response.status_code() == status_codes::OK)
            {
               return response.extract_json().get();
            }
            else
            {  
               // if we did not get a Ok from the server throw an error with the text in it
               throw BetfairException(response.to_string());
            }
         }).then([this](const value& json_resp) {

            return process_responce<ResponceType>(json_resp);

         });

         return resp_task;
      }
      

      template<typename ResponceType, typename RequestType>
      pplx::task<ResponceType> do_request(const RequestType& request, const utility::string_t& uri, BetfairAPIType rootUrl, BetfairExchangeEnum exchange)
      {
         static_assert(std::is_base_of<BetfairData, RequestType>::value, "RequestType must inherit from BetfairData");

         prepare_request(request, uri);

         return do_request<ResponceType>(rootUrl, exchange);

      };


      template<typename ResponceType>
      pplx::task<ResponceType> do_request(const utility::string_t& uri, BetfairAPIType rootUrl, BetfairExchangeEnum exchange)
      {
         m_req.set_request_uri(uri);

         return do_request<ResponceType>(rootUrl, exchange);
         
      };
      
   private:
      utility::string_t m_appID; // your app ID
      utility::string_t m_token; // session token
      web::http::http_request m_req; // request reused for all requests
      
   };

}