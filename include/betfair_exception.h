#pragma once
#include <exception>
#include <cpprest/json.h>

namespace betfair_api
{
class BetfairException : public std::exception
{
public:
   BetfairException(const char* message) : std::exception(message)
   {

   }
   BetfairException(const web::json::value& json_exception)
   {
      faultcode = json_exception.at(U("faultcode")).as_string();
      faultstring = json_exception.at(U("faultstring")).as_string();

      auto details = json_exception.at(U("detail"));

      if (!details.as_object().empty())
      {

         exceptionname = details.at(U("exceptionname")).as_string();

         auto innter_exception = details.at(U("AccountAPINGException"));

         errorCode = innter_exception.at(U("errorCode")).as_string();
         errorDetails = innter_exception.at(U("errorDetails")).as_string();
         requestUUID = innter_exception.at(U("requestUUID")).as_string();

      }
      what_str = std::string(faultstring.begin(), faultstring.end());
   }

   virtual char const* what() const
   {
      if (faultcode.empty())
      {
         return exception::what();
      }

      return what_str.c_str();
   }

   BetfairException(utility::string_t message) : std::exception(std::string(message.begin(), message.end()).c_str())
   {

   }

   utility::string_t get_faultcode() const { return faultcode; };
   utility::string_t get_faultstring() const { return faultstring; };
   utility::string_t get_exceptionname() const { return exceptionname; };
   utility::string_t get_errorCode() const { return errorCode; };
   utility::string_t get_errorDetails() const { return errorDetails; };
   utility::string_t get_requestUUID() const { return requestUUID; };


private:
   utility::string_t faultcode;
   utility::string_t faultstring;
   utility::string_t exceptionname;
   utility::string_t errorCode;
   utility::string_t errorDetails;
   utility::string_t requestUUID;
   std::string what_str;
};
};
