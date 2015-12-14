
//********************************************************************
// Auto generated types do not edit
// Data time generated 2015-12-14 13:07:48.533388
//********************************************************************
#pragma once
#include "../include/betfair_types_helper.h" 
#include "../include/json_builder.h"
#include "betfair_api_types.h"

namespace betfair_api
{
// Create 2 application keys for given user; one active and the other delayed
// Defined in: AccountAPING.xml
class CreateDeveloperAppKeysRequest : public BetfairData
{
public:
   CreateDeveloperAppKeysRequest(
      utility::string_t _appName) :
      app_name(_appName){};
   CreateDeveloperAppKeysRequest() = default;
   
   // CTOR from json
   CreateDeveloperAppKeysRequest(const web::json::value& jsonVal) : app_name(from_json<utility::string_t>(jsonVal.at(U("appName"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(app_name, U("appName"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_app_name() const
   {
       return app_name;
   };
   void set_app_name(const utility::string_t& val)
   {
       app_name = val;
   };

private:
   utility::string_t app_name;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CreateDeveloperAppKeysRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CreateDeveloperAppKeysRequest& bfdata)
{
    os << "appName:" << std::endl << bfdata.appName << std::endl;
    return os;
}

// Get available to bet amount.
// Defined in: AccountAPING.xml
class GetAccountFundsRequest : public BetfairData
{
public:
   GetAccountFundsRequest(
      utility::string_t _wallet) :
      wallet(_wallet){};
   
   // CTOR from json
   GetAccountFundsRequest(const web::json::value& jsonVal) : wallet(from_json<utility::string_t>(jsonVal.at(U("wallet"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(wallet, U("wallet"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_wallet() const
   {
       return wallet;
   };
   void set_wallet(const utility::string_t& val)
   {
       wallet = val;
   };

private:
   utility::string_t wallet;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const GetAccountFundsRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const GetAccountFundsRequest& bfdata)
{
    os << "wallet:" << std::endl << bfdata.wallet << std::endl;
    return os;
}

// Transfer funds between wallets
// Defined in: AccountAPING.xml
class TransferFundsRequest : public BetfairData
{
public:
   TransferFundsRequest(
      utility::string_t _from, 
      utility::string_t _to, 
      double _amount) :
      from(_from),
      to(_to),
      amount(_amount){};
   
   // CTOR from json
   TransferFundsRequest(const web::json::value& jsonVal) : from(from_json<utility::string_t>(jsonVal.at(U("from")))), to(from_json<utility::string_t>(jsonVal.at(U("to")))), amount(from_json<double>(jsonVal.at(U("amount"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(from, U("from"), ret);
      build_json(to, U("to"), ret);
      build_json(amount, U("amount"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_from() const
   {
       return from;
   };
   void set_from(const utility::string_t& val)
   {
       from = val;
   };
   utility::string_t get_to() const
   {
       return to;
   };
   void set_to(const utility::string_t& val)
   {
       to = val;
   };
   double get_amount() const
   {
       return amount;
   };
   void set_amount(const double& val)
   {
       amount = val;
   };

private:
   utility::string_t from;
   utility::string_t to;
   double amount;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const TransferFundsRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const TransferFundsRequest& bfdata)
{
    os << "from:" << std::endl << bfdata.from << std::endl;
    os << "to:" << std::endl << bfdata.to << std::endl;
    os << "amount:" << std::endl << bfdata.amount << std::endl;
    return os;
}

// Returns the newly generate subscription token
// Defined in: AccountAPING.xml
class GetApplicationSubscriptionTokenRequest : public BetfairData
{
public:
   GetApplicationSubscriptionTokenRequest(
      int _subscriptionLength, 
      utility::string_t _clientReference) :
      subscription_length(_subscriptionLength),
      client_reference(_clientReference){};
   
   // CTOR from json
   GetApplicationSubscriptionTokenRequest(const web::json::value& jsonVal) : subscription_length(from_json<int>(jsonVal.at(U("subscriptionLength")))), client_reference(from_json<utility::string_t>(jsonVal.at(U("clientReference"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(subscription_length, U("subscriptionLength"), ret);
      build_json(client_reference, U("clientReference"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   int get_subscription_length() const
   {
       return subscription_length;
   };
   void set_subscription_length(const int& val)
   {
       subscription_length = val;
   };
   utility::string_t get_client_reference() const
   {
       return client_reference;
   };
   void set_client_reference(const utility::string_t& val)
   {
       client_reference = val;
   };

private:
   int subscription_length;
   utility::string_t client_reference;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const GetApplicationSubscriptionTokenRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const GetApplicationSubscriptionTokenRequest& bfdata)
{
    os << "subscriptionLength:" << std::endl << bfdata.subscriptionLength << std::endl;
    os << "clientReference:" << std::endl << bfdata.clientReference << std::endl;
    return os;
}

// Activate the subscription token for the customer
// Defined in: AccountAPING.xml
class ActivateApplicationSubscriptionRequest : public BetfairData
{
public:
   ActivateApplicationSubscriptionRequest(
      utility::string_t _subscriptionToken) :
      subscription_token(_subscriptionToken){};
   
   // CTOR from json
   ActivateApplicationSubscriptionRequest(const web::json::value& jsonVal) : subscription_token(from_json<utility::string_t>(jsonVal.at(U("subscriptionToken"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(subscription_token, U("subscriptionToken"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_subscription_token() const
   {
       return subscription_token;
   };
   void set_subscription_token(const utility::string_t& val)
   {
       subscription_token = val;
   };

private:
   utility::string_t subscription_token;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ActivateApplicationSubscriptionRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ActivateApplicationSubscriptionRequest& bfdata)
{
    os << "subscriptionToken:" << std::endl << bfdata.subscriptionToken << std::endl;
    return os;
}

// Cancel application subscription
// Defined in: AccountAPING.xml
class CancelApplicationSubscriptionRequest : public BetfairData
{
public:
   CancelApplicationSubscriptionRequest(
      utility::string_t _subscriptionToken) :
      subscription_token(_subscriptionToken){};
   
   // CTOR from json
   CancelApplicationSubscriptionRequest(const web::json::value& jsonVal) : subscription_token(from_json<utility::string_t>(jsonVal.at(U("subscriptionToken"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(subscription_token, U("subscriptionToken"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_subscription_token() const
   {
       return subscription_token;
   };
   void set_subscription_token(const utility::string_t& val)
   {
       subscription_token = val;
   };

private:
   utility::string_t subscription_token;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CancelApplicationSubscriptionRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CancelApplicationSubscriptionRequest& bfdata)
{
    os << "subscriptionToken:" << std::endl << bfdata.subscriptionToken << std::endl;
    return os;
}

// Update an application subscription with a new expiry date
// Defined in: AccountAPING.xml
class UpdateApplicationSubscriptionRequest : public BetfairData
{
public:
   UpdateApplicationSubscriptionRequest(
      utility::string_t _vendorClientId, 
      int _subscriptionLength) :
      vendor_client_id(_vendorClientId),
      subscription_length(_subscriptionLength){};
   
   // CTOR from json
   UpdateApplicationSubscriptionRequest(const web::json::value& jsonVal) : vendor_client_id(from_json<utility::string_t>(jsonVal.at(U("vendorClientId")))), subscription_length(from_json<int>(jsonVal.at(U("subscriptionLength"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(vendor_client_id, U("vendorClientId"), ret);
      build_json(subscription_length, U("subscriptionLength"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_vendor_client_id() const
   {
       return vendor_client_id;
   };
   void set_vendor_client_id(const utility::string_t& val)
   {
       vendor_client_id = val;
   };
   int get_subscription_length() const
   {
       return subscription_length;
   };
   void set_subscription_length(const int& val)
   {
       subscription_length = val;
   };

private:
   utility::string_t vendor_client_id;
   int subscription_length;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const UpdateApplicationSubscriptionRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const UpdateApplicationSubscriptionRequest& bfdata)
{
    os << "vendorClientId:" << std::endl << bfdata.vendorClientId << std::endl;
    os << "subscriptionLength:" << std::endl << bfdata.subscriptionLength << std::endl;
    return os;
}

// List of subscription tokens for an application
// Defined in: AccountAPING.xml
class ListApplicationSubscriptionTokensRequest : public BetfairData
{
public:
   ListApplicationSubscriptionTokensRequest(
      utility::string_t _subscriptionStatus) :
      subscription_status(_subscriptionStatus){};
   
   // CTOR from json
   ListApplicationSubscriptionTokensRequest(const web::json::value& jsonVal) : subscription_status(from_json<utility::string_t>(jsonVal.at(U("subscriptionStatus"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(subscription_status, U("subscriptionStatus"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_subscription_status() const
   {
       return subscription_status;
   };
   void set_subscription_status(const utility::string_t& val)
   {
       subscription_status = val;
   };

private:
   utility::string_t subscription_status;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListApplicationSubscriptionTokensRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListApplicationSubscriptionTokensRequest& bfdata)
{
    os << "subscriptionStatus:" << std::endl << bfdata.subscriptionStatus << std::endl;
    return os;
}

// Identify all subscriptions, regardless of status, for a single client for a
// single application key. The operation may be called by either the application
// key owner or a client.
// Defined in: AccountAPING.xml
class GetApplicationSubscriptionHistoryRequest : public BetfairData
{
public:
   GetApplicationSubscriptionHistoryRequest(
      utility::string_t _vendorClientId, 
      utility::string_t _applicationKey) :
      vendor_client_id(_vendorClientId),
      application_key(_applicationKey){};
   GetApplicationSubscriptionHistoryRequest() = default;
   
   // CTOR from json
   GetApplicationSubscriptionHistoryRequest(const web::json::value& jsonVal) : vendor_client_id(from_json<utility::string_t>(jsonVal.at(U("vendorClientId")))), application_key(from_json<utility::string_t>(jsonVal.at(U("applicationKey"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(vendor_client_id, U("vendorClientId"), ret);
      build_json(application_key, U("applicationKey"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_vendor_client_id() const
   {
       return vendor_client_id;
   };
   void set_vendor_client_id(const utility::string_t& val)
   {
       vendor_client_id = val;
   };
   utility::string_t get_application_key() const
   {
       return application_key;
   };
   void set_application_key(const utility::string_t& val)
   {
       application_key = val;
   };

private:
   utility::string_t vendor_client_id;
   utility::string_t application_key;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const GetApplicationSubscriptionHistoryRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const GetApplicationSubscriptionHistoryRequest& bfdata)
{
    os << "vendorClientId:" << std::endl << bfdata.vendorClientId << std::endl;
    os << "applicationKey:" << std::endl << bfdata.applicationKey << std::endl;
    return os;
}

// Get account statement
// Defined in: AccountAPING.xml
class GetAccountStatementRequest : public BetfairData
{
public:
   GetAccountStatementRequest(
      utility::string_t _locale, 
      int _fromRecord, 
      int _recordCount, 
      TimeRange _itemDateRange, 
      utility::string_t _includeItem, 
      utility::string_t _wallet) :
      locale(_locale),
      from_record(_fromRecord),
      record_count(_recordCount),
      item_date_range(_itemDateRange),
      include_item(_includeItem),
      wallet(_wallet){};
   
   // CTOR from json
   GetAccountStatementRequest(const web::json::value& jsonVal) : locale(from_json<utility::string_t>(jsonVal.at(U("locale")))), from_record(from_json<int>(jsonVal.at(U("fromRecord")))), record_count(from_json<int>(jsonVal.at(U("recordCount")))), item_date_range(from_json<TimeRange>(jsonVal.at(U("itemDateRange")))), include_item(from_json<utility::string_t>(jsonVal.at(U("includeItem")))), wallet(from_json<utility::string_t>(jsonVal.at(U("wallet"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(locale, U("locale"), ret);
      build_json(from_record, U("fromRecord"), ret);
      build_json(record_count, U("recordCount"), ret);
      build_json(item_date_range, U("itemDateRange"), ret);
      build_json(include_item, U("includeItem"), ret);
      build_json(wallet, U("wallet"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_locale() const
   {
       return locale;
   };
   void set_locale(const utility::string_t& val)
   {
       locale = val;
   };
   int get_from_record() const
   {
       return from_record;
   };
   void set_from_record(const int& val)
   {
       from_record = val;
   };
   int get_record_count() const
   {
       return record_count;
   };
   void set_record_count(const int& val)
   {
       record_count = val;
   };
   TimeRange get_item_date_range() const
   {
       return item_date_range;
   };
   void set_item_date_range(const TimeRange& val)
   {
       item_date_range = val;
   };
   utility::string_t get_include_item() const
   {
       return include_item;
   };
   void set_include_item(const utility::string_t& val)
   {
       include_item = val;
   };
   utility::string_t get_wallet() const
   {
       return wallet;
   };
   void set_wallet(const utility::string_t& val)
   {
       wallet = val;
   };

private:
   utility::string_t locale;
   int from_record;
   int record_count;
   TimeRange item_date_range;
   utility::string_t include_item;
   utility::string_t wallet;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const GetAccountStatementRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const GetAccountStatementRequest& bfdata)
{
    os << "locale:" << std::endl << bfdata.locale << std::endl;
    os << "fromRecord:" << std::endl << bfdata.fromRecord << std::endl;
    os << "recordCount:" << std::endl << bfdata.recordCount << std::endl;
    os << "itemDateRange:" << std::endl << bfdata.itemDateRange << std::endl;
    os << "includeItem:" << std::endl << bfdata.includeItem << std::endl;
    os << "wallet:" << std::endl << bfdata.wallet << std::endl;
    return os;
}

// Returns a list of currency rates based on given currency
// Defined in: AccountAPING.xml
class ListCurrencyRatesRequest : public BetfairData
{
public:
   ListCurrencyRatesRequest(
      utility::string_t _fromCurrency) :
      from_currency(_fromCurrency){};
   
   // CTOR from json
   ListCurrencyRatesRequest(const web::json::value& jsonVal) : from_currency(from_json<utility::string_t>(jsonVal.at(U("fromCurrency"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(from_currency, U("fromCurrency"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_from_currency() const
   {
       return from_currency;
   };
   void set_from_currency(const utility::string_t& val)
   {
       from_currency = val;
   };

private:
   utility::string_t from_currency;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListCurrencyRatesRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListCurrencyRatesRequest& bfdata)
{
    os << "fromCurrency:" << std::endl << bfdata.fromCurrency << std::endl;
    return os;
}

// This heartbeat operation is provided to help customers have their positions
// managed automatically in the event of their API clients losing connectivity
// with the Betfair API. If a heartbeat request is not received within a
// prescribed time period, then Betfair will attempt to cancel all 'LIMIT' type
// bets for the given customer on the given exchange. There is no guarantee that
// this service will result in all bets being cancelled as there are a number of
// circumstances where bets are unable to be cancelled. Manual intervention is
// strongly advised in the event of a loss of connectivity to ensure that
// positions are correctly managed. If this service becomes unavailable for any
// reason, then your heartbeat will be unregistered automatically to avoid bets
// being inadvertently cancelled upon resumption of service. you should manage
// your position manually until the service is resumed. Heartbeat data may also be
// lost in the unlikely event of nodes failing within the cluster, which may
// result in your position not being managed until a subsequent heartbeat request
// is received.
// Defined in: HeartbeatAPING.xml
class HeartbeatRequest : public BetfairData
{
public:
   HeartbeatRequest(
      int _preferredTimeoutSeconds) :
      preferred_timeout_seconds(_preferredTimeoutSeconds){};
   
   // CTOR from json
   HeartbeatRequest(const web::json::value& jsonVal) : preferred_timeout_seconds(from_json<int>(jsonVal.at(U("preferredTimeoutSeconds"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(preferred_timeout_seconds, U("preferredTimeoutSeconds"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   int get_preferred_timeout_seconds() const
   {
       return preferred_timeout_seconds;
   };
   void set_preferred_timeout_seconds(const int& val)
   {
       preferred_timeout_seconds = val;
   };

private:
   int preferred_timeout_seconds;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const HeartbeatRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const HeartbeatRequest& bfdata)
{
    os << "preferredTimeoutSeconds:" << std::endl << bfdata.preferredTimeoutSeconds << std::endl;
    return os;
}

// Returns a list of Event Types (i.e. Sports) associated with the markets
// selected by the MarketFilter.
// Defined in: SportsAPING.xml
class ListEventTypesRequest : public BetfairData
{
public:
   ListEventTypesRequest(
      MarketFilter _filter) :
      filter(_filter){};
   
   // CTOR from json
   ListEventTypesRequest(const web::json::value& jsonVal) : filter(from_json<MarketFilter>(jsonVal.at(U("filter"))))
   {
      if (jsonVal.has_field(U("locale")))
      {
         locale = from_json<utility::string_t>(jsonVal.at(U("locale")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(filter, U("filter"), ret);
      build_json(locale, U("locale"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   MarketFilter get_filter() const
   {
       return filter;
   };
   void set_filter(const MarketFilter& val)
   {
       filter = val;
   };
   boost::optional<utility::string_t> get_locale() const
   {
       return locale;
   };
   void set_locale(const boost::optional<utility::string_t>& val)
   {
       locale = val;
   };

private:
   MarketFilter filter;
   boost::optional<utility::string_t> locale;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListEventTypesRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListEventTypesRequest& bfdata)
{
    os << "filter:" << std::endl << bfdata.filter << std::endl;
    if (bfdata.locale != boost::none)
    {
       os << "locale:" << std::endl << bfdata.locale.get()  << std::endl;
    }
    return os;
}

// Returns a list of Competitions (i.e., World Cup 2013) associated with the
// markets selected by the MarketFilter. Currently only Football markets have an
// associated competition.
// Defined in: SportsAPING.xml
class ListCompetitionsRequest : public BetfairData
{
public:
   ListCompetitionsRequest(
      MarketFilter _filter) :
      filter(_filter){};
   
   // CTOR from json
   ListCompetitionsRequest(const web::json::value& jsonVal) : filter(from_json<MarketFilter>(jsonVal.at(U("filter"))))
   {
      if (jsonVal.has_field(U("locale")))
      {
         locale = from_json<utility::string_t>(jsonVal.at(U("locale")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(filter, U("filter"), ret);
      build_json(locale, U("locale"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   MarketFilter get_filter() const
   {
       return filter;
   };
   void set_filter(const MarketFilter& val)
   {
       filter = val;
   };
   boost::optional<utility::string_t> get_locale() const
   {
       return locale;
   };
   void set_locale(const boost::optional<utility::string_t>& val)
   {
       locale = val;
   };

private:
   MarketFilter filter;
   boost::optional<utility::string_t> locale;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListCompetitionsRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListCompetitionsRequest& bfdata)
{
    os << "filter:" << std::endl << bfdata.filter << std::endl;
    if (bfdata.locale != boost::none)
    {
       os << "locale:" << std::endl << bfdata.locale.get()  << std::endl;
    }
    return os;
}

// Returns a list of time ranges in the granularity specified in the request (i.e.
// 3PM to 4PM, Aug 14th to Aug 15th) associated with the markets selected by the
// MarketFilter.
// Defined in: SportsAPING.xml
class ListTimeRangesRequest : public BetfairData
{
public:
   ListTimeRangesRequest(
      MarketFilter _filter, 
      utility::string_t _granularity) :
      filter(_filter),
      granularity(_granularity){};
   
   // CTOR from json
   ListTimeRangesRequest(const web::json::value& jsonVal) : filter(from_json<MarketFilter>(jsonVal.at(U("filter")))), granularity(from_json<utility::string_t>(jsonVal.at(U("granularity"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(filter, U("filter"), ret);
      build_json(granularity, U("granularity"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   MarketFilter get_filter() const
   {
       return filter;
   };
   void set_filter(const MarketFilter& val)
   {
       filter = val;
   };
   utility::string_t get_granularity() const
   {
       return granularity;
   };
   void set_granularity(const utility::string_t& val)
   {
       granularity = val;
   };

private:
   MarketFilter filter;
   utility::string_t granularity;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListTimeRangesRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListTimeRangesRequest& bfdata)
{
    os << "filter:" << std::endl << bfdata.filter << std::endl;
    os << "granularity:" << std::endl << bfdata.granularity << std::endl;
    return os;
}

// Returns a list of Events (i.e, Reading vs. Man United) associated with the
// markets selected by the MarketFilter.
// Defined in: SportsAPING.xml
class ListEventsRequest : public BetfairData
{
public:
   ListEventsRequest(
      MarketFilter _filter) :
      filter(_filter){};
   
   // CTOR from json
   ListEventsRequest(const web::json::value& jsonVal) : filter(from_json<MarketFilter>(jsonVal.at(U("filter"))))
   {
      if (jsonVal.has_field(U("locale")))
      {
         locale = from_json<utility::string_t>(jsonVal.at(U("locale")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(filter, U("filter"), ret);
      build_json(locale, U("locale"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   MarketFilter get_filter() const
   {
       return filter;
   };
   void set_filter(const MarketFilter& val)
   {
       filter = val;
   };
   boost::optional<utility::string_t> get_locale() const
   {
       return locale;
   };
   void set_locale(const boost::optional<utility::string_t>& val)
   {
       locale = val;
   };

private:
   MarketFilter filter;
   boost::optional<utility::string_t> locale;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListEventsRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListEventsRequest& bfdata)
{
    os << "filter:" << std::endl << bfdata.filter << std::endl;
    if (bfdata.locale != boost::none)
    {
       os << "locale:" << std::endl << bfdata.locale.get()  << std::endl;
    }
    return os;
}

// Returns a list of market types (i.e. MATCH_ODDS, NEXT_GOAL) associated with the
// markets selected by the MarketFilter. The market types are always the same,
// regardless of locale.
// Defined in: SportsAPING.xml
class ListMarketTypesRequest : public BetfairData
{
public:
   ListMarketTypesRequest(
      MarketFilter _filter) :
      filter(_filter){};
   
   // CTOR from json
   ListMarketTypesRequest(const web::json::value& jsonVal) : filter(from_json<MarketFilter>(jsonVal.at(U("filter"))))
   {
      if (jsonVal.has_field(U("locale")))
      {
         locale = from_json<utility::string_t>(jsonVal.at(U("locale")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(filter, U("filter"), ret);
      build_json(locale, U("locale"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   MarketFilter get_filter() const
   {
       return filter;
   };
   void set_filter(const MarketFilter& val)
   {
       filter = val;
   };
   boost::optional<utility::string_t> get_locale() const
   {
       return locale;
   };
   void set_locale(const boost::optional<utility::string_t>& val)
   {
       locale = val;
   };

private:
   MarketFilter filter;
   boost::optional<utility::string_t> locale;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListMarketTypesRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListMarketTypesRequest& bfdata)
{
    os << "filter:" << std::endl << bfdata.filter << std::endl;
    if (bfdata.locale != boost::none)
    {
       os << "locale:" << std::endl << bfdata.locale.get()  << std::endl;
    }
    return os;
}

// Returns a list of Countries associated with the markets selected by the
// MarketFilter.
// Defined in: SportsAPING.xml
class ListCountriesRequest : public BetfairData
{
public:
   ListCountriesRequest(
      MarketFilter _filter) :
      filter(_filter){};
   
   // CTOR from json
   ListCountriesRequest(const web::json::value& jsonVal) : filter(from_json<MarketFilter>(jsonVal.at(U("filter"))))
   {
      if (jsonVal.has_field(U("locale")))
      {
         locale = from_json<utility::string_t>(jsonVal.at(U("locale")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(filter, U("filter"), ret);
      build_json(locale, U("locale"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   MarketFilter get_filter() const
   {
       return filter;
   };
   void set_filter(const MarketFilter& val)
   {
       filter = val;
   };
   boost::optional<utility::string_t> get_locale() const
   {
       return locale;
   };
   void set_locale(const boost::optional<utility::string_t>& val)
   {
       locale = val;
   };

private:
   MarketFilter filter;
   boost::optional<utility::string_t> locale;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListCountriesRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListCountriesRequest& bfdata)
{
    os << "filter:" << std::endl << bfdata.filter << std::endl;
    if (bfdata.locale != boost::none)
    {
       os << "locale:" << std::endl << bfdata.locale.get()  << std::endl;
    }
    return os;
}

// Returns a list of Venues (i.e. Cheltenham, Ascot) associated with the markets
// selected by the MarketFilter. Currently, only Horse Racing markets are
// associated with a Venue.
// Defined in: SportsAPING.xml
class ListVenuesRequest : public BetfairData
{
public:
   ListVenuesRequest(
      MarketFilter _filter) :
      filter(_filter){};
   
   // CTOR from json
   ListVenuesRequest(const web::json::value& jsonVal) : filter(from_json<MarketFilter>(jsonVal.at(U("filter"))))
   {
      if (jsonVal.has_field(U("locale")))
      {
         locale = from_json<utility::string_t>(jsonVal.at(U("locale")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(filter, U("filter"), ret);
      build_json(locale, U("locale"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   MarketFilter get_filter() const
   {
       return filter;
   };
   void set_filter(const MarketFilter& val)
   {
       filter = val;
   };
   boost::optional<utility::string_t> get_locale() const
   {
       return locale;
   };
   void set_locale(const boost::optional<utility::string_t>& val)
   {
       locale = val;
   };

private:
   MarketFilter filter;
   boost::optional<utility::string_t> locale;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListVenuesRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListVenuesRequest& bfdata)
{
    os << "filter:" << std::endl << bfdata.filter << std::endl;
    if (bfdata.locale != boost::none)
    {
       os << "locale:" << std::endl << bfdata.locale.get()  << std::endl;
    }
    return os;
}

// Returns a list of information about markets that does not change (or changes
// very rarely). You use listMarketCatalogue to retrieve the name of the market,
// the names of selections and other information about markets.
// Defined in: SportsAPING.xml
class ListMarketCatalogueRequest : public BetfairData
{
public:
   ListMarketCatalogueRequest(
      MarketFilter _filter, 
      int _maxResults) :
      filter(_filter),
      max_results(_maxResults){};
   
   // CTOR from json
   ListMarketCatalogueRequest(const web::json::value& jsonVal) : filter(from_json<MarketFilter>(jsonVal.at(U("filter")))), max_results(from_json<int>(jsonVal.at(U("maxResults"))))
   {
      if (jsonVal.has_field(U("marketProjection")))
      {
         market_projection = from_json<std::vector<utility::string_t>>(jsonVal.at(U("marketProjection")));
      }
      if (jsonVal.has_field(U("sort")))
      {
         sort = from_json<utility::string_t>(jsonVal.at(U("sort")));
      }
      if (jsonVal.has_field(U("locale")))
      {
         locale = from_json<utility::string_t>(jsonVal.at(U("locale")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(filter, U("filter"), ret);
      build_json(market_projection, U("marketProjection"), ret);
      build_json(sort, U("sort"), ret);
      build_json(max_results, U("maxResults"), ret);
      build_json(locale, U("locale"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   MarketFilter get_filter() const
   {
       return filter;
   };
   void set_filter(const MarketFilter& val)
   {
       filter = val;
   };
   std::vector<utility::string_t> get_market_projection() const
   {
       return market_projection;
   };
   void set_market_projection(const std::vector<utility::string_t>& val)
   {
       market_projection = val;
   };
   boost::optional<utility::string_t> get_sort() const
   {
       return sort;
   };
   void set_sort(const boost::optional<utility::string_t>& val)
   {
       sort = val;
   };
   int get_max_results() const
   {
       return max_results;
   };
   void set_max_results(const int& val)
   {
       max_results = val;
   };
   boost::optional<utility::string_t> get_locale() const
   {
       return locale;
   };
   void set_locale(const boost::optional<utility::string_t>& val)
   {
       locale = val;
   };

private:
   MarketFilter filter;
   std::vector<utility::string_t> market_projection;
   boost::optional<utility::string_t> sort;
   int max_results;
   boost::optional<utility::string_t> locale;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListMarketCatalogueRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListMarketCatalogueRequest& bfdata)
{
    os << "filter:" << std::endl << bfdata.filter << std::endl;
    os << "marketProjection:" << std::endl << bfdata.marketProjection << std::endl;
    if (bfdata.sort != boost::none)
    {
       os << "sort:" << std::endl << bfdata.sort.get()  << std::endl;
    }
    os << "maxResults:" << std::endl << bfdata.maxResults << std::endl;
    if (bfdata.locale != boost::none)
    {
       os << "locale:" << std::endl << bfdata.locale.get()  << std::endl;
    }
    return os;
}

// Returns a list of dynamic data about markets. Dynamic data includes prices, the
// status of the market, the status of selections, the traded volume, and the
// status of any orders you have placed in the market.
// Defined in: SportsAPING.xml
class ListMarketBookRequest : public BetfairData
{
public:
   ListMarketBookRequest(
      std::vector<utility::string_t> _marketIds) :
      market_ids(_marketIds){};
   
   // CTOR from json
   ListMarketBookRequest(const web::json::value& jsonVal) : market_ids(from_json<std::vector<utility::string_t>>(jsonVal.at(U("marketIds"))))
   {
      if (jsonVal.has_field(U("priceProjection")))
      {
         price_projection = from_json<PriceProjection>(jsonVal.at(U("priceProjection")));
      }
      if (jsonVal.has_field(U("orderProjection")))
      {
         order_projection = from_json<utility::string_t>(jsonVal.at(U("orderProjection")));
      }
      if (jsonVal.has_field(U("matchProjection")))
      {
         match_projection = from_json<utility::string_t>(jsonVal.at(U("matchProjection")));
      }
      if (jsonVal.has_field(U("currencyCode")))
      {
         currency_code = from_json<utility::string_t>(jsonVal.at(U("currencyCode")));
      }
      if (jsonVal.has_field(U("locale")))
      {
         locale = from_json<utility::string_t>(jsonVal.at(U("locale")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(market_ids, U("marketIds"), ret);
      build_json(price_projection, U("priceProjection"), ret);
      build_json(order_projection, U("orderProjection"), ret);
      build_json(match_projection, U("matchProjection"), ret);
      build_json(currency_code, U("currencyCode"), ret);
      build_json(locale, U("locale"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   std::vector<utility::string_t> get_market_ids() const
   {
       return market_ids;
   };
   void set_market_ids(const std::vector<utility::string_t>& val)
   {
       market_ids = val;
   };
   boost::optional<PriceProjection> get_price_projection() const
   {
       return price_projection;
   };
   void set_price_projection(const boost::optional<PriceProjection>& val)
   {
       price_projection = val;
   };
   boost::optional<utility::string_t> get_order_projection() const
   {
       return order_projection;
   };
   void set_order_projection(const boost::optional<utility::string_t>& val)
   {
       order_projection = val;
   };
   boost::optional<utility::string_t> get_match_projection() const
   {
       return match_projection;
   };
   void set_match_projection(const boost::optional<utility::string_t>& val)
   {
       match_projection = val;
   };
   boost::optional<utility::string_t> get_currency_code() const
   {
       return currency_code;
   };
   void set_currency_code(const boost::optional<utility::string_t>& val)
   {
       currency_code = val;
   };
   boost::optional<utility::string_t> get_locale() const
   {
       return locale;
   };
   void set_locale(const boost::optional<utility::string_t>& val)
   {
       locale = val;
   };

private:
   std::vector<utility::string_t> market_ids;
   boost::optional<PriceProjection> price_projection;
   boost::optional<utility::string_t> order_projection;
   boost::optional<utility::string_t> match_projection;
   boost::optional<utility::string_t> currency_code;
   boost::optional<utility::string_t> locale;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListMarketBookRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListMarketBookRequest& bfdata)
{
    os << "marketIds:" << std::endl << bfdata.marketIds << std::endl;
    if (bfdata.priceProjection != boost::none)
    {
       os << "priceProjection:" << std::endl << bfdata.priceProjection.get()  << std::endl;
    }
    if (bfdata.orderProjection != boost::none)
    {
       os << "orderProjection:" << std::endl << bfdata.orderProjection.get()  << std::endl;
    }
    if (bfdata.matchProjection != boost::none)
    {
       os << "matchProjection:" << std::endl << bfdata.matchProjection.get()  << std::endl;
    }
    if (bfdata.currencyCode != boost::none)
    {
       os << "currencyCode:" << std::endl << bfdata.currencyCode.get()  << std::endl;
    }
    if (bfdata.locale != boost::none)
    {
       os << "locale:" << std::endl << bfdata.locale.get()  << std::endl;
    }
    return os;
}

// Returns a list of your current orders. Optionally you can filter and sort your
// current orders using the various parameters, setting none of the parameters
// will return all of your current orders, up to a maximum of 1000 bets, ordered
// BY_BET and sorted EARLIEST_TO_LATEST. To retrieve more than 1000 orders, you
// need to make use of the fromRecord and recordCount parameters.
// Defined in: SportsAPING.xml
class ListCurrentOrdersRequest : public BetfairData
{
public:
   ListCurrentOrdersRequest() = default;
   
   // CTOR from json
   ListCurrentOrdersRequest(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("betIds")))
      {
         bet_ids = from_json<std::vector<utility::string_t>>(jsonVal.at(U("betIds")));
      }
      if (jsonVal.has_field(U("marketIds")))
      {
         market_ids = from_json<std::vector<utility::string_t>>(jsonVal.at(U("marketIds")));
      }
      if (jsonVal.has_field(U("orderProjection")))
      {
         order_projection = from_json<utility::string_t>(jsonVal.at(U("orderProjection")));
      }
      if (jsonVal.has_field(U("placedDateRange")))
      {
         placed_date_range = from_json<TimeRange>(jsonVal.at(U("placedDateRange")));
      }
      if (jsonVal.has_field(U("dateRange")))
      {
         date_range = from_json<TimeRange>(jsonVal.at(U("dateRange")));
      }
      if (jsonVal.has_field(U("orderBy")))
      {
         order_by = from_json<utility::string_t>(jsonVal.at(U("orderBy")));
      }
      if (jsonVal.has_field(U("sortDir")))
      {
         sort_dir = from_json<utility::string_t>(jsonVal.at(U("sortDir")));
      }
      if (jsonVal.has_field(U("fromRecord")))
      {
         from_record = from_json<int>(jsonVal.at(U("fromRecord")));
      }
      if (jsonVal.has_field(U("recordCount")))
      {
         record_count = from_json<int>(jsonVal.at(U("recordCount")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(bet_ids, U("betIds"), ret);
      build_json(market_ids, U("marketIds"), ret);
      build_json(order_projection, U("orderProjection"), ret);
      build_json(placed_date_range, U("placedDateRange"), ret);
      build_json(date_range, U("dateRange"), ret);
      build_json(order_by, U("orderBy"), ret);
      build_json(sort_dir, U("sortDir"), ret);
      build_json(from_record, U("fromRecord"), ret);
      build_json(record_count, U("recordCount"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   std::vector<utility::string_t> get_bet_ids() const
   {
       return bet_ids;
   };
   void set_bet_ids(const std::vector<utility::string_t>& val)
   {
       bet_ids = val;
   };
   std::vector<utility::string_t> get_market_ids() const
   {
       return market_ids;
   };
   void set_market_ids(const std::vector<utility::string_t>& val)
   {
       market_ids = val;
   };
   boost::optional<utility::string_t> get_order_projection() const
   {
       return order_projection;
   };
   void set_order_projection(const boost::optional<utility::string_t>& val)
   {
       order_projection = val;
   };
   boost::optional<TimeRange> get_placed_date_range() const
   {
       return placed_date_range;
   };
   void set_placed_date_range(const boost::optional<TimeRange>& val)
   {
       placed_date_range = val;
   };
   boost::optional<TimeRange> get_date_range() const
   {
       return date_range;
   };
   void set_date_range(const boost::optional<TimeRange>& val)
   {
       date_range = val;
   };
   boost::optional<utility::string_t> get_order_by() const
   {
       return order_by;
   };
   void set_order_by(const boost::optional<utility::string_t>& val)
   {
       order_by = val;
   };
   boost::optional<utility::string_t> get_sort_dir() const
   {
       return sort_dir;
   };
   void set_sort_dir(const boost::optional<utility::string_t>& val)
   {
       sort_dir = val;
   };
   boost::optional<int> get_from_record() const
   {
       return from_record;
   };
   void set_from_record(const boost::optional<int>& val)
   {
       from_record = val;
   };
   boost::optional<int> get_record_count() const
   {
       return record_count;
   };
   void set_record_count(const boost::optional<int>& val)
   {
       record_count = val;
   };

private:
   std::vector<utility::string_t> bet_ids;
   std::vector<utility::string_t> market_ids;
   boost::optional<utility::string_t> order_projection;
   boost::optional<TimeRange> placed_date_range;
   boost::optional<TimeRange> date_range;
   boost::optional<utility::string_t> order_by;
   boost::optional<utility::string_t> sort_dir;
   boost::optional<int> from_record;
   boost::optional<int> record_count;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListCurrentOrdersRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListCurrentOrdersRequest& bfdata)
{
    os << "betIds:" << std::endl << bfdata.betIds << std::endl;
    os << "marketIds:" << std::endl << bfdata.marketIds << std::endl;
    if (bfdata.orderProjection != boost::none)
    {
       os << "orderProjection:" << std::endl << bfdata.orderProjection.get()  << std::endl;
    }
    if (bfdata.placedDateRange != boost::none)
    {
       os << "placedDateRange:" << std::endl << bfdata.placedDateRange.get()  << std::endl;
    }
    if (bfdata.dateRange != boost::none)
    {
       os << "dateRange:" << std::endl << bfdata.dateRange.get()  << std::endl;
    }
    if (bfdata.orderBy != boost::none)
    {
       os << "orderBy:" << std::endl << bfdata.orderBy.get()  << std::endl;
    }
    if (bfdata.sortDir != boost::none)
    {
       os << "sortDir:" << std::endl << bfdata.sortDir.get()  << std::endl;
    }
    if (bfdata.fromRecord != boost::none)
    {
       os << "fromRecord:" << std::endl << bfdata.fromRecord.get()  << std::endl;
    }
    if (bfdata.recordCount != boost::none)
    {
       os << "recordCount:" << std::endl << bfdata.recordCount.get()  << std::endl;
    }
    return os;
}

// Returns a List of bets based on the bet status, ordered by settled date
// Defined in: SportsAPING.xml
class ListClearedOrdersRequest : public BetfairData
{
public:
   ListClearedOrdersRequest(
      utility::string_t _betStatus) :
      bet_status(_betStatus){};
   
   // CTOR from json
   ListClearedOrdersRequest(const web::json::value& jsonVal) : bet_status(from_json<utility::string_t>(jsonVal.at(U("betStatus"))))
   {
      if (jsonVal.has_field(U("eventTypeIds")))
      {
         event_type_ids = from_json<std::vector<utility::string_t>>(jsonVal.at(U("eventTypeIds")));
      }
      if (jsonVal.has_field(U("eventIds")))
      {
         event_ids = from_json<std::vector<utility::string_t>>(jsonVal.at(U("eventIds")));
      }
      if (jsonVal.has_field(U("marketIds")))
      {
         market_ids = from_json<std::vector<utility::string_t>>(jsonVal.at(U("marketIds")));
      }
      if (jsonVal.has_field(U("runnerIds")))
      {
         runner_ids = from_json<std::vector<RunnerId>>(jsonVal.at(U("runnerIds")));
      }
      if (jsonVal.has_field(U("betIds")))
      {
         bet_ids = from_json<std::vector<utility::string_t>>(jsonVal.at(U("betIds")));
      }
      if (jsonVal.has_field(U("side")))
      {
         side = from_json<utility::string_t>(jsonVal.at(U("side")));
      }
      if (jsonVal.has_field(U("settledDateRange")))
      {
         settled_date_range = from_json<TimeRange>(jsonVal.at(U("settledDateRange")));
      }
      if (jsonVal.has_field(U("groupBy")))
      {
         group_by = from_json<utility::string_t>(jsonVal.at(U("groupBy")));
      }
      if (jsonVal.has_field(U("includeItemDescription")))
      {
         include_item_description = from_json<bool>(jsonVal.at(U("includeItemDescription")));
      }
      if (jsonVal.has_field(U("locale")))
      {
         locale = from_json<utility::string_t>(jsonVal.at(U("locale")));
      }
      if (jsonVal.has_field(U("fromRecord")))
      {
         from_record = from_json<int>(jsonVal.at(U("fromRecord")));
      }
      if (jsonVal.has_field(U("recordCount")))
      {
         record_count = from_json<int>(jsonVal.at(U("recordCount")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(bet_status, U("betStatus"), ret);
      build_json(event_type_ids, U("eventTypeIds"), ret);
      build_json(event_ids, U("eventIds"), ret);
      build_json(market_ids, U("marketIds"), ret);
      build_json(runner_ids, U("runnerIds"), ret);
      build_json(bet_ids, U("betIds"), ret);
      build_json(side, U("side"), ret);
      build_json(settled_date_range, U("settledDateRange"), ret);
      build_json(group_by, U("groupBy"), ret);
      build_json(include_item_description, U("includeItemDescription"), ret);
      build_json(locale, U("locale"), ret);
      build_json(from_record, U("fromRecord"), ret);
      build_json(record_count, U("recordCount"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_bet_status() const
   {
       return bet_status;
   };
   void set_bet_status(const utility::string_t& val)
   {
       bet_status = val;
   };
   std::vector<utility::string_t> get_event_type_ids() const
   {
       return event_type_ids;
   };
   void set_event_type_ids(const std::vector<utility::string_t>& val)
   {
       event_type_ids = val;
   };
   std::vector<utility::string_t> get_event_ids() const
   {
       return event_ids;
   };
   void set_event_ids(const std::vector<utility::string_t>& val)
   {
       event_ids = val;
   };
   std::vector<utility::string_t> get_market_ids() const
   {
       return market_ids;
   };
   void set_market_ids(const std::vector<utility::string_t>& val)
   {
       market_ids = val;
   };
   std::vector<RunnerId> get_runner_ids() const
   {
       return runner_ids;
   };
   void set_runner_ids(const std::vector<RunnerId>& val)
   {
       runner_ids = val;
   };
   std::vector<utility::string_t> get_bet_ids() const
   {
       return bet_ids;
   };
   void set_bet_ids(const std::vector<utility::string_t>& val)
   {
       bet_ids = val;
   };
   boost::optional<utility::string_t> get_side() const
   {
       return side;
   };
   void set_side(const boost::optional<utility::string_t>& val)
   {
       side = val;
   };
   boost::optional<TimeRange> get_settled_date_range() const
   {
       return settled_date_range;
   };
   void set_settled_date_range(const boost::optional<TimeRange>& val)
   {
       settled_date_range = val;
   };
   boost::optional<utility::string_t> get_group_by() const
   {
       return group_by;
   };
   void set_group_by(const boost::optional<utility::string_t>& val)
   {
       group_by = val;
   };
   boost::optional<bool> get_include_item_description() const
   {
       return include_item_description;
   };
   void set_include_item_description(const boost::optional<bool>& val)
   {
       include_item_description = val;
   };
   boost::optional<utility::string_t> get_locale() const
   {
       return locale;
   };
   void set_locale(const boost::optional<utility::string_t>& val)
   {
       locale = val;
   };
   boost::optional<int> get_from_record() const
   {
       return from_record;
   };
   void set_from_record(const boost::optional<int>& val)
   {
       from_record = val;
   };
   boost::optional<int> get_record_count() const
   {
       return record_count;
   };
   void set_record_count(const boost::optional<int>& val)
   {
       record_count = val;
   };

private:
   utility::string_t bet_status;
   std::vector<utility::string_t> event_type_ids;
   std::vector<utility::string_t> event_ids;
   std::vector<utility::string_t> market_ids;
   std::vector<RunnerId> runner_ids;
   std::vector<utility::string_t> bet_ids;
   boost::optional<utility::string_t> side;
   boost::optional<TimeRange> settled_date_range;
   boost::optional<utility::string_t> group_by;
   boost::optional<bool> include_item_description;
   boost::optional<utility::string_t> locale;
   boost::optional<int> from_record;
   boost::optional<int> record_count;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListClearedOrdersRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListClearedOrdersRequest& bfdata)
{
    os << "betStatus:" << std::endl << bfdata.betStatus << std::endl;
    os << "eventTypeIds:" << std::endl << bfdata.eventTypeIds << std::endl;
    os << "eventIds:" << std::endl << bfdata.eventIds << std::endl;
    os << "marketIds:" << std::endl << bfdata.marketIds << std::endl;
    os << "runnerIds:" << std::endl << bfdata.runnerIds << std::endl;
    os << "betIds:" << std::endl << bfdata.betIds << std::endl;
    if (bfdata.side != boost::none)
    {
       os << "side:" << std::endl << bfdata.side.get()  << std::endl;
    }
    if (bfdata.settledDateRange != boost::none)
    {
       os << "settledDateRange:" << std::endl << bfdata.settledDateRange.get()  << std::endl;
    }
    if (bfdata.groupBy != boost::none)
    {
       os << "groupBy:" << std::endl << bfdata.groupBy.get()  << std::endl;
    }
    if (bfdata.includeItemDescription != boost::none)
    {
       os << "includeItemDescription:" << std::endl << bfdata.includeItemDescription.get()  << std::endl;
    }
    if (bfdata.locale != boost::none)
    {
       os << "locale:" << std::endl << bfdata.locale.get()  << std::endl;
    }
    if (bfdata.fromRecord != boost::none)
    {
       os << "fromRecord:" << std::endl << bfdata.fromRecord.get()  << std::endl;
    }
    if (bfdata.recordCount != boost::none)
    {
       os << "recordCount:" << std::endl << bfdata.recordCount.get()  << std::endl;
    }
    return os;
}

// Place new orders into market. LIMIT orders below the minimum bet size are
// allowed if there is an unmatched bet at the same price in the market. This
// operation is atomic in that all orders will be placed or none will be placed.
// Defined in: SportsAPING.xml
class PlaceOrdersRequest : public BetfairData
{
public:
   PlaceOrdersRequest(
      utility::string_t _marketId, 
      std::vector<PlaceInstruction> _instructions) :
      market_id(_marketId),
      instructions(_instructions){};
   
   // CTOR from json
   PlaceOrdersRequest(const web::json::value& jsonVal) : market_id(from_json<utility::string_t>(jsonVal.at(U("marketId")))), instructions(from_json<std::vector<PlaceInstruction>>(jsonVal.at(U("instructions"))))
   {
      if (jsonVal.has_field(U("customerRef")))
      {
         customer_ref = from_json<utility::string_t>(jsonVal.at(U("customerRef")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(market_id, U("marketId"), ret);
      build_json(instructions, U("instructions"), ret);
      build_json(customer_ref, U("customerRef"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_market_id() const
   {
       return market_id;
   };
   void set_market_id(const utility::string_t& val)
   {
       market_id = val;
   };
   std::vector<PlaceInstruction> get_instructions() const
   {
       return instructions;
   };
   void set_instructions(const std::vector<PlaceInstruction>& val)
   {
       instructions = val;
   };
   boost::optional<utility::string_t> get_customer_ref() const
   {
       return customer_ref;
   };
   void set_customer_ref(const boost::optional<utility::string_t>& val)
   {
       customer_ref = val;
   };

private:
   utility::string_t market_id;
   std::vector<PlaceInstruction> instructions;
   boost::optional<utility::string_t> customer_ref;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const PlaceOrdersRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const PlaceOrdersRequest& bfdata)
{
    os << "marketId:" << std::endl << bfdata.marketId << std::endl;
    os << "instructions:" << std::endl << bfdata.instructions << std::endl;
    if (bfdata.customerRef != boost::none)
    {
       os << "customerRef:" << std::endl << bfdata.customerRef.get()  << std::endl;
    }
    return os;
}

// Cancel all bets OR cancel all bets on a market OR fully or partially cancel
// particular orders on a market. Only LIMIT orders an be cancelled or partially
// cancelled once placed.
// Defined in: SportsAPING.xml
class CancelOrdersRequest : public BetfairData
{
public:
   CancelOrdersRequest() = default;
   
   // CTOR from json
   CancelOrdersRequest(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("marketId")))
      {
         market_id = from_json<utility::string_t>(jsonVal.at(U("marketId")));
      }
      if (jsonVal.has_field(U("instructions")))
      {
         instructions = from_json<std::vector<CancelInstruction>>(jsonVal.at(U("instructions")));
      }
      if (jsonVal.has_field(U("customerRef")))
      {
         customer_ref = from_json<utility::string_t>(jsonVal.at(U("customerRef")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(market_id, U("marketId"), ret);
      build_json(instructions, U("instructions"), ret);
      build_json(customer_ref, U("customerRef"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<utility::string_t> get_market_id() const
   {
       return market_id;
   };
   void set_market_id(const boost::optional<utility::string_t>& val)
   {
       market_id = val;
   };
   std::vector<CancelInstruction> get_instructions() const
   {
       return instructions;
   };
   void set_instructions(const std::vector<CancelInstruction>& val)
   {
       instructions = val;
   };
   boost::optional<utility::string_t> get_customer_ref() const
   {
       return customer_ref;
   };
   void set_customer_ref(const boost::optional<utility::string_t>& val)
   {
       customer_ref = val;
   };

private:
   boost::optional<utility::string_t> market_id;
   std::vector<CancelInstruction> instructions;
   boost::optional<utility::string_t> customer_ref;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CancelOrdersRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CancelOrdersRequest& bfdata)
{
    if (bfdata.marketId != boost::none)
    {
       os << "marketId:" << std::endl << bfdata.marketId.get()  << std::endl;
    }
    os << "instructions:" << std::endl << bfdata.instructions << std::endl;
    if (bfdata.customerRef != boost::none)
    {
       os << "customerRef:" << std::endl << bfdata.customerRef.get()  << std::endl;
    }
    return os;
}

// This operation is logically a bulk cancel followed by a bulk place. The cancel
// is completed first then the new orders are placed. The new orders will be
// placed atomically in that they will all be placed or none will be placed. In
// the case where the new orders cannot be placed the cancellations will not be
// rolled back. See ReplaceInstruction.
// Defined in: SportsAPING.xml
class ReplaceOrdersRequest : public BetfairData
{
public:
   ReplaceOrdersRequest(
      utility::string_t _marketId, 
      std::vector<ReplaceInstruction> _instructions) :
      market_id(_marketId),
      instructions(_instructions){};
   
   // CTOR from json
   ReplaceOrdersRequest(const web::json::value& jsonVal) : market_id(from_json<utility::string_t>(jsonVal.at(U("marketId")))), instructions(from_json<std::vector<ReplaceInstruction>>(jsonVal.at(U("instructions"))))
   {
      if (jsonVal.has_field(U("customerRef")))
      {
         customer_ref = from_json<utility::string_t>(jsonVal.at(U("customerRef")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(market_id, U("marketId"), ret);
      build_json(instructions, U("instructions"), ret);
      build_json(customer_ref, U("customerRef"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_market_id() const
   {
       return market_id;
   };
   void set_market_id(const utility::string_t& val)
   {
       market_id = val;
   };
   std::vector<ReplaceInstruction> get_instructions() const
   {
       return instructions;
   };
   void set_instructions(const std::vector<ReplaceInstruction>& val)
   {
       instructions = val;
   };
   boost::optional<utility::string_t> get_customer_ref() const
   {
       return customer_ref;
   };
   void set_customer_ref(const boost::optional<utility::string_t>& val)
   {
       customer_ref = val;
   };

private:
   utility::string_t market_id;
   std::vector<ReplaceInstruction> instructions;
   boost::optional<utility::string_t> customer_ref;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ReplaceOrdersRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ReplaceOrdersRequest& bfdata)
{
    os << "marketId:" << std::endl << bfdata.marketId << std::endl;
    os << "instructions:" << std::endl << bfdata.instructions << std::endl;
    if (bfdata.customerRef != boost::none)
    {
       os << "customerRef:" << std::endl << bfdata.customerRef.get()  << std::endl;
    }
    return os;
}

// Update non-exposure changing fields
// Defined in: SportsAPING.xml
class UpdateOrdersRequest : public BetfairData
{
public:
   UpdateOrdersRequest(
      utility::string_t _marketId, 
      std::vector<UpdateInstruction> _instructions) :
      market_id(_marketId),
      instructions(_instructions){};
   
   // CTOR from json
   UpdateOrdersRequest(const web::json::value& jsonVal) : market_id(from_json<utility::string_t>(jsonVal.at(U("marketId")))), instructions(from_json<std::vector<UpdateInstruction>>(jsonVal.at(U("instructions"))))
   {
      if (jsonVal.has_field(U("customerRef")))
      {
         customer_ref = from_json<utility::string_t>(jsonVal.at(U("customerRef")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(market_id, U("marketId"), ret);
      build_json(instructions, U("instructions"), ret);
      build_json(customer_ref, U("customerRef"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_market_id() const
   {
       return market_id;
   };
   void set_market_id(const utility::string_t& val)
   {
       market_id = val;
   };
   std::vector<UpdateInstruction> get_instructions() const
   {
       return instructions;
   };
   void set_instructions(const std::vector<UpdateInstruction>& val)
   {
       instructions = val;
   };
   boost::optional<utility::string_t> get_customer_ref() const
   {
       return customer_ref;
   };
   void set_customer_ref(const boost::optional<utility::string_t>& val)
   {
       customer_ref = val;
   };

private:
   utility::string_t market_id;
   std::vector<UpdateInstruction> instructions;
   boost::optional<utility::string_t> customer_ref;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const UpdateOrdersRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const UpdateOrdersRequest& bfdata)
{
    os << "marketId:" << std::endl << bfdata.marketId << std::endl;
    os << "instructions:" << std::endl << bfdata.instructions << std::endl;
    if (bfdata.customerRef != boost::none)
    {
       os << "customerRef:" << std::endl << bfdata.customerRef.get()  << std::endl;
    }
    return os;
}

// Retrieve profit and loss for a given list of markets. The values are calculated
// using matched bets and optionally settled bets. Only odds markets are
// implemented, markets of other types are silently ignored.
// Defined in: SportsAPING.xml
class ListMarketProfitAndLossRequest : public BetfairData
{
public:
   ListMarketProfitAndLossRequest(
      std::vector<utility::string_t> _marketIds, 
      bool _includeSettledBets, 
      bool _includeBspBets, 
      bool _netOfCommission) :
      market_ids(_marketIds),
      include_settled_bets(_includeSettledBets),
      include_bsp_bets(_includeBspBets),
      net_of_commission(_netOfCommission){};
   
   // CTOR from json
   ListMarketProfitAndLossRequest(const web::json::value& jsonVal) : market_ids(from_json<std::vector<utility::string_t>>(jsonVal.at(U("marketIds")))), include_settled_bets(from_json<bool>(jsonVal.at(U("includeSettledBets")))), include_bsp_bets(from_json<bool>(jsonVal.at(U("includeBspBets")))), net_of_commission(from_json<bool>(jsonVal.at(U("netOfCommission"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(market_ids, U("marketIds"), ret);
      build_json(include_settled_bets, U("includeSettledBets"), ret);
      build_json(include_bsp_bets, U("includeBspBets"), ret);
      build_json(net_of_commission, U("netOfCommission"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   std::vector<utility::string_t> get_market_ids() const
   {
       return market_ids;
   };
   void set_market_ids(const std::vector<utility::string_t>& val)
   {
       market_ids = val;
   };
   bool get_include_settled_bets() const
   {
       return include_settled_bets;
   };
   void set_include_settled_bets(const bool& val)
   {
       include_settled_bets = val;
   };
   bool get_include_bsp_bets() const
   {
       return include_bsp_bets;
   };
   void set_include_bsp_bets(const bool& val)
   {
       include_bsp_bets = val;
   };
   bool get_net_of_commission() const
   {
       return net_of_commission;
   };
   void set_net_of_commission(const bool& val)
   {
       net_of_commission = val;
   };

private:
   std::vector<utility::string_t> market_ids;
   bool include_settled_bets;
   bool include_bsp_bets;
   bool net_of_commission;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListMarketProfitAndLossRequest& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ListMarketProfitAndLossRequest& bfdata)
{
    os << "marketIds:" << std::endl << bfdata.marketIds << std::endl;
    os << "includeSettledBets:" << std::endl << bfdata.includeSettledBets << std::endl;
    os << "includeBspBets:" << std::endl << bfdata.includeBspBets << std::endl;
    os << "netOfCommission:" << std::endl << bfdata.netOfCommission << std::endl;
    return os;
}

} // betfair_api namespace 