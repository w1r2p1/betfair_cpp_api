
//********************************************************************
// Auto generated types do not edit
// Data time generated 2015-12-14 15:58:18.623571
//********************************************************************
#pragma once
#include "../include/betfair_types_helper.h" 
#include "../include/json_builder.h"
#include "betfair_api_types.h"

namespace betfair_api
{
// Transfer operation response
// Defined in: AccountAPING.xml
class TransferResponse : public BetfairData
{
public:
   TransferResponse(
      utility::string_t _transactionId) :
      transaction_id(_transactionId){};
   TransferResponse() = default;
   
   // CTOR from json
   TransferResponse(const web::json::value& jsonVal) : transaction_id(from_json<utility::string_t>(jsonVal.at(U("transactionId"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(transaction_id, U("transactionId"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_transaction_id() const
   {
       return transaction_id;
   };
   void set_transaction_id(const utility::string_t& val)
   {
       transaction_id = val;
   };

private:
   utility::string_t transaction_id;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const TransferResponse& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const TransferResponse& bfdata)
{
    os << "transactionId:" << std::endl << bfdata.transaction_id << std::endl;
    return os;
}

// Summary of a cleared order.
// Defined in: AccountAPING.xml
class StatementLegacyData : public BetfairData
{
public:
   StatementLegacyData(
      double _avgPrice, 
      double _betSize, 
      utility::string_t _betType, 
      utility::string_t _betCategoryType, 
      utility::string_t _commissionRate, 
      int _eventId, 
      int _eventTypeId, 
      utility::string_t _fullMarketName, 
      double _grossBetAmount, 
      utility::string_t _marketName, 
      utility::string_t _marketType, 
      DateTime _placedDate, 
      int _selectionId, 
      utility::string_t _selectionName, 
      DateTime _startDate, 
      utility::string_t _transactionType, 
      int _transactionId, 
      utility::string_t _winLose) :
      avg_price(_avgPrice),
      bet_size(_betSize),
      bet_type(_betType),
      bet_category_type(_betCategoryType),
      commission_rate(_commissionRate),
      event_id(_eventId),
      event_type_id(_eventTypeId),
      full_market_name(_fullMarketName),
      gross_bet_amount(_grossBetAmount),
      market_name(_marketName),
      market_type(_marketType),
      placed_date(_placedDate),
      selection_id(_selectionId),
      selection_name(_selectionName),
      start_date(_startDate),
      transaction_type(_transactionType),
      transaction_id(_transactionId),
      win_lose(_winLose){};
   
   // CTOR from json
   StatementLegacyData(const web::json::value& jsonVal) : avg_price(from_json<double>(jsonVal.at(U("avgPrice")))), bet_size(from_json<double>(jsonVal.at(U("betSize")))), bet_type(from_json<utility::string_t>(jsonVal.at(U("betType")))), bet_category_type(from_json<utility::string_t>(jsonVal.at(U("betCategoryType")))), commission_rate(from_json<utility::string_t>(jsonVal.at(U("commissionRate")))), event_id(from_json<int>(jsonVal.at(U("eventId")))), event_type_id(from_json<int>(jsonVal.at(U("eventTypeId")))), full_market_name(from_json<utility::string_t>(jsonVal.at(U("fullMarketName")))), gross_bet_amount(from_json<double>(jsonVal.at(U("grossBetAmount")))), market_name(from_json<utility::string_t>(jsonVal.at(U("marketName")))), market_type(from_json<utility::string_t>(jsonVal.at(U("marketType")))), placed_date(from_json<DateTime>(jsonVal.at(U("placedDate")))), selection_id(from_json<int>(jsonVal.at(U("selectionId")))), selection_name(from_json<utility::string_t>(jsonVal.at(U("selectionName")))), start_date(from_json<DateTime>(jsonVal.at(U("startDate")))), transaction_type(from_json<utility::string_t>(jsonVal.at(U("transactionType")))), transaction_id(from_json<int>(jsonVal.at(U("transactionId")))), win_lose(from_json<utility::string_t>(jsonVal.at(U("winLose"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(avg_price, U("avgPrice"), ret);
      build_json(bet_size, U("betSize"), ret);
      build_json(bet_type, U("betType"), ret);
      build_json(bet_category_type, U("betCategoryType"), ret);
      build_json(commission_rate, U("commissionRate"), ret);
      build_json(event_id, U("eventId"), ret);
      build_json(event_type_id, U("eventTypeId"), ret);
      build_json(full_market_name, U("fullMarketName"), ret);
      build_json(gross_bet_amount, U("grossBetAmount"), ret);
      build_json(market_name, U("marketName"), ret);
      build_json(market_type, U("marketType"), ret);
      build_json(placed_date, U("placedDate"), ret);
      build_json(selection_id, U("selectionId"), ret);
      build_json(selection_name, U("selectionName"), ret);
      build_json(start_date, U("startDate"), ret);
      build_json(transaction_type, U("transactionType"), ret);
      build_json(transaction_id, U("transactionId"), ret);
      build_json(win_lose, U("winLose"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   double get_avg_price() const
   {
       return avg_price;
   };
   void set_avg_price(const double& val)
   {
       avg_price = val;
   };
   double get_bet_size() const
   {
       return bet_size;
   };
   void set_bet_size(const double& val)
   {
       bet_size = val;
   };
   utility::string_t get_bet_type() const
   {
       return bet_type;
   };
   void set_bet_type(const utility::string_t& val)
   {
       bet_type = val;
   };
   utility::string_t get_bet_category_type() const
   {
       return bet_category_type;
   };
   void set_bet_category_type(const utility::string_t& val)
   {
       bet_category_type = val;
   };
   utility::string_t get_commission_rate() const
   {
       return commission_rate;
   };
   void set_commission_rate(const utility::string_t& val)
   {
       commission_rate = val;
   };
   int get_event_id() const
   {
       return event_id;
   };
   void set_event_id(const int& val)
   {
       event_id = val;
   };
   int get_event_type_id() const
   {
       return event_type_id;
   };
   void set_event_type_id(const int& val)
   {
       event_type_id = val;
   };
   utility::string_t get_full_market_name() const
   {
       return full_market_name;
   };
   void set_full_market_name(const utility::string_t& val)
   {
       full_market_name = val;
   };
   double get_gross_bet_amount() const
   {
       return gross_bet_amount;
   };
   void set_gross_bet_amount(const double& val)
   {
       gross_bet_amount = val;
   };
   utility::string_t get_market_name() const
   {
       return market_name;
   };
   void set_market_name(const utility::string_t& val)
   {
       market_name = val;
   };
   utility::string_t get_market_type() const
   {
       return market_type;
   };
   void set_market_type(const utility::string_t& val)
   {
       market_type = val;
   };
   DateTime get_placed_date() const
   {
       return placed_date;
   };
   void set_placed_date(const DateTime& val)
   {
       placed_date = val;
   };
   int get_selection_id() const
   {
       return selection_id;
   };
   void set_selection_id(const int& val)
   {
       selection_id = val;
   };
   utility::string_t get_selection_name() const
   {
       return selection_name;
   };
   void set_selection_name(const utility::string_t& val)
   {
       selection_name = val;
   };
   DateTime get_start_date() const
   {
       return start_date;
   };
   void set_start_date(const DateTime& val)
   {
       start_date = val;
   };
   utility::string_t get_transaction_type() const
   {
       return transaction_type;
   };
   void set_transaction_type(const utility::string_t& val)
   {
       transaction_type = val;
   };
   int get_transaction_id() const
   {
       return transaction_id;
   };
   void set_transaction_id(const int& val)
   {
       transaction_id = val;
   };
   utility::string_t get_win_lose() const
   {
       return win_lose;
   };
   void set_win_lose(const utility::string_t& val)
   {
       win_lose = val;
   };

private:
   double avg_price;
   double bet_size;
   utility::string_t bet_type;
   utility::string_t bet_category_type;
   utility::string_t commission_rate;
   int event_id;
   int event_type_id;
   utility::string_t full_market_name;
   double gross_bet_amount;
   utility::string_t market_name;
   utility::string_t market_type;
   DateTime placed_date;
   int selection_id;
   utility::string_t selection_name;
   DateTime start_date;
   utility::string_t transaction_type;
   int transaction_id;
   utility::string_t win_lose;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const StatementLegacyData& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const StatementLegacyData& bfdata)
{
    os << "avgPrice:" << std::endl << bfdata.avg_price << std::endl;
    os << "betSize:" << std::endl << bfdata.bet_size << std::endl;
    os << "betType:" << std::endl << bfdata.bet_type << std::endl;
    os << "betCategoryType:" << std::endl << bfdata.bet_category_type << std::endl;
    os << "commissionRate:" << std::endl << bfdata.commission_rate << std::endl;
    os << "eventId:" << std::endl << bfdata.event_id << std::endl;
    os << "eventTypeId:" << std::endl << bfdata.event_type_id << std::endl;
    os << "fullMarketName:" << std::endl << bfdata.full_market_name << std::endl;
    os << "grossBetAmount:" << std::endl << bfdata.gross_bet_amount << std::endl;
    os << "marketName:" << std::endl << bfdata.market_name << std::endl;
    os << "marketType:" << std::endl << bfdata.market_type << std::endl;
    os << "placedDate:" << std::endl << bfdata.placed_date << std::endl;
    os << "selectionId:" << std::endl << bfdata.selection_id << std::endl;
    os << "selectionName:" << std::endl << bfdata.selection_name << std::endl;
    os << "startDate:" << std::endl << bfdata.start_date << std::endl;
    os << "transactionType:" << std::endl << bfdata.transaction_type << std::endl;
    os << "transactionId:" << std::endl << bfdata.transaction_id << std::endl;
    os << "winLose:" << std::endl << bfdata.win_lose << std::endl;
    return os;
}

// TimeRange
// Defined in: AccountAPING.xml
class TimeRange : public BetfairData
{
public:
   TimeRange(
      DateTime _from, 
      DateTime _to) :
      from(_from),
      to(_to){};
   
   // CTOR from json
   TimeRange(const web::json::value& jsonVal) : from(from_json<DateTime>(jsonVal.at(U("from")))), to(from_json<DateTime>(jsonVal.at(U("to"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(from, U("from"), ret);
      build_json(to, U("to"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   DateTime get_from() const
   {
       return from;
   };
   void set_from(const DateTime& val)
   {
       from = val;
   };
   DateTime get_to() const
   {
       return to;
   };
   void set_to(const DateTime& val)
   {
       to = val;
   };

private:
   DateTime from;
   DateTime to;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const TimeRange& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const TimeRange& bfdata)
{
    os << "from:" << std::endl << bfdata.from << std::endl;
    os << "to:" << std::endl << bfdata.to << std::endl;
    return os;
}

// Application subscription details
// Defined in: AccountAPING.xml
class ApplicationSubscription : public BetfairData
{
public:
   ApplicationSubscription(
      utility::string_t _subscriptionToken, 
      DateTime _expiryDateTime, 
      DateTime _expiredDateTime, 
      DateTime _createdDateTime, 
      DateTime _activationDateTime, 
      DateTime _cancellationDateTime, 
      utility::string_t _subscriptionStatus, 
      utility::string_t _clientReference, 
      utility::string_t _vendorClientId) :
      subscription_token(_subscriptionToken),
      expiry_date_time(_expiryDateTime),
      expired_date_time(_expiredDateTime),
      created_date_time(_createdDateTime),
      activation_date_time(_activationDateTime),
      cancellation_date_time(_cancellationDateTime),
      subscription_status(_subscriptionStatus),
      client_reference(_clientReference),
      vendor_client_id(_vendorClientId){};
   
   // CTOR from json
   ApplicationSubscription(const web::json::value& jsonVal) : subscription_token(from_json<utility::string_t>(jsonVal.at(U("subscriptionToken")))), expiry_date_time(from_json<DateTime>(jsonVal.at(U("expiryDateTime")))), expired_date_time(from_json<DateTime>(jsonVal.at(U("expiredDateTime")))), created_date_time(from_json<DateTime>(jsonVal.at(U("createdDateTime")))), activation_date_time(from_json<DateTime>(jsonVal.at(U("activationDateTime")))), cancellation_date_time(from_json<DateTime>(jsonVal.at(U("cancellationDateTime")))), subscription_status(from_json<utility::string_t>(jsonVal.at(U("subscriptionStatus")))), client_reference(from_json<utility::string_t>(jsonVal.at(U("clientReference")))), vendor_client_id(from_json<utility::string_t>(jsonVal.at(U("vendorClientId"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(subscription_token, U("subscriptionToken"), ret);
      build_json(expiry_date_time, U("expiryDateTime"), ret);
      build_json(expired_date_time, U("expiredDateTime"), ret);
      build_json(created_date_time, U("createdDateTime"), ret);
      build_json(activation_date_time, U("activationDateTime"), ret);
      build_json(cancellation_date_time, U("cancellationDateTime"), ret);
      build_json(subscription_status, U("subscriptionStatus"), ret);
      build_json(client_reference, U("clientReference"), ret);
      build_json(vendor_client_id, U("vendorClientId"), ret);

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
   DateTime get_expiry_date_time() const
   {
       return expiry_date_time;
   };
   void set_expiry_date_time(const DateTime& val)
   {
       expiry_date_time = val;
   };
   DateTime get_expired_date_time() const
   {
       return expired_date_time;
   };
   void set_expired_date_time(const DateTime& val)
   {
       expired_date_time = val;
   };
   DateTime get_created_date_time() const
   {
       return created_date_time;
   };
   void set_created_date_time(const DateTime& val)
   {
       created_date_time = val;
   };
   DateTime get_activation_date_time() const
   {
       return activation_date_time;
   };
   void set_activation_date_time(const DateTime& val)
   {
       activation_date_time = val;
   };
   DateTime get_cancellation_date_time() const
   {
       return cancellation_date_time;
   };
   void set_cancellation_date_time(const DateTime& val)
   {
       cancellation_date_time = val;
   };
   utility::string_t get_subscription_status() const
   {
       return subscription_status;
   };
   void set_subscription_status(const utility::string_t& val)
   {
       subscription_status = val;
   };
   utility::string_t get_client_reference() const
   {
       return client_reference;
   };
   void set_client_reference(const utility::string_t& val)
   {
       client_reference = val;
   };
   utility::string_t get_vendor_client_id() const
   {
       return vendor_client_id;
   };
   void set_vendor_client_id(const utility::string_t& val)
   {
       vendor_client_id = val;
   };

private:
   utility::string_t subscription_token;
   DateTime expiry_date_time;
   DateTime expired_date_time;
   DateTime created_date_time;
   DateTime activation_date_time;
   DateTime cancellation_date_time;
   utility::string_t subscription_status;
   utility::string_t client_reference;
   utility::string_t vendor_client_id;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ApplicationSubscription& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ApplicationSubscription& bfdata)
{
    os << "subscriptionToken:" << std::endl << bfdata.subscription_token << std::endl;
    os << "expiryDateTime:" << std::endl << bfdata.expiry_date_time << std::endl;
    os << "expiredDateTime:" << std::endl << bfdata.expired_date_time << std::endl;
    os << "createdDateTime:" << std::endl << bfdata.created_date_time << std::endl;
    os << "activationDateTime:" << std::endl << bfdata.activation_date_time << std::endl;
    os << "cancellationDateTime:" << std::endl << bfdata.cancellation_date_time << std::endl;
    os << "subscriptionStatus:" << std::endl << bfdata.subscription_status << std::endl;
    os << "clientReference:" << std::endl << bfdata.client_reference << std::endl;
    os << "vendorClientId:" << std::endl << bfdata.vendor_client_id << std::endl;
    return os;
}

// Application subscription history details
// Defined in: AccountAPING.xml
class SubscriptionHistory : public BetfairData
{
public:
   SubscriptionHistory(
      utility::string_t _subscriptionToken, 
      DateTime _expiryDateTime, 
      DateTime _expiredDateTime, 
      DateTime _createdDateTime, 
      DateTime _activationDateTime, 
      DateTime _cancellationDateTime, 
      utility::string_t _subscriptionStatus, 
      utility::string_t _clientReference) :
      subscription_token(_subscriptionToken),
      expiry_date_time(_expiryDateTime),
      expired_date_time(_expiredDateTime),
      created_date_time(_createdDateTime),
      activation_date_time(_activationDateTime),
      cancellation_date_time(_cancellationDateTime),
      subscription_status(_subscriptionStatus),
      client_reference(_clientReference){};
   SubscriptionHistory() = default;
   
   // CTOR from json
   SubscriptionHistory(const web::json::value& jsonVal) : subscription_token(from_json<utility::string_t>(jsonVal.at(U("subscriptionToken")))), expiry_date_time(from_json<DateTime>(jsonVal.at(U("expiryDateTime")))), expired_date_time(from_json<DateTime>(jsonVal.at(U("expiredDateTime")))), created_date_time(from_json<DateTime>(jsonVal.at(U("createdDateTime")))), activation_date_time(from_json<DateTime>(jsonVal.at(U("activationDateTime")))), cancellation_date_time(from_json<DateTime>(jsonVal.at(U("cancellationDateTime")))), subscription_status(from_json<utility::string_t>(jsonVal.at(U("subscriptionStatus")))), client_reference(from_json<utility::string_t>(jsonVal.at(U("clientReference"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(subscription_token, U("subscriptionToken"), ret);
      build_json(expiry_date_time, U("expiryDateTime"), ret);
      build_json(expired_date_time, U("expiredDateTime"), ret);
      build_json(created_date_time, U("createdDateTime"), ret);
      build_json(activation_date_time, U("activationDateTime"), ret);
      build_json(cancellation_date_time, U("cancellationDateTime"), ret);
      build_json(subscription_status, U("subscriptionStatus"), ret);
      build_json(client_reference, U("clientReference"), ret);

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
   DateTime get_expiry_date_time() const
   {
       return expiry_date_time;
   };
   void set_expiry_date_time(const DateTime& val)
   {
       expiry_date_time = val;
   };
   DateTime get_expired_date_time() const
   {
       return expired_date_time;
   };
   void set_expired_date_time(const DateTime& val)
   {
       expired_date_time = val;
   };
   DateTime get_created_date_time() const
   {
       return created_date_time;
   };
   void set_created_date_time(const DateTime& val)
   {
       created_date_time = val;
   };
   DateTime get_activation_date_time() const
   {
       return activation_date_time;
   };
   void set_activation_date_time(const DateTime& val)
   {
       activation_date_time = val;
   };
   DateTime get_cancellation_date_time() const
   {
       return cancellation_date_time;
   };
   void set_cancellation_date_time(const DateTime& val)
   {
       cancellation_date_time = val;
   };
   utility::string_t get_subscription_status() const
   {
       return subscription_status;
   };
   void set_subscription_status(const utility::string_t& val)
   {
       subscription_status = val;
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
   utility::string_t subscription_token;
   DateTime expiry_date_time;
   DateTime expired_date_time;
   DateTime created_date_time;
   DateTime activation_date_time;
   DateTime cancellation_date_time;
   utility::string_t subscription_status;
   utility::string_t client_reference;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const SubscriptionHistory& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const SubscriptionHistory& bfdata)
{
    os << "subscriptionToken:" << std::endl << bfdata.subscription_token << std::endl;
    os << "expiryDateTime:" << std::endl << bfdata.expiry_date_time << std::endl;
    os << "expiredDateTime:" << std::endl << bfdata.expired_date_time << std::endl;
    os << "createdDateTime:" << std::endl << bfdata.created_date_time << std::endl;
    os << "activationDateTime:" << std::endl << bfdata.activation_date_time << std::endl;
    os << "cancellationDateTime:" << std::endl << bfdata.cancellation_date_time << std::endl;
    os << "subscriptionStatus:" << std::endl << bfdata.subscription_status << std::endl;
    os << "clientReference:" << std::endl << bfdata.client_reference << std::endl;
    return os;
}

// Subscription token information
// Defined in: AccountAPING.xml
class SubscriptionTokenInfo : public BetfairData
{
public:
   SubscriptionTokenInfo(
      utility::string_t _subscriptionToken, 
      DateTime _activatedDateTime, 
      DateTime _expiryDateTime, 
      DateTime _expiredDateTime, 
      DateTime _cancellationDateTime, 
      utility::string_t _subscriptionStatus) :
      subscription_token(_subscriptionToken),
      activated_date_time(_activatedDateTime),
      expiry_date_time(_expiryDateTime),
      expired_date_time(_expiredDateTime),
      cancellation_date_time(_cancellationDateTime),
      subscription_status(_subscriptionStatus){};
   
   // CTOR from json
   SubscriptionTokenInfo(const web::json::value& jsonVal) : subscription_token(from_json<utility::string_t>(jsonVal.at(U("subscriptionToken")))), activated_date_time(from_json<DateTime>(jsonVal.at(U("activatedDateTime")))), expiry_date_time(from_json<DateTime>(jsonVal.at(U("expiryDateTime")))), expired_date_time(from_json<DateTime>(jsonVal.at(U("expiredDateTime")))), cancellation_date_time(from_json<DateTime>(jsonVal.at(U("cancellationDateTime")))), subscription_status(from_json<utility::string_t>(jsonVal.at(U("subscriptionStatus"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(subscription_token, U("subscriptionToken"), ret);
      build_json(activated_date_time, U("activatedDateTime"), ret);
      build_json(expiry_date_time, U("expiryDateTime"), ret);
      build_json(expired_date_time, U("expiredDateTime"), ret);
      build_json(cancellation_date_time, U("cancellationDateTime"), ret);
      build_json(subscription_status, U("subscriptionStatus"), ret);

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
   DateTime get_activated_date_time() const
   {
       return activated_date_time;
   };
   void set_activated_date_time(const DateTime& val)
   {
       activated_date_time = val;
   };
   DateTime get_expiry_date_time() const
   {
       return expiry_date_time;
   };
   void set_expiry_date_time(const DateTime& val)
   {
       expiry_date_time = val;
   };
   DateTime get_expired_date_time() const
   {
       return expired_date_time;
   };
   void set_expired_date_time(const DateTime& val)
   {
       expired_date_time = val;
   };
   DateTime get_cancellation_date_time() const
   {
       return cancellation_date_time;
   };
   void set_cancellation_date_time(const DateTime& val)
   {
       cancellation_date_time = val;
   };
   utility::string_t get_subscription_status() const
   {
       return subscription_status;
   };
   void set_subscription_status(const utility::string_t& val)
   {
       subscription_status = val;
   };

private:
   utility::string_t subscription_token;
   DateTime activated_date_time;
   DateTime expiry_date_time;
   DateTime expired_date_time;
   DateTime cancellation_date_time;
   utility::string_t subscription_status;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const SubscriptionTokenInfo& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const SubscriptionTokenInfo& bfdata)
{
    os << "subscriptionToken:" << std::endl << bfdata.subscription_token << std::endl;
    os << "activatedDateTime:" << std::endl << bfdata.activated_date_time << std::endl;
    os << "expiryDateTime:" << std::endl << bfdata.expiry_date_time << std::endl;
    os << "expiredDateTime:" << std::endl << bfdata.expired_date_time << std::endl;
    os << "cancellationDateTime:" << std::endl << bfdata.cancellation_date_time << std::endl;
    os << "subscriptionStatus:" << std::endl << bfdata.subscription_status << std::endl;
    return os;
}

// Describes a version of an external application
// Defined in: AccountAPING.xml
class DeveloperAppVersion : public BetfairData
{
public:
   DeveloperAppVersion(
      utility::string_t _owner, 
      int _versionId, 
      utility::string_t _version, 
      utility::string_t _applicationKey, 
      bool _delayData, 
      bool _subscriptionRequired, 
      bool _ownerManaged, 
      bool _active) :
      owner(_owner),
      version_id(_versionId),
      version(_version),
      application_key(_applicationKey),
      delay_data(_delayData),
      subscription_required(_subscriptionRequired),
      owner_managed(_ownerManaged),
      active(_active){};
   DeveloperAppVersion() = default;
   
   // CTOR from json
   DeveloperAppVersion(const web::json::value& jsonVal) : owner(from_json<utility::string_t>(jsonVal.at(U("owner")))), version_id(from_json<int>(jsonVal.at(U("versionId")))), version(from_json<utility::string_t>(jsonVal.at(U("version")))), application_key(from_json<utility::string_t>(jsonVal.at(U("applicationKey")))), delay_data(from_json<bool>(jsonVal.at(U("delayData")))), subscription_required(from_json<bool>(jsonVal.at(U("subscriptionRequired")))), owner_managed(from_json<bool>(jsonVal.at(U("ownerManaged")))), active(from_json<bool>(jsonVal.at(U("active"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(owner, U("owner"), ret);
      build_json(version_id, U("versionId"), ret);
      build_json(version, U("version"), ret);
      build_json(application_key, U("applicationKey"), ret);
      build_json(delay_data, U("delayData"), ret);
      build_json(subscription_required, U("subscriptionRequired"), ret);
      build_json(owner_managed, U("ownerManaged"), ret);
      build_json(active, U("active"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_owner() const
   {
       return owner;
   };
   void set_owner(const utility::string_t& val)
   {
       owner = val;
   };
   int get_version_id() const
   {
       return version_id;
   };
   void set_version_id(const int& val)
   {
       version_id = val;
   };
   utility::string_t get_version() const
   {
       return version;
   };
   void set_version(const utility::string_t& val)
   {
       version = val;
   };
   utility::string_t get_application_key() const
   {
       return application_key;
   };
   void set_application_key(const utility::string_t& val)
   {
       application_key = val;
   };
   bool get_delay_data() const
   {
       return delay_data;
   };
   void set_delay_data(const bool& val)
   {
       delay_data = val;
   };
   bool get_subscription_required() const
   {
       return subscription_required;
   };
   void set_subscription_required(const bool& val)
   {
       subscription_required = val;
   };
   bool get_owner_managed() const
   {
       return owner_managed;
   };
   void set_owner_managed(const bool& val)
   {
       owner_managed = val;
   };
   bool get_active() const
   {
       return active;
   };
   void set_active(const bool& val)
   {
       active = val;
   };

private:
   utility::string_t owner;
   int version_id;
   utility::string_t version;
   utility::string_t application_key;
   bool delay_data;
   bool subscription_required;
   bool owner_managed;
   bool active;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const DeveloperAppVersion& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const DeveloperAppVersion& bfdata)
{
    os << "owner:" << std::endl << bfdata.owner << std::endl;
    os << "versionId:" << std::endl << bfdata.version_id << std::endl;
    os << "version:" << std::endl << bfdata.version << std::endl;
    os << "applicationKey:" << std::endl << bfdata.application_key << std::endl;
    os << "delayData:" << std::endl << bfdata.delay_data << std::endl;
    os << "subscriptionRequired:" << std::endl << bfdata.subscription_required << std::endl;
    os << "ownerManaged:" << std::endl << bfdata.owner_managed << std::endl;
    os << "active:" << std::endl << bfdata.active << std::endl;
    return os;
}

// Response for retrieving available to bet.
// Defined in: AccountAPING.xml
class AccountFundsResponse : public BetfairData
{
public:
   AccountFundsResponse(
      double _availableToBetBalance, 
      double _exposure, 
      double _retainedCommission, 
      double _exposureLimit, 
      double _discountRate, 
      int _pointsBalance, 
      utility::string_t _wallet) :
      available_to_bet_balance(_availableToBetBalance),
      exposure(_exposure),
      retained_commission(_retainedCommission),
      exposure_limit(_exposureLimit),
      discount_rate(_discountRate),
      points_balance(_pointsBalance),
      wallet(_wallet){};
   AccountFundsResponse() = default;
   
   // CTOR from json
   AccountFundsResponse(const web::json::value& jsonVal) : available_to_bet_balance(from_json<double>(jsonVal.at(U("availableToBetBalance")))), exposure(from_json<double>(jsonVal.at(U("exposure")))), retained_commission(from_json<double>(jsonVal.at(U("retainedCommission")))), exposure_limit(from_json<double>(jsonVal.at(U("exposureLimit")))), discount_rate(from_json<double>(jsonVal.at(U("discountRate")))), points_balance(from_json<int>(jsonVal.at(U("pointsBalance")))), wallet(from_json<utility::string_t>(jsonVal.at(U("wallet"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(available_to_bet_balance, U("availableToBetBalance"), ret);
      build_json(exposure, U("exposure"), ret);
      build_json(retained_commission, U("retainedCommission"), ret);
      build_json(exposure_limit, U("exposureLimit"), ret);
      build_json(discount_rate, U("discountRate"), ret);
      build_json(points_balance, U("pointsBalance"), ret);
      build_json(wallet, U("wallet"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   double get_available_to_bet_balance() const
   {
       return available_to_bet_balance;
   };
   void set_available_to_bet_balance(const double& val)
   {
       available_to_bet_balance = val;
   };
   double get_exposure() const
   {
       return exposure;
   };
   void set_exposure(const double& val)
   {
       exposure = val;
   };
   double get_retained_commission() const
   {
       return retained_commission;
   };
   void set_retained_commission(const double& val)
   {
       retained_commission = val;
   };
   double get_exposure_limit() const
   {
       return exposure_limit;
   };
   void set_exposure_limit(const double& val)
   {
       exposure_limit = val;
   };
   double get_discount_rate() const
   {
       return discount_rate;
   };
   void set_discount_rate(const double& val)
   {
       discount_rate = val;
   };
   int get_points_balance() const
   {
       return points_balance;
   };
   void set_points_balance(const int& val)
   {
       points_balance = val;
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
   double available_to_bet_balance;
   double exposure;
   double retained_commission;
   double exposure_limit;
   double discount_rate;
   int points_balance;
   utility::string_t wallet;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const AccountFundsResponse& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const AccountFundsResponse& bfdata)
{
    os << "availableToBetBalance:" << std::endl << bfdata.available_to_bet_balance << std::endl;
    os << "exposure:" << std::endl << bfdata.exposure << std::endl;
    os << "retainedCommission:" << std::endl << bfdata.retained_commission << std::endl;
    os << "exposureLimit:" << std::endl << bfdata.exposure_limit << std::endl;
    os << "discountRate:" << std::endl << bfdata.discount_rate << std::endl;
    os << "pointsBalance:" << std::endl << bfdata.points_balance << std::endl;
    os << "wallet:" << std::endl << bfdata.wallet << std::endl;
    return os;
}

// Response for Account details.
// Defined in: AccountAPING.xml
class AccountDetailsResponse : public BetfairData
{
public:
   AccountDetailsResponse(
      utility::string_t _currencyCode, 
      utility::string_t _firstName, 
      utility::string_t _lastName, 
      utility::string_t _localeCode, 
      utility::string_t _region, 
      utility::string_t _timezone, 
      double _discountRate, 
      int _pointsBalance, 
      utility::string_t _countryCode) :
      currency_code(_currencyCode),
      first_name(_firstName),
      last_name(_lastName),
      locale_code(_localeCode),
      region(_region),
      timezone(_timezone),
      discount_rate(_discountRate),
      points_balance(_pointsBalance),
      country_code(_countryCode){};
   AccountDetailsResponse() = default;
   
   // CTOR from json
   AccountDetailsResponse(const web::json::value& jsonVal) : currency_code(from_json<utility::string_t>(jsonVal.at(U("currencyCode")))), first_name(from_json<utility::string_t>(jsonVal.at(U("firstName")))), last_name(from_json<utility::string_t>(jsonVal.at(U("lastName")))), locale_code(from_json<utility::string_t>(jsonVal.at(U("localeCode")))), region(from_json<utility::string_t>(jsonVal.at(U("region")))), timezone(from_json<utility::string_t>(jsonVal.at(U("timezone")))), discount_rate(from_json<double>(jsonVal.at(U("discountRate")))), points_balance(from_json<int>(jsonVal.at(U("pointsBalance")))), country_code(from_json<utility::string_t>(jsonVal.at(U("countryCode"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(currency_code, U("currencyCode"), ret);
      build_json(first_name, U("firstName"), ret);
      build_json(last_name, U("lastName"), ret);
      build_json(locale_code, U("localeCode"), ret);
      build_json(region, U("region"), ret);
      build_json(timezone, U("timezone"), ret);
      build_json(discount_rate, U("discountRate"), ret);
      build_json(points_balance, U("pointsBalance"), ret);
      build_json(country_code, U("countryCode"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_currency_code() const
   {
       return currency_code;
   };
   void set_currency_code(const utility::string_t& val)
   {
       currency_code = val;
   };
   utility::string_t get_first_name() const
   {
       return first_name;
   };
   void set_first_name(const utility::string_t& val)
   {
       first_name = val;
   };
   utility::string_t get_last_name() const
   {
       return last_name;
   };
   void set_last_name(const utility::string_t& val)
   {
       last_name = val;
   };
   utility::string_t get_locale_code() const
   {
       return locale_code;
   };
   void set_locale_code(const utility::string_t& val)
   {
       locale_code = val;
   };
   utility::string_t get_region() const
   {
       return region;
   };
   void set_region(const utility::string_t& val)
   {
       region = val;
   };
   utility::string_t get_timezone() const
   {
       return timezone;
   };
   void set_timezone(const utility::string_t& val)
   {
       timezone = val;
   };
   double get_discount_rate() const
   {
       return discount_rate;
   };
   void set_discount_rate(const double& val)
   {
       discount_rate = val;
   };
   int get_points_balance() const
   {
       return points_balance;
   };
   void set_points_balance(const int& val)
   {
       points_balance = val;
   };
   utility::string_t get_country_code() const
   {
       return country_code;
   };
   void set_country_code(const utility::string_t& val)
   {
       country_code = val;
   };

private:
   utility::string_t currency_code;
   utility::string_t first_name;
   utility::string_t last_name;
   utility::string_t locale_code;
   utility::string_t region;
   utility::string_t timezone;
   double discount_rate;
   int points_balance;
   utility::string_t country_code;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const AccountDetailsResponse& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const AccountDetailsResponse& bfdata)
{
    os << "currencyCode:" << std::endl << bfdata.currency_code << std::endl;
    os << "firstName:" << std::endl << bfdata.first_name << std::endl;
    os << "lastName:" << std::endl << bfdata.last_name << std::endl;
    os << "localeCode:" << std::endl << bfdata.locale_code << std::endl;
    os << "region:" << std::endl << bfdata.region << std::endl;
    os << "timezone:" << std::endl << bfdata.timezone << std::endl;
    os << "discountRate:" << std::endl << bfdata.discount_rate << std::endl;
    os << "pointsBalance:" << std::endl << bfdata.points_balance << std::endl;
    os << "countryCode:" << std::endl << bfdata.country_code << std::endl;
    return os;
}

// Currency rate
// Defined in: AccountAPING.xml
class CurrencyRate : public BetfairData
{
public:
   CurrencyRate(
      utility::string_t _currencyCode, 
      double _rate) :
      currency_code(_currencyCode),
      rate(_rate){};
   
   // CTOR from json
   CurrencyRate(const web::json::value& jsonVal) : currency_code(from_json<utility::string_t>(jsonVal.at(U("currencyCode")))), rate(from_json<double>(jsonVal.at(U("rate"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(currency_code, U("currencyCode"), ret);
      build_json(rate, U("rate"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_currency_code() const
   {
       return currency_code;
   };
   void set_currency_code(const utility::string_t& val)
   {
       currency_code = val;
   };
   double get_rate() const
   {
       return rate;
   };
   void set_rate(const double& val)
   {
       rate = val;
   };

private:
   utility::string_t currency_code;
   double rate;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CurrencyRate& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CurrencyRate& bfdata)
{
    os << "currencyCode:" << std::endl << bfdata.currency_code << std::endl;
    os << "rate:" << std::endl << bfdata.rate << std::endl;
    return os;
}

// Summary of a cleared order.
// Defined in: AccountAPING.xml
class StatementItem : public BetfairData
{
public:
   StatementItem(
      utility::string_t _refId, 
      DateTime _itemDate) :
      ref_id(_refId),
      item_date(_itemDate){};
   
   // CTOR from json
   StatementItem(const web::json::value& jsonVal) : ref_id(from_json<utility::string_t>(jsonVal.at(U("refId")))), item_date(from_json<DateTime>(jsonVal.at(U("itemDate"))))
   {
      if (jsonVal.has_field(U("amount")))
      {
         amount = from_json<double>(jsonVal.at(U("amount")));
      }
      if (jsonVal.has_field(U("balance")))
      {
         balance = from_json<double>(jsonVal.at(U("balance")));
      }
      if (jsonVal.has_field(U("itemClass")))
      {
         item_class = from_json<utility::string_t>(jsonVal.at(U("itemClass")));
      }
      if (jsonVal.has_field(U("itemClassData")))
      {
         item_class_data = from_json<std::unordered_map<utility::string_t,utility::string_t>>(jsonVal.at(U("itemClassData")));
      }
      if (jsonVal.has_field(U("legacyData")))
      {
         legacy_data = from_json<StatementLegacyData>(jsonVal.at(U("legacyData")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(ref_id, U("refId"), ret);
      build_json(item_date, U("itemDate"), ret);
      build_json(amount, U("amount"), ret);
      build_json(balance, U("balance"), ret);
      build_json(item_class, U("itemClass"), ret);
      build_json(item_class_data, U("itemClassData"), ret);
      build_json(legacy_data, U("legacyData"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_ref_id() const
   {
       return ref_id;
   };
   void set_ref_id(const utility::string_t& val)
   {
       ref_id = val;
   };
   DateTime get_item_date() const
   {
       return item_date;
   };
   void set_item_date(const DateTime& val)
   {
       item_date = val;
   };
   boost::optional<double> get_amount() const
   {
       return amount;
   };
   void set_amount(const boost::optional<double>& val)
   {
       amount = val;
   };
   boost::optional<double> get_balance() const
   {
       return balance;
   };
   void set_balance(const boost::optional<double>& val)
   {
       balance = val;
   };
   boost::optional<utility::string_t> get_item_class() const
   {
       return item_class;
   };
   void set_item_class(const boost::optional<utility::string_t>& val)
   {
       item_class = val;
   };
   std::unordered_map<utility::string_t,utility::string_t> get_item_class_data() const
   {
       return item_class_data;
   };
   void set_item_class_data(const std::unordered_map<utility::string_t,utility::string_t>& val)
   {
       item_class_data = val;
   };
   boost::optional<StatementLegacyData> get_legacy_data() const
   {
       return legacy_data;
   };
   void set_legacy_data(const boost::optional<StatementLegacyData>& val)
   {
       legacy_data = val;
   };

private:
   utility::string_t ref_id;
   DateTime item_date;
   boost::optional<double> amount;
   boost::optional<double> balance;
   boost::optional<utility::string_t> item_class;
   std::unordered_map<utility::string_t,utility::string_t> item_class_data;
   boost::optional<StatementLegacyData> legacy_data;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const StatementItem& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const StatementItem& bfdata)
{
    os << "refId:" << std::endl << bfdata.ref_id << std::endl;
    os << "itemDate:" << std::endl << bfdata.item_date << std::endl;
    if (bfdata.amount != boost::none)
    {
       os << "amount:" << std::endl << bfdata.amount.get()  << std::endl;
    }
    if (bfdata.balance != boost::none)
    {
       os << "balance:" << std::endl << bfdata.balance.get()  << std::endl;
    }
    if (bfdata.item_class != boost::none)
    {
       os << "item_class:" << std::endl << bfdata.item_class.get()  << std::endl;
    }
    os << "itemClassData:" << std::endl << bfdata.item_class_data << std::endl;
    if (bfdata.legacy_data != boost::none)
    {
       os << "legacy_data:" << std::endl << bfdata.legacy_data.get()  << std::endl;
    }
    return os;
}

// A container representing search results.
// Defined in: AccountAPING.xml
class AccountStatementReport : public BetfairData
{
public:
   AccountStatementReport(
      std::vector<StatementItem> _accountStatement, 
      bool _moreAvailable) :
      account_statement(_accountStatement),
      more_available(_moreAvailable){};
   AccountStatementReport() = default;
   
   // CTOR from json
   AccountStatementReport(const web::json::value& jsonVal) : account_statement(from_json<std::vector<StatementItem>>(jsonVal.at(U("accountStatement")))), more_available(from_json<bool>(jsonVal.at(U("moreAvailable"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(account_statement, U("accountStatement"), ret);
      build_json(more_available, U("moreAvailable"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   std::vector<StatementItem> get_account_statement() const
   {
       return account_statement;
   };
   void set_account_statement(const std::vector<StatementItem>& val)
   {
       account_statement = val;
   };
   bool get_more_available() const
   {
       return more_available;
   };
   void set_more_available(const bool& val)
   {
       more_available = val;
   };

private:
   std::vector<StatementItem> account_statement;
   bool more_available;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const AccountStatementReport& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const AccountStatementReport& bfdata)
{
    os << "accountStatement:" << std::endl << bfdata.account_statement << std::endl;
    os << "moreAvailable:" << std::endl << bfdata.more_available << std::endl;
    return os;
}

// Application subscription details
// Defined in: AccountAPING.xml
class AccountSubscription : public BetfairData
{
public:
   AccountSubscription(
      std::vector<SubscriptionTokenInfo> _subscriptionTokens, 
      utility::string_t _applicationName, 
      utility::string_t _applicationVersionId) :
      subscription_tokens(_subscriptionTokens),
      application_name(_applicationName),
      application_version_id(_applicationVersionId){};
   
   // CTOR from json
   AccountSubscription(const web::json::value& jsonVal) : subscription_tokens(from_json<std::vector<SubscriptionTokenInfo>>(jsonVal.at(U("subscriptionTokens")))), application_name(from_json<utility::string_t>(jsonVal.at(U("applicationName")))), application_version_id(from_json<utility::string_t>(jsonVal.at(U("applicationVersionId"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(subscription_tokens, U("subscriptionTokens"), ret);
      build_json(application_name, U("applicationName"), ret);
      build_json(application_version_id, U("applicationVersionId"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   std::vector<SubscriptionTokenInfo> get_subscription_tokens() const
   {
       return subscription_tokens;
   };
   void set_subscription_tokens(const std::vector<SubscriptionTokenInfo>& val)
   {
       subscription_tokens = val;
   };
   utility::string_t get_application_name() const
   {
       return application_name;
   };
   void set_application_name(const utility::string_t& val)
   {
       application_name = val;
   };
   utility::string_t get_application_version_id() const
   {
       return application_version_id;
   };
   void set_application_version_id(const utility::string_t& val)
   {
       application_version_id = val;
   };

private:
   std::vector<SubscriptionTokenInfo> subscription_tokens;
   utility::string_t application_name;
   utility::string_t application_version_id;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const AccountSubscription& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const AccountSubscription& bfdata)
{
    os << "subscriptionTokens:" << std::endl << bfdata.subscription_tokens << std::endl;
    os << "applicationName:" << std::endl << bfdata.application_name << std::endl;
    os << "applicationVersionId:" << std::endl << bfdata.application_version_id << std::endl;
    return os;
}

// Describes developer/vendor specific application
// Defined in: AccountAPING.xml
class DeveloperApp : public BetfairData
{
public:
   DeveloperApp(
      utility::string_t _appName, 
      int _appId, 
      std::vector<DeveloperAppVersion> _appVersions) :
      app_name(_appName),
      app_id(_appId),
      app_versions(_appVersions){};
   DeveloperApp() = default;
   
   // CTOR from json
   DeveloperApp(const web::json::value& jsonVal) : app_name(from_json<utility::string_t>(jsonVal.at(U("appName")))), app_id(from_json<int>(jsonVal.at(U("appId")))), app_versions(from_json<std::vector<DeveloperAppVersion>>(jsonVal.at(U("appVersions"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(app_name, U("appName"), ret);
      build_json(app_id, U("appId"), ret);
      build_json(app_versions, U("appVersions"), ret);

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
   int get_app_id() const
   {
       return app_id;
   };
   void set_app_id(const int& val)
   {
       app_id = val;
   };
   std::vector<DeveloperAppVersion> get_app_versions() const
   {
       return app_versions;
   };
   void set_app_versions(const std::vector<DeveloperAppVersion>& val)
   {
       app_versions = val;
   };

private:
   utility::string_t app_name;
   int app_id;
   std::vector<DeveloperAppVersion> app_versions;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const DeveloperApp& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const DeveloperApp& bfdata)
{
    os << "appName:" << std::endl << bfdata.app_name << std::endl;
    os << "appId:" << std::endl << bfdata.app_id << std::endl;
    os << "appVersions:" << std::endl << bfdata.app_versions << std::endl;
    return os;
}

// Response from heartbeat operation
// Defined in: HeartbeatAPING.xml
class HeartbeatReport : public BetfairData
{
public:
   HeartbeatReport(
      utility::string_t _actionPerformed, 
      int _actualTimeoutSeconds) :
      action_performed(_actionPerformed),
      actual_timeout_seconds(_actualTimeoutSeconds){};
   HeartbeatReport() = default;
   
   // CTOR from json
   HeartbeatReport(const web::json::value& jsonVal) : action_performed(from_json<utility::string_t>(jsonVal.at(U("actionPerformed")))), actual_timeout_seconds(from_json<int>(jsonVal.at(U("actualTimeoutSeconds"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(action_performed, U("actionPerformed"), ret);
      build_json(actual_timeout_seconds, U("actualTimeoutSeconds"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_action_performed() const
   {
       return action_performed;
   };
   void set_action_performed(const utility::string_t& val)
   {
       action_performed = val;
   };
   int get_actual_timeout_seconds() const
   {
       return actual_timeout_seconds;
   };
   void set_actual_timeout_seconds(const int& val)
   {
       actual_timeout_seconds = val;
   };

private:
   utility::string_t action_performed;
   int actual_timeout_seconds;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const HeartbeatReport& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const HeartbeatReport& bfdata)
{
    os << "actionPerformed:" << std::endl << bfdata.action_performed << std::endl;
    os << "actualTimeoutSeconds:" << std::endl << bfdata.actual_timeout_seconds << std::endl;
    return os;
}

// Information about the Runners (selections) in a market
// Defined in: SportsAPING.xml
class RunnerCatalog : public BetfairData
{
public:
   RunnerCatalog(
      int _selectionId, 
      utility::string_t _runnerName, 
      double _handicap, 
      int _sortPriority) :
      selection_id(_selectionId),
      runner_name(_runnerName),
      handicap(_handicap),
      sort_priority(_sortPriority){};
   
   // CTOR from json
   RunnerCatalog(const web::json::value& jsonVal) : selection_id(from_json<int>(jsonVal.at(U("selectionId")))), runner_name(from_json<utility::string_t>(jsonVal.at(U("runnerName")))), handicap(from_json<double>(jsonVal.at(U("handicap")))), sort_priority(from_json<int>(jsonVal.at(U("sortPriority"))))
   {
      if (jsonVal.has_field(U("metadata")))
      {
         metadata = from_json<std::unordered_map<utility::string_t,utility::string_t>>(jsonVal.at(U("metadata")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(selection_id, U("selectionId"), ret);
      build_json(runner_name, U("runnerName"), ret);
      build_json(handicap, U("handicap"), ret);
      build_json(sort_priority, U("sortPriority"), ret);
      build_json(metadata, U("metadata"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   int get_selection_id() const
   {
       return selection_id;
   };
   void set_selection_id(const int& val)
   {
       selection_id = val;
   };
   utility::string_t get_runner_name() const
   {
       return runner_name;
   };
   void set_runner_name(const utility::string_t& val)
   {
       runner_name = val;
   };
   double get_handicap() const
   {
       return handicap;
   };
   void set_handicap(const double& val)
   {
       handicap = val;
   };
   int get_sort_priority() const
   {
       return sort_priority;
   };
   void set_sort_priority(const int& val)
   {
       sort_priority = val;
   };
   std::unordered_map<utility::string_t,utility::string_t> get_metadata() const
   {
       return metadata;
   };
   void set_metadata(const std::unordered_map<utility::string_t,utility::string_t>& val)
   {
       metadata = val;
   };

private:
   int selection_id;
   utility::string_t runner_name;
   double handicap;
   int sort_priority;
   std::unordered_map<utility::string_t,utility::string_t> metadata;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const RunnerCatalog& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const RunnerCatalog& bfdata)
{
    os << "selectionId:" << std::endl << bfdata.selection_id << std::endl;
    os << "runnerName:" << std::endl << bfdata.runner_name << std::endl;
    os << "handicap:" << std::endl << bfdata.handicap << std::endl;
    os << "sortPriority:" << std::endl << bfdata.sort_priority << std::endl;
    os << "metadata:" << std::endl << bfdata.metadata << std::endl;
    return os;
}

// Event
// Defined in: SportsAPING.xml
class Event : public BetfairData
{
public:
   Event() = default;
   
   // CTOR from json
   Event(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("id")))
      {
         id = from_json<utility::string_t>(jsonVal.at(U("id")));
      }
      if (jsonVal.has_field(U("name")))
      {
         name = from_json<utility::string_t>(jsonVal.at(U("name")));
      }
      if (jsonVal.has_field(U("countryCode")))
      {
         country_code = from_json<utility::string_t>(jsonVal.at(U("countryCode")));
      }
      if (jsonVal.has_field(U("timezone")))
      {
         timezone = from_json<utility::string_t>(jsonVal.at(U("timezone")));
      }
      if (jsonVal.has_field(U("venue")))
      {
         venue = from_json<utility::string_t>(jsonVal.at(U("venue")));
      }
      if (jsonVal.has_field(U("openDate")))
      {
         open_date = from_json<DateTime>(jsonVal.at(U("openDate")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(id, U("id"), ret);
      build_json(name, U("name"), ret);
      build_json(country_code, U("countryCode"), ret);
      build_json(timezone, U("timezone"), ret);
      build_json(venue, U("venue"), ret);
      build_json(open_date, U("openDate"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<utility::string_t> get_id() const
   {
       return id;
   };
   void set_id(const boost::optional<utility::string_t>& val)
   {
       id = val;
   };
   boost::optional<utility::string_t> get_name() const
   {
       return name;
   };
   void set_name(const boost::optional<utility::string_t>& val)
   {
       name = val;
   };
   boost::optional<utility::string_t> get_country_code() const
   {
       return country_code;
   };
   void set_country_code(const boost::optional<utility::string_t>& val)
   {
       country_code = val;
   };
   boost::optional<utility::string_t> get_timezone() const
   {
       return timezone;
   };
   void set_timezone(const boost::optional<utility::string_t>& val)
   {
       timezone = val;
   };
   boost::optional<utility::string_t> get_venue() const
   {
       return venue;
   };
   void set_venue(const boost::optional<utility::string_t>& val)
   {
       venue = val;
   };
   boost::optional<DateTime> get_open_date() const
   {
       return open_date;
   };
   void set_open_date(const boost::optional<DateTime>& val)
   {
       open_date = val;
   };

private:
   boost::optional<utility::string_t> id;
   boost::optional<utility::string_t> name;
   boost::optional<utility::string_t> country_code;
   boost::optional<utility::string_t> timezone;
   boost::optional<utility::string_t> venue;
   boost::optional<DateTime> open_date;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const Event& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const Event& bfdata)
{
    if (bfdata.id != boost::none)
    {
       os << "id:" << std::endl << bfdata.id.get()  << std::endl;
    }
    if (bfdata.name != boost::none)
    {
       os << "name:" << std::endl << bfdata.name.get()  << std::endl;
    }
    if (bfdata.country_code != boost::none)
    {
       os << "country_code:" << std::endl << bfdata.country_code.get()  << std::endl;
    }
    if (bfdata.timezone != boost::none)
    {
       os << "timezone:" << std::endl << bfdata.timezone.get()  << std::endl;
    }
    if (bfdata.venue != boost::none)
    {
       os << "venue:" << std::endl << bfdata.venue.get()  << std::endl;
    }
    if (bfdata.open_date != boost::none)
    {
       os << "open_date:" << std::endl << bfdata.open_date.get()  << std::endl;
    }
    return os;
}

// Competition
// Defined in: SportsAPING.xml
class Competition : public BetfairData
{
public:
   Competition() = default;
   
   // CTOR from json
   Competition(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("id")))
      {
         id = from_json<utility::string_t>(jsonVal.at(U("id")));
      }
      if (jsonVal.has_field(U("name")))
      {
         name = from_json<utility::string_t>(jsonVal.at(U("name")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(id, U("id"), ret);
      build_json(name, U("name"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<utility::string_t> get_id() const
   {
       return id;
   };
   void set_id(const boost::optional<utility::string_t>& val)
   {
       id = val;
   };
   boost::optional<utility::string_t> get_name() const
   {
       return name;
   };
   void set_name(const boost::optional<utility::string_t>& val)
   {
       name = val;
   };

private:
   boost::optional<utility::string_t> id;
   boost::optional<utility::string_t> name;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const Competition& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const Competition& bfdata)
{
    if (bfdata.id != boost::none)
    {
       os << "id:" << std::endl << bfdata.id.get()  << std::endl;
    }
    if (bfdata.name != boost::none)
    {
       os << "name:" << std::endl << bfdata.name.get()  << std::endl;
    }
    return os;
}

// EventType
// Defined in: SportsAPING.xml
class EventType : public BetfairData
{
public:
   EventType() = default;
   
   // CTOR from json
   EventType(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("id")))
      {
         id = from_json<utility::string_t>(jsonVal.at(U("id")));
      }
      if (jsonVal.has_field(U("name")))
      {
         name = from_json<utility::string_t>(jsonVal.at(U("name")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(id, U("id"), ret);
      build_json(name, U("name"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<utility::string_t> get_id() const
   {
       return id;
   };
   void set_id(const boost::optional<utility::string_t>& val)
   {
       id = val;
   };
   boost::optional<utility::string_t> get_name() const
   {
       return name;
   };
   void set_name(const boost::optional<utility::string_t>& val)
   {
       name = val;
   };

private:
   boost::optional<utility::string_t> id;
   boost::optional<utility::string_t> name;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const EventType& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const EventType& bfdata)
{
    if (bfdata.id != boost::none)
    {
       os << "id:" << std::endl << bfdata.id.get()  << std::endl;
    }
    if (bfdata.name != boost::none)
    {
       os << "name:" << std::endl << bfdata.name.get()  << std::endl;
    }
    return os;
}

// MarketType Result
// Defined in: SportsAPING.xml
class MarketTypeResult : public BetfairData
{
public:
   MarketTypeResult() = default;
   
   // CTOR from json
   MarketTypeResult(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("marketType")))
      {
         market_type = from_json<utility::string_t>(jsonVal.at(U("marketType")));
      }
      if (jsonVal.has_field(U("marketCount")))
      {
         market_count = from_json<int>(jsonVal.at(U("marketCount")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(market_type, U("marketType"), ret);
      build_json(market_count, U("marketCount"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<utility::string_t> get_market_type() const
   {
       return market_type;
   };
   void set_market_type(const boost::optional<utility::string_t>& val)
   {
       market_type = val;
   };
   boost::optional<int> get_market_count() const
   {
       return market_count;
   };
   void set_market_count(const boost::optional<int>& val)
   {
       market_count = val;
   };

private:
   boost::optional<utility::string_t> market_type;
   boost::optional<int> market_count;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketTypeResult& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketTypeResult& bfdata)
{
    if (bfdata.market_type != boost::none)
    {
       os << "market_type:" << std::endl << bfdata.market_type.get()  << std::endl;
    }
    if (bfdata.market_count != boost::none)
    {
       os << "market_count:" << std::endl << bfdata.market_count.get()  << std::endl;
    }
    return os;
}

// CountryCode Result
// Defined in: SportsAPING.xml
class CountryCodeResult : public BetfairData
{
public:
   CountryCodeResult() = default;
   
   // CTOR from json
   CountryCodeResult(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("countryCode")))
      {
         country_code = from_json<utility::string_t>(jsonVal.at(U("countryCode")));
      }
      if (jsonVal.has_field(U("marketCount")))
      {
         market_count = from_json<int>(jsonVal.at(U("marketCount")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(country_code, U("countryCode"), ret);
      build_json(market_count, U("marketCount"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<utility::string_t> get_country_code() const
   {
       return country_code;
   };
   void set_country_code(const boost::optional<utility::string_t>& val)
   {
       country_code = val;
   };
   boost::optional<int> get_market_count() const
   {
       return market_count;
   };
   void set_market_count(const boost::optional<int>& val)
   {
       market_count = val;
   };

private:
   boost::optional<utility::string_t> country_code;
   boost::optional<int> market_count;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CountryCodeResult& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CountryCodeResult& bfdata)
{
    if (bfdata.country_code != boost::none)
    {
       os << "country_code:" << std::endl << bfdata.country_code.get()  << std::endl;
    }
    if (bfdata.market_count != boost::none)
    {
       os << "market_count:" << std::endl << bfdata.market_count.get()  << std::endl;
    }
    return os;
}

// Venue Result
// Defined in: SportsAPING.xml
class VenueResult : public BetfairData
{
public:
   VenueResult() = default;
   
   // CTOR from json
   VenueResult(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("venue")))
      {
         venue = from_json<utility::string_t>(jsonVal.at(U("venue")));
      }
      if (jsonVal.has_field(U("marketCount")))
      {
         market_count = from_json<int>(jsonVal.at(U("marketCount")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(venue, U("venue"), ret);
      build_json(market_count, U("marketCount"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<utility::string_t> get_venue() const
   {
       return venue;
   };
   void set_venue(const boost::optional<utility::string_t>& val)
   {
       venue = val;
   };
   boost::optional<int> get_market_count() const
   {
       return market_count;
   };
   void set_market_count(const boost::optional<int>& val)
   {
       market_count = val;
   };

private:
   boost::optional<utility::string_t> venue;
   boost::optional<int> market_count;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const VenueResult& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const VenueResult& bfdata)
{
    if (bfdata.venue != boost::none)
    {
       os << "venue:" << std::endl << bfdata.venue.get()  << std::endl;
    }
    if (bfdata.market_count != boost::none)
    {
       os << "market_count:" << std::endl << bfdata.market_count.get()  << std::endl;
    }
    return os;
}

class Order : public BetfairData
{
public:
   Order(
      utility::string_t _betId, 
      utility::string_t _orderType, 
      utility::string_t _status, 
      utility::string_t _persistenceType, 
      utility::string_t _side, 
      double _price, 
      double _size, 
      double _bspLiability, 
      DateTime _placedDate) :
      bet_id(_betId),
      order_type(_orderType),
      status(_status),
      persistence_type(_persistenceType),
      side(_side),
      price(_price),
      size(_size),
      bsp_liability(_bspLiability),
      placed_date(_placedDate){};
   
   // CTOR from json
   Order(const web::json::value& jsonVal) : bet_id(from_json<utility::string_t>(jsonVal.at(U("betId")))), order_type(from_json<utility::string_t>(jsonVal.at(U("orderType")))), status(from_json<utility::string_t>(jsonVal.at(U("status")))), persistence_type(from_json<utility::string_t>(jsonVal.at(U("persistenceType")))), side(from_json<utility::string_t>(jsonVal.at(U("side")))), price(from_json<double>(jsonVal.at(U("price")))), size(from_json<double>(jsonVal.at(U("size")))), bsp_liability(from_json<double>(jsonVal.at(U("bspLiability")))), placed_date(from_json<DateTime>(jsonVal.at(U("placedDate"))))
   {
      if (jsonVal.has_field(U("avgPriceMatched")))
      {
         avg_price_matched = from_json<double>(jsonVal.at(U("avgPriceMatched")));
      }
      if (jsonVal.has_field(U("sizeMatched")))
      {
         size_matched = from_json<double>(jsonVal.at(U("sizeMatched")));
      }
      if (jsonVal.has_field(U("sizeRemaining")))
      {
         size_remaining = from_json<double>(jsonVal.at(U("sizeRemaining")));
      }
      if (jsonVal.has_field(U("sizeLapsed")))
      {
         size_lapsed = from_json<double>(jsonVal.at(U("sizeLapsed")));
      }
      if (jsonVal.has_field(U("sizeCancelled")))
      {
         size_cancelled = from_json<double>(jsonVal.at(U("sizeCancelled")));
      }
      if (jsonVal.has_field(U("sizeVoided")))
      {
         size_voided = from_json<double>(jsonVal.at(U("sizeVoided")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(bet_id, U("betId"), ret);
      build_json(order_type, U("orderType"), ret);
      build_json(status, U("status"), ret);
      build_json(persistence_type, U("persistenceType"), ret);
      build_json(side, U("side"), ret);
      build_json(price, U("price"), ret);
      build_json(size, U("size"), ret);
      build_json(bsp_liability, U("bspLiability"), ret);
      build_json(placed_date, U("placedDate"), ret);
      build_json(avg_price_matched, U("avgPriceMatched"), ret);
      build_json(size_matched, U("sizeMatched"), ret);
      build_json(size_remaining, U("sizeRemaining"), ret);
      build_json(size_lapsed, U("sizeLapsed"), ret);
      build_json(size_cancelled, U("sizeCancelled"), ret);
      build_json(size_voided, U("sizeVoided"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_bet_id() const
   {
       return bet_id;
   };
   void set_bet_id(const utility::string_t& val)
   {
       bet_id = val;
   };
   utility::string_t get_order_type() const
   {
       return order_type;
   };
   void set_order_type(const utility::string_t& val)
   {
       order_type = val;
   };
   utility::string_t get_status() const
   {
       return status;
   };
   void set_status(const utility::string_t& val)
   {
       status = val;
   };
   utility::string_t get_persistence_type() const
   {
       return persistence_type;
   };
   void set_persistence_type(const utility::string_t& val)
   {
       persistence_type = val;
   };
   utility::string_t get_side() const
   {
       return side;
   };
   void set_side(const utility::string_t& val)
   {
       side = val;
   };
   double get_price() const
   {
       return price;
   };
   void set_price(const double& val)
   {
       price = val;
   };
   double get_size() const
   {
       return size;
   };
   void set_size(const double& val)
   {
       size = val;
   };
   double get_bsp_liability() const
   {
       return bsp_liability;
   };
   void set_bsp_liability(const double& val)
   {
       bsp_liability = val;
   };
   DateTime get_placed_date() const
   {
       return placed_date;
   };
   void set_placed_date(const DateTime& val)
   {
       placed_date = val;
   };
   boost::optional<double> get_avg_price_matched() const
   {
       return avg_price_matched;
   };
   void set_avg_price_matched(const boost::optional<double>& val)
   {
       avg_price_matched = val;
   };
   boost::optional<double> get_size_matched() const
   {
       return size_matched;
   };
   void set_size_matched(const boost::optional<double>& val)
   {
       size_matched = val;
   };
   boost::optional<double> get_size_remaining() const
   {
       return size_remaining;
   };
   void set_size_remaining(const boost::optional<double>& val)
   {
       size_remaining = val;
   };
   boost::optional<double> get_size_lapsed() const
   {
       return size_lapsed;
   };
   void set_size_lapsed(const boost::optional<double>& val)
   {
       size_lapsed = val;
   };
   boost::optional<double> get_size_cancelled() const
   {
       return size_cancelled;
   };
   void set_size_cancelled(const boost::optional<double>& val)
   {
       size_cancelled = val;
   };
   boost::optional<double> get_size_voided() const
   {
       return size_voided;
   };
   void set_size_voided(const boost::optional<double>& val)
   {
       size_voided = val;
   };

private:
   utility::string_t bet_id;
   utility::string_t order_type;
   utility::string_t status;
   utility::string_t persistence_type;
   utility::string_t side;
   double price;
   double size;
   double bsp_liability;
   DateTime placed_date;
   boost::optional<double> avg_price_matched;
   boost::optional<double> size_matched;
   boost::optional<double> size_remaining;
   boost::optional<double> size_lapsed;
   boost::optional<double> size_cancelled;
   boost::optional<double> size_voided;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const Order& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const Order& bfdata)
{
    os << "betId:" << std::endl << bfdata.bet_id << std::endl;
    os << "orderType:" << std::endl << bfdata.order_type << std::endl;
    os << "status:" << std::endl << bfdata.status << std::endl;
    os << "persistenceType:" << std::endl << bfdata.persistence_type << std::endl;
    os << "side:" << std::endl << bfdata.side << std::endl;
    os << "price:" << std::endl << bfdata.price << std::endl;
    os << "size:" << std::endl << bfdata.size << std::endl;
    os << "bspLiability:" << std::endl << bfdata.bsp_liability << std::endl;
    os << "placedDate:" << std::endl << bfdata.placed_date << std::endl;
    if (bfdata.avg_price_matched != boost::none)
    {
       os << "avg_price_matched:" << std::endl << bfdata.avg_price_matched.get()  << std::endl;
    }
    if (bfdata.size_matched != boost::none)
    {
       os << "size_matched:" << std::endl << bfdata.size_matched.get()  << std::endl;
    }
    if (bfdata.size_remaining != boost::none)
    {
       os << "size_remaining:" << std::endl << bfdata.size_remaining.get()  << std::endl;
    }
    if (bfdata.size_lapsed != boost::none)
    {
       os << "size_lapsed:" << std::endl << bfdata.size_lapsed.get()  << std::endl;
    }
    if (bfdata.size_cancelled != boost::none)
    {
       os << "size_cancelled:" << std::endl << bfdata.size_cancelled.get()  << std::endl;
    }
    if (bfdata.size_voided != boost::none)
    {
       os << "size_voided:" << std::endl << bfdata.size_voided.get()  << std::endl;
    }
    return os;
}

// An individual bet Match, or rollup by price or avg price. Rollup depends on the
// requested MatchProjection
// Defined in: SportsAPING.xml
class Match : public BetfairData
{
public:
   Match(
      utility::string_t _side, 
      double _price, 
      double _Size) :
      side(_side),
      price(_price),
      size(_Size){};
   
   // CTOR from json
   Match(const web::json::value& jsonVal) : side(from_json<utility::string_t>(jsonVal.at(U("side")))), price(from_json<double>(jsonVal.at(U("price")))), size(from_json<double>(jsonVal.at(U("Size"))))
   {
      if (jsonVal.has_field(U("betId")))
      {
         bet_id = from_json<utility::string_t>(jsonVal.at(U("betId")));
      }
      if (jsonVal.has_field(U("matchId")))
      {
         match_id = from_json<utility::string_t>(jsonVal.at(U("matchId")));
      }
      if (jsonVal.has_field(U("matchDate")))
      {
         match_date = from_json<DateTime>(jsonVal.at(U("matchDate")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(bet_id, U("betId"), ret);
      build_json(match_id, U("matchId"), ret);
      build_json(side, U("side"), ret);
      build_json(price, U("price"), ret);
      build_json(size, U("Size"), ret);
      build_json(match_date, U("matchDate"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<utility::string_t> get_bet_id() const
   {
       return bet_id;
   };
   void set_bet_id(const boost::optional<utility::string_t>& val)
   {
       bet_id = val;
   };
   boost::optional<utility::string_t> get_match_id() const
   {
       return match_id;
   };
   void set_match_id(const boost::optional<utility::string_t>& val)
   {
       match_id = val;
   };
   utility::string_t get_side() const
   {
       return side;
   };
   void set_side(const utility::string_t& val)
   {
       side = val;
   };
   double get_price() const
   {
       return price;
   };
   void set_price(const double& val)
   {
       price = val;
   };
   double get_size() const
   {
       return size;
   };
   void set_size(const double& val)
   {
       size = val;
   };
   boost::optional<DateTime> get_match_date() const
   {
       return match_date;
   };
   void set_match_date(const boost::optional<DateTime>& val)
   {
       match_date = val;
   };

private:
   boost::optional<utility::string_t> bet_id;
   boost::optional<utility::string_t> match_id;
   utility::string_t side;
   double price;
   double size;
   boost::optional<DateTime> match_date;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const Match& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const Match& bfdata)
{
    if (bfdata.bet_id != boost::none)
    {
       os << "bet_id:" << std::endl << bfdata.bet_id.get()  << std::endl;
    }
    if (bfdata.match_id != boost::none)
    {
       os << "match_id:" << std::endl << bfdata.match_id.get()  << std::endl;
    }
    os << "side:" << std::endl << bfdata.side << std::endl;
    os << "price:" << std::endl << bfdata.price << std::endl;
    os << "Size:" << std::endl << bfdata.size << std::endl;
    if (bfdata.match_date != boost::none)
    {
       os << "match_date:" << std::endl << bfdata.match_date.get()  << std::endl;
    }
    return os;
}

// Market definition
// Defined in: SportsAPING.xml
class MarketState : public BetfairData
{
public:
   MarketState(
      utility::string_t _status, 
      int _betDelay, 
      bool _bspReconciled, 
      bool _complete, 
      bool _inplay, 
      int _numberOfActiveRunners, 
      DateTime _lastMatchTime, 
      double _totalMatched, 
      double _totalAvailable) :
      status(_status),
      bet_delay(_betDelay),
      bsp_reconciled(_bspReconciled),
      complete(_complete),
      inplay(_inplay),
      number_of_active_runners(_numberOfActiveRunners),
      last_match_time(_lastMatchTime),
      total_matched(_totalMatched),
      total_available(_totalAvailable){};
   
   // CTOR from json
   MarketState(const web::json::value& jsonVal) : status(from_json<utility::string_t>(jsonVal.at(U("status")))), bet_delay(from_json<int>(jsonVal.at(U("betDelay")))), bsp_reconciled(from_json<bool>(jsonVal.at(U("bspReconciled")))), complete(from_json<bool>(jsonVal.at(U("complete")))), inplay(from_json<bool>(jsonVal.at(U("inplay")))), number_of_active_runners(from_json<int>(jsonVal.at(U("numberOfActiveRunners")))), last_match_time(from_json<DateTime>(jsonVal.at(U("lastMatchTime")))), total_matched(from_json<double>(jsonVal.at(U("totalMatched")))), total_available(from_json<double>(jsonVal.at(U("totalAvailable"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(status, U("status"), ret);
      build_json(bet_delay, U("betDelay"), ret);
      build_json(bsp_reconciled, U("bspReconciled"), ret);
      build_json(complete, U("complete"), ret);
      build_json(inplay, U("inplay"), ret);
      build_json(number_of_active_runners, U("numberOfActiveRunners"), ret);
      build_json(last_match_time, U("lastMatchTime"), ret);
      build_json(total_matched, U("totalMatched"), ret);
      build_json(total_available, U("totalAvailable"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_status() const
   {
       return status;
   };
   void set_status(const utility::string_t& val)
   {
       status = val;
   };
   int get_bet_delay() const
   {
       return bet_delay;
   };
   void set_bet_delay(const int& val)
   {
       bet_delay = val;
   };
   bool get_bsp_reconciled() const
   {
       return bsp_reconciled;
   };
   void set_bsp_reconciled(const bool& val)
   {
       bsp_reconciled = val;
   };
   bool get_complete() const
   {
       return complete;
   };
   void set_complete(const bool& val)
   {
       complete = val;
   };
   bool get_inplay() const
   {
       return inplay;
   };
   void set_inplay(const bool& val)
   {
       inplay = val;
   };
   int get_number_of_active_runners() const
   {
       return number_of_active_runners;
   };
   void set_number_of_active_runners(const int& val)
   {
       number_of_active_runners = val;
   };
   DateTime get_last_match_time() const
   {
       return last_match_time;
   };
   void set_last_match_time(const DateTime& val)
   {
       last_match_time = val;
   };
   double get_total_matched() const
   {
       return total_matched;
   };
   void set_total_matched(const double& val)
   {
       total_matched = val;
   };
   double get_total_available() const
   {
       return total_available;
   };
   void set_total_available(const double& val)
   {
       total_available = val;
   };

private:
   utility::string_t status;
   int bet_delay;
   bool bsp_reconciled;
   bool complete;
   bool inplay;
   int number_of_active_runners;
   DateTime last_match_time;
   double total_matched;
   double total_available;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketState& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketState& bfdata)
{
    os << "status:" << std::endl << bfdata.status << std::endl;
    os << "betDelay:" << std::endl << bfdata.bet_delay << std::endl;
    os << "bspReconciled:" << std::endl << bfdata.bsp_reconciled << std::endl;
    os << "complete:" << std::endl << bfdata.complete << std::endl;
    os << "inplay:" << std::endl << bfdata.inplay << std::endl;
    os << "numberOfActiveRunners:" << std::endl << bfdata.number_of_active_runners << std::endl;
    os << "lastMatchTime:" << std::endl << bfdata.last_match_time << std::endl;
    os << "totalMatched:" << std::endl << bfdata.total_matched << std::endl;
    os << "totalAvailable:" << std::endl << bfdata.total_available << std::endl;
    return os;
}

// Market version
// Defined in: SportsAPING.xml
class MarketVersion : public BetfairData
{
public:
   MarketVersion() = default;
   
   // CTOR from json
   MarketVersion(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("version")))
      {
         version = from_json<int>(jsonVal.at(U("version")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(version, U("version"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<int> get_version() const
   {
       return version;
   };
   void set_version(const boost::optional<int>& val)
   {
       version = val;
   };

private:
   boost::optional<int> version;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketVersion& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketVersion& bfdata)
{
    if (bfdata.version != boost::none)
    {
       os << "version:" << std::endl << bfdata.version.get()  << std::endl;
    }
    return os;
}

// Market definition
// Defined in: SportsAPING.xml
class MarketDescription : public BetfairData
{
public:
   MarketDescription(
      bool _persistenceEnabled, 
      bool _bspMarket, 
      DateTime _marketTime, 
      DateTime _suspendTime, 
      utility::string_t _bettingType, 
      bool _turnInPlayEnabled, 
      utility::string_t _marketType, 
      utility::string_t _regulator, 
      double _marketBaseRate, 
      bool _discountAllowed) :
      persistence_enabled(_persistenceEnabled),
      bsp_market(_bspMarket),
      market_time(_marketTime),
      suspend_time(_suspendTime),
      betting_type(_bettingType),
      turn_in_play_enabled(_turnInPlayEnabled),
      market_type(_marketType),
      regulator(_regulator),
      market_base_rate(_marketBaseRate),
      discount_allowed(_discountAllowed){};
   
   // CTOR from json
   MarketDescription(const web::json::value& jsonVal) : persistence_enabled(from_json<bool>(jsonVal.at(U("persistenceEnabled")))), bsp_market(from_json<bool>(jsonVal.at(U("bspMarket")))), market_time(from_json<DateTime>(jsonVal.at(U("marketTime")))), suspend_time(from_json<DateTime>(jsonVal.at(U("suspendTime")))), betting_type(from_json<utility::string_t>(jsonVal.at(U("bettingType")))), turn_in_play_enabled(from_json<bool>(jsonVal.at(U("turnInPlayEnabled")))), market_type(from_json<utility::string_t>(jsonVal.at(U("marketType")))), regulator(from_json<utility::string_t>(jsonVal.at(U("regulator")))), market_base_rate(from_json<double>(jsonVal.at(U("marketBaseRate")))), discount_allowed(from_json<bool>(jsonVal.at(U("discountAllowed"))))
   {
      if (jsonVal.has_field(U("settleTime")))
      {
         settle_time = from_json<DateTime>(jsonVal.at(U("settleTime")));
      }
      if (jsonVal.has_field(U("wallet")))
      {
         wallet = from_json<utility::string_t>(jsonVal.at(U("wallet")));
      }
      if (jsonVal.has_field(U("rules")))
      {
         rules = from_json<utility::string_t>(jsonVal.at(U("rules")));
      }
      if (jsonVal.has_field(U("rulesHasDate")))
      {
         rules_has_date = from_json<bool>(jsonVal.at(U("rulesHasDate")));
      }
      if (jsonVal.has_field(U("clarifications")))
      {
         clarifications = from_json<utility::string_t>(jsonVal.at(U("clarifications")));
      }
      if (jsonVal.has_field(U("eachWayDivisor")))
      {
         each_way_divisor = from_json<double>(jsonVal.at(U("eachWayDivisor")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(persistence_enabled, U("persistenceEnabled"), ret);
      build_json(bsp_market, U("bspMarket"), ret);
      build_json(market_time, U("marketTime"), ret);
      build_json(suspend_time, U("suspendTime"), ret);
      build_json(settle_time, U("settleTime"), ret);
      build_json(betting_type, U("bettingType"), ret);
      build_json(turn_in_play_enabled, U("turnInPlayEnabled"), ret);
      build_json(market_type, U("marketType"), ret);
      build_json(regulator, U("regulator"), ret);
      build_json(market_base_rate, U("marketBaseRate"), ret);
      build_json(discount_allowed, U("discountAllowed"), ret);
      build_json(wallet, U("wallet"), ret);
      build_json(rules, U("rules"), ret);
      build_json(rules_has_date, U("rulesHasDate"), ret);
      build_json(clarifications, U("clarifications"), ret);
      build_json(each_way_divisor, U("eachWayDivisor"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   bool get_persistence_enabled() const
   {
       return persistence_enabled;
   };
   void set_persistence_enabled(const bool& val)
   {
       persistence_enabled = val;
   };
   bool get_bsp_market() const
   {
       return bsp_market;
   };
   void set_bsp_market(const bool& val)
   {
       bsp_market = val;
   };
   DateTime get_market_time() const
   {
       return market_time;
   };
   void set_market_time(const DateTime& val)
   {
       market_time = val;
   };
   DateTime get_suspend_time() const
   {
       return suspend_time;
   };
   void set_suspend_time(const DateTime& val)
   {
       suspend_time = val;
   };
   boost::optional<DateTime> get_settle_time() const
   {
       return settle_time;
   };
   void set_settle_time(const boost::optional<DateTime>& val)
   {
       settle_time = val;
   };
   utility::string_t get_betting_type() const
   {
       return betting_type;
   };
   void set_betting_type(const utility::string_t& val)
   {
       betting_type = val;
   };
   bool get_turn_in_play_enabled() const
   {
       return turn_in_play_enabled;
   };
   void set_turn_in_play_enabled(const bool& val)
   {
       turn_in_play_enabled = val;
   };
   utility::string_t get_market_type() const
   {
       return market_type;
   };
   void set_market_type(const utility::string_t& val)
   {
       market_type = val;
   };
   utility::string_t get_regulator() const
   {
       return regulator;
   };
   void set_regulator(const utility::string_t& val)
   {
       regulator = val;
   };
   double get_market_base_rate() const
   {
       return market_base_rate;
   };
   void set_market_base_rate(const double& val)
   {
       market_base_rate = val;
   };
   bool get_discount_allowed() const
   {
       return discount_allowed;
   };
   void set_discount_allowed(const bool& val)
   {
       discount_allowed = val;
   };
   boost::optional<utility::string_t> get_wallet() const
   {
       return wallet;
   };
   void set_wallet(const boost::optional<utility::string_t>& val)
   {
       wallet = val;
   };
   boost::optional<utility::string_t> get_rules() const
   {
       return rules;
   };
   void set_rules(const boost::optional<utility::string_t>& val)
   {
       rules = val;
   };
   boost::optional<bool> get_rules_has_date() const
   {
       return rules_has_date;
   };
   void set_rules_has_date(const boost::optional<bool>& val)
   {
       rules_has_date = val;
   };
   boost::optional<utility::string_t> get_clarifications() const
   {
       return clarifications;
   };
   void set_clarifications(const boost::optional<utility::string_t>& val)
   {
       clarifications = val;
   };
   boost::optional<double> get_each_way_divisor() const
   {
       return each_way_divisor;
   };
   void set_each_way_divisor(const boost::optional<double>& val)
   {
       each_way_divisor = val;
   };

private:
   bool persistence_enabled;
   bool bsp_market;
   DateTime market_time;
   DateTime suspend_time;
   boost::optional<DateTime> settle_time;
   utility::string_t betting_type;
   bool turn_in_play_enabled;
   utility::string_t market_type;
   utility::string_t regulator;
   double market_base_rate;
   bool discount_allowed;
   boost::optional<utility::string_t> wallet;
   boost::optional<utility::string_t> rules;
   boost::optional<bool> rules_has_date;
   boost::optional<utility::string_t> clarifications;
   boost::optional<double> each_way_divisor;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketDescription& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketDescription& bfdata)
{
    os << "persistenceEnabled:" << std::endl << bfdata.persistence_enabled << std::endl;
    os << "bspMarket:" << std::endl << bfdata.bsp_market << std::endl;
    os << "marketTime:" << std::endl << bfdata.market_time << std::endl;
    os << "suspendTime:" << std::endl << bfdata.suspend_time << std::endl;
    if (bfdata.settle_time != boost::none)
    {
       os << "settle_time:" << std::endl << bfdata.settle_time.get()  << std::endl;
    }
    os << "bettingType:" << std::endl << bfdata.betting_type << std::endl;
    os << "turnInPlayEnabled:" << std::endl << bfdata.turn_in_play_enabled << std::endl;
    os << "marketType:" << std::endl << bfdata.market_type << std::endl;
    os << "regulator:" << std::endl << bfdata.regulator << std::endl;
    os << "marketBaseRate:" << std::endl << bfdata.market_base_rate << std::endl;
    os << "discountAllowed:" << std::endl << bfdata.discount_allowed << std::endl;
    if (bfdata.wallet != boost::none)
    {
       os << "wallet:" << std::endl << bfdata.wallet.get()  << std::endl;
    }
    if (bfdata.rules != boost::none)
    {
       os << "rules:" << std::endl << bfdata.rules.get()  << std::endl;
    }
    if (bfdata.rules_has_date != boost::none)
    {
       os << "rules_has_date:" << std::endl << bfdata.rules_has_date.get()  << std::endl;
    }
    if (bfdata.clarifications != boost::none)
    {
       os << "clarifications:" << std::endl << bfdata.clarifications.get()  << std::endl;
    }
    if (bfdata.each_way_divisor != boost::none)
    {
       os << "each_way_divisor:" << std::endl << bfdata.each_way_divisor.get()  << std::endl;
    }
    return os;
}

// Market Rates
// Defined in: SportsAPING.xml
class MarketRates : public BetfairData
{
public:
   MarketRates(
      double _marketBaseRate, 
      bool _discountAllowed) :
      market_base_rate(_marketBaseRate),
      discount_allowed(_discountAllowed){};
   
   // CTOR from json
   MarketRates(const web::json::value& jsonVal) : market_base_rate(from_json<double>(jsonVal.at(U("marketBaseRate")))), discount_allowed(from_json<bool>(jsonVal.at(U("discountAllowed"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(market_base_rate, U("marketBaseRate"), ret);
      build_json(discount_allowed, U("discountAllowed"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   double get_market_base_rate() const
   {
       return market_base_rate;
   };
   void set_market_base_rate(const double& val)
   {
       market_base_rate = val;
   };
   bool get_discount_allowed() const
   {
       return discount_allowed;
   };
   void set_discount_allowed(const bool& val)
   {
       discount_allowed = val;
   };

private:
   double market_base_rate;
   bool discount_allowed;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketRates& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketRates& bfdata)
{
    os << "marketBaseRate:" << std::endl << bfdata.market_base_rate << std::endl;
    os << "discountAllowed:" << std::endl << bfdata.discount_allowed << std::endl;
    return os;
}

// Market Licence
// Defined in: SportsAPING.xml
class MarketLicence : public BetfairData
{
public:
   MarketLicence(
      utility::string_t _wallet) :
      wallet(_wallet){};
   
   // CTOR from json
   MarketLicence(const web::json::value& jsonVal) : wallet(from_json<utility::string_t>(jsonVal.at(U("wallet"))))
   {
      if (jsonVal.has_field(U("rules")))
      {
         rules = from_json<utility::string_t>(jsonVal.at(U("rules")));
      }
      if (jsonVal.has_field(U("rulesHasDate")))
      {
         rules_has_date = from_json<bool>(jsonVal.at(U("rulesHasDate")));
      }
      if (jsonVal.has_field(U("clarifications")))
      {
         clarifications = from_json<utility::string_t>(jsonVal.at(U("clarifications")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(wallet, U("wallet"), ret);
      build_json(rules, U("rules"), ret);
      build_json(rules_has_date, U("rulesHasDate"), ret);
      build_json(clarifications, U("clarifications"), ret);

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
   boost::optional<utility::string_t> get_rules() const
   {
       return rules;
   };
   void set_rules(const boost::optional<utility::string_t>& val)
   {
       rules = val;
   };
   boost::optional<bool> get_rules_has_date() const
   {
       return rules_has_date;
   };
   void set_rules_has_date(const boost::optional<bool>& val)
   {
       rules_has_date = val;
   };
   boost::optional<utility::string_t> get_clarifications() const
   {
       return clarifications;
   };
   void set_clarifications(const boost::optional<utility::string_t>& val)
   {
       clarifications = val;
   };

private:
   utility::string_t wallet;
   boost::optional<utility::string_t> rules;
   boost::optional<bool> rules_has_date;
   boost::optional<utility::string_t> clarifications;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketLicence& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketLicence& bfdata)
{
    os << "wallet:" << std::endl << bfdata.wallet << std::endl;
    if (bfdata.rules != boost::none)
    {
       os << "rules:" << std::endl << bfdata.rules.get()  << std::endl;
    }
    if (bfdata.rules_has_date != boost::none)
    {
       os << "rules_has_date:" << std::endl << bfdata.rules_has_date.get()  << std::endl;
    }
    if (bfdata.clarifications != boost::none)
    {
       os << "clarifications:" << std::endl << bfdata.clarifications.get()  << std::endl;
    }
    return os;
}

// Market Line and Range Info
// Defined in: SportsAPING.xml
class MarketLineRangeInfo : public BetfairData
{
public:
   MarketLineRangeInfo(
      double _maxUnitValue, 
      double _minUnitValue, 
      double _interval, 
      utility::string_t _marketUnit) :
      max_unit_value(_maxUnitValue),
      min_unit_value(_minUnitValue),
      interval(_interval),
      market_unit(_marketUnit){};
   
   // CTOR from json
   MarketLineRangeInfo(const web::json::value& jsonVal) : max_unit_value(from_json<double>(jsonVal.at(U("maxUnitValue")))), min_unit_value(from_json<double>(jsonVal.at(U("minUnitValue")))), interval(from_json<double>(jsonVal.at(U("interval")))), market_unit(from_json<utility::string_t>(jsonVal.at(U("marketUnit"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(max_unit_value, U("maxUnitValue"), ret);
      build_json(min_unit_value, U("minUnitValue"), ret);
      build_json(interval, U("interval"), ret);
      build_json(market_unit, U("marketUnit"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   double get_max_unit_value() const
   {
       return max_unit_value;
   };
   void set_max_unit_value(const double& val)
   {
       max_unit_value = val;
   };
   double get_min_unit_value() const
   {
       return min_unit_value;
   };
   void set_min_unit_value(const double& val)
   {
       min_unit_value = val;
   };
   double get_interval() const
   {
       return interval;
   };
   void set_interval(const double& val)
   {
       interval = val;
   };
   utility::string_t get_market_unit() const
   {
       return market_unit;
   };
   void set_market_unit(const utility::string_t& val)
   {
       market_unit = val;
   };

private:
   double max_unit_value;
   double min_unit_value;
   double interval;
   utility::string_t market_unit;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketLineRangeInfo& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketLineRangeInfo& bfdata)
{
    os << "maxUnitValue:" << std::endl << bfdata.max_unit_value << std::endl;
    os << "minUnitValue:" << std::endl << bfdata.min_unit_value << std::endl;
    os << "interval:" << std::endl << bfdata.interval << std::endl;
    os << "marketUnit:" << std::endl << bfdata.market_unit << std::endl;
    return os;
}

class PriceSize : public BetfairData
{
public:
   PriceSize(
      double _price, 
      double _size) :
      price(_price),
      size(_size){};
   
   // CTOR from json
   PriceSize(const web::json::value& jsonVal) : price(from_json<double>(jsonVal.at(U("price")))), size(from_json<double>(jsonVal.at(U("size"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(price, U("price"), ret);
      build_json(size, U("size"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   double get_price() const
   {
       return price;
   };
   void set_price(const double& val)
   {
       price = val;
   };
   double get_size() const
   {
       return size;
   };
   void set_size(const double& val)
   {
       size = val;
   };

private:
   double price;
   double size;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const PriceSize& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const PriceSize& bfdata)
{
    os << "price:" << std::endl << bfdata.price << std::endl;
    os << "size:" << std::endl << bfdata.size << std::endl;
    return os;
}

// This object contains some text which may be useful to render a betting history
// view. It offers no long-term warranty as to the correctness of the text.
// Defined in: SportsAPING.xml
class ItemDescription : public BetfairData
{
public:
   ItemDescription() = default;
   
   // CTOR from json
   ItemDescription(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("eventTypeDesc")))
      {
         event_type_desc = from_json<utility::string_t>(jsonVal.at(U("eventTypeDesc")));
      }
      if (jsonVal.has_field(U("eventDesc")))
      {
         event_desc = from_json<utility::string_t>(jsonVal.at(U("eventDesc")));
      }
      if (jsonVal.has_field(U("marketDesc")))
      {
         market_desc = from_json<utility::string_t>(jsonVal.at(U("marketDesc")));
      }
      if (jsonVal.has_field(U("marketType")))
      {
         market_type = from_json<utility::string_t>(jsonVal.at(U("marketType")));
      }
      if (jsonVal.has_field(U("marketStartTime")))
      {
         market_start_time = from_json<DateTime>(jsonVal.at(U("marketStartTime")));
      }
      if (jsonVal.has_field(U("runnerDesc")))
      {
         runner_desc = from_json<utility::string_t>(jsonVal.at(U("runnerDesc")));
      }
      if (jsonVal.has_field(U("numberOfWinners")))
      {
         number_of_winners = from_json<int>(jsonVal.at(U("numberOfWinners")));
      }
      if (jsonVal.has_field(U("eachWayDivisor")))
      {
         each_way_divisor = from_json<double>(jsonVal.at(U("eachWayDivisor")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(event_type_desc, U("eventTypeDesc"), ret);
      build_json(event_desc, U("eventDesc"), ret);
      build_json(market_desc, U("marketDesc"), ret);
      build_json(market_type, U("marketType"), ret);
      build_json(market_start_time, U("marketStartTime"), ret);
      build_json(runner_desc, U("runnerDesc"), ret);
      build_json(number_of_winners, U("numberOfWinners"), ret);
      build_json(each_way_divisor, U("eachWayDivisor"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<utility::string_t> get_event_type_desc() const
   {
       return event_type_desc;
   };
   void set_event_type_desc(const boost::optional<utility::string_t>& val)
   {
       event_type_desc = val;
   };
   boost::optional<utility::string_t> get_event_desc() const
   {
       return event_desc;
   };
   void set_event_desc(const boost::optional<utility::string_t>& val)
   {
       event_desc = val;
   };
   boost::optional<utility::string_t> get_market_desc() const
   {
       return market_desc;
   };
   void set_market_desc(const boost::optional<utility::string_t>& val)
   {
       market_desc = val;
   };
   boost::optional<utility::string_t> get_market_type() const
   {
       return market_type;
   };
   void set_market_type(const boost::optional<utility::string_t>& val)
   {
       market_type = val;
   };
   boost::optional<DateTime> get_market_start_time() const
   {
       return market_start_time;
   };
   void set_market_start_time(const boost::optional<DateTime>& val)
   {
       market_start_time = val;
   };
   boost::optional<utility::string_t> get_runner_desc() const
   {
       return runner_desc;
   };
   void set_runner_desc(const boost::optional<utility::string_t>& val)
   {
       runner_desc = val;
   };
   boost::optional<int> get_number_of_winners() const
   {
       return number_of_winners;
   };
   void set_number_of_winners(const boost::optional<int>& val)
   {
       number_of_winners = val;
   };
   boost::optional<double> get_each_way_divisor() const
   {
       return each_way_divisor;
   };
   void set_each_way_divisor(const boost::optional<double>& val)
   {
       each_way_divisor = val;
   };

private:
   boost::optional<utility::string_t> event_type_desc;
   boost::optional<utility::string_t> event_desc;
   boost::optional<utility::string_t> market_desc;
   boost::optional<utility::string_t> market_type;
   boost::optional<DateTime> market_start_time;
   boost::optional<utility::string_t> runner_desc;
   boost::optional<int> number_of_winners;
   boost::optional<double> each_way_divisor;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ItemDescription& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ItemDescription& bfdata)
{
    if (bfdata.event_type_desc != boost::none)
    {
       os << "event_type_desc:" << std::endl << bfdata.event_type_desc.get()  << std::endl;
    }
    if (bfdata.event_desc != boost::none)
    {
       os << "event_desc:" << std::endl << bfdata.event_desc.get()  << std::endl;
    }
    if (bfdata.market_desc != boost::none)
    {
       os << "market_desc:" << std::endl << bfdata.market_desc.get()  << std::endl;
    }
    if (bfdata.market_type != boost::none)
    {
       os << "market_type:" << std::endl << bfdata.market_type.get()  << std::endl;
    }
    if (bfdata.market_start_time != boost::none)
    {
       os << "market_start_time:" << std::endl << bfdata.market_start_time.get()  << std::endl;
    }
    if (bfdata.runner_desc != boost::none)
    {
       os << "runner_desc:" << std::endl << bfdata.runner_desc.get()  << std::endl;
    }
    if (bfdata.number_of_winners != boost::none)
    {
       os << "number_of_winners:" << std::endl << bfdata.number_of_winners.get()  << std::endl;
    }
    if (bfdata.each_way_divisor != boost::none)
    {
       os << "each_way_divisor:" << std::endl << bfdata.each_way_divisor.get()  << std::endl;
    }
    return os;
}

// This object contains the unique identifier for a runner
// Defined in: SportsAPING.xml
class RunnerId : public BetfairData
{
public:
   RunnerId(
      utility::string_t _marketId, 
      int _selectionId) :
      market_id(_marketId),
      selection_id(_selectionId){};
   
   // CTOR from json
   RunnerId(const web::json::value& jsonVal) : market_id(from_json<utility::string_t>(jsonVal.at(U("marketId")))), selection_id(from_json<int>(jsonVal.at(U("selectionId"))))
   {
      if (jsonVal.has_field(U("handicap")))
      {
         handicap = from_json<double>(jsonVal.at(U("handicap")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(market_id, U("marketId"), ret);
      build_json(selection_id, U("selectionId"), ret);
      build_json(handicap, U("handicap"), ret);

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
   int get_selection_id() const
   {
       return selection_id;
   };
   void set_selection_id(const int& val)
   {
       selection_id = val;
   };
   boost::optional<double> get_handicap() const
   {
       return handicap;
   };
   void set_handicap(const boost::optional<double>& val)
   {
       handicap = val;
   };

private:
   utility::string_t market_id;
   int selection_id;
   boost::optional<double> handicap;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const RunnerId& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const RunnerId& bfdata)
{
    os << "marketId:" << std::endl << bfdata.market_id << std::endl;
    os << "selectionId:" << std::endl << bfdata.selection_id << std::endl;
    if (bfdata.handicap != boost::none)
    {
       os << "handicap:" << std::endl << bfdata.handicap.get()  << std::endl;
    }
    return os;
}

// Place a new LIMIT order (simple exchange bet for immediate execution)
// Defined in: SportsAPING.xml
class LimitOrder : public BetfairData
{
public:
   LimitOrder(
      double _size, 
      double _price, 
      utility::string_t _persistenceType) :
      size(_size),
      price(_price),
      persistence_type(_persistenceType){};
   
   // CTOR from json
   LimitOrder(const web::json::value& jsonVal) : size(from_json<double>(jsonVal.at(U("size")))), price(from_json<double>(jsonVal.at(U("price")))), persistence_type(from_json<utility::string_t>(jsonVal.at(U("persistenceType"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(size, U("size"), ret);
      build_json(price, U("price"), ret);
      build_json(persistence_type, U("persistenceType"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   double get_size() const
   {
       return size;
   };
   void set_size(const double& val)
   {
       size = val;
   };
   double get_price() const
   {
       return price;
   };
   void set_price(const double& val)
   {
       price = val;
   };
   utility::string_t get_persistence_type() const
   {
       return persistence_type;
   };
   void set_persistence_type(const utility::string_t& val)
   {
       persistence_type = val;
   };

private:
   double size;
   double price;
   utility::string_t persistence_type;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const LimitOrder& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const LimitOrder& bfdata)
{
    os << "size:" << std::endl << bfdata.size << std::endl;
    os << "price:" << std::endl << bfdata.price << std::endl;
    os << "persistenceType:" << std::endl << bfdata.persistence_type << std::endl;
    return os;
}

// Place a new LIMIT_ON_CLOSE bet
// Defined in: SportsAPING.xml
class LimitOnCloseOrder : public BetfairData
{
public:
   LimitOnCloseOrder(
      double _liability, 
      double _price) :
      liability(_liability),
      price(_price){};
   
   // CTOR from json
   LimitOnCloseOrder(const web::json::value& jsonVal) : liability(from_json<double>(jsonVal.at(U("liability")))), price(from_json<double>(jsonVal.at(U("price"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(liability, U("liability"), ret);
      build_json(price, U("price"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   double get_liability() const
   {
       return liability;
   };
   void set_liability(const double& val)
   {
       liability = val;
   };
   double get_price() const
   {
       return price;
   };
   void set_price(const double& val)
   {
       price = val;
   };

private:
   double liability;
   double price;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const LimitOnCloseOrder& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const LimitOnCloseOrder& bfdata)
{
    os << "liability:" << std::endl << bfdata.liability << std::endl;
    os << "price:" << std::endl << bfdata.price << std::endl;
    return os;
}

// Place a new MARKET_ON_CLOSE bet
// Defined in: SportsAPING.xml
class MarketOnCloseOrder : public BetfairData
{
public:
   MarketOnCloseOrder(
      double _liability) :
      liability(_liability){};
   
   // CTOR from json
   MarketOnCloseOrder(const web::json::value& jsonVal) : liability(from_json<double>(jsonVal.at(U("liability"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(liability, U("liability"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   double get_liability() const
   {
       return liability;
   };
   void set_liability(const double& val)
   {
       liability = val;
   };

private:
   double liability;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketOnCloseOrder& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketOnCloseOrder& bfdata)
{
    os << "liability:" << std::endl << bfdata.liability << std::endl;
    return os;
}

// Instruction to fully or partially cancel an order (only applies to LIMIT
// orders)
// Defined in: SportsAPING.xml
class CancelInstruction : public BetfairData
{
public:
   CancelInstruction(
      utility::string_t _betId) :
      bet_id(_betId){};
   
   // CTOR from json
   CancelInstruction(const web::json::value& jsonVal) : bet_id(from_json<utility::string_t>(jsonVal.at(U("betId"))))
   {
      if (jsonVal.has_field(U("sizeReduction")))
      {
         size_reduction = from_json<double>(jsonVal.at(U("sizeReduction")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(bet_id, U("betId"), ret);
      build_json(size_reduction, U("sizeReduction"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_bet_id() const
   {
       return bet_id;
   };
   void set_bet_id(const utility::string_t& val)
   {
       bet_id = val;
   };
   boost::optional<double> get_size_reduction() const
   {
       return size_reduction;
   };
   void set_size_reduction(const boost::optional<double>& val)
   {
       size_reduction = val;
   };

private:
   utility::string_t bet_id;
   boost::optional<double> size_reduction;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CancelInstruction& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CancelInstruction& bfdata)
{
    os << "betId:" << std::endl << bfdata.bet_id << std::endl;
    if (bfdata.size_reduction != boost::none)
    {
       os << "size_reduction:" << std::endl << bfdata.size_reduction.get()  << std::endl;
    }
    return os;
}

// Instruction to replace a LIMIT or LIMIT_ON_CLOSE order at a new price. Original
// order will be cancelled and a new order placed at the new price for the
// remaining stake.
// Defined in: SportsAPING.xml
class ReplaceInstruction : public BetfairData
{
public:
   ReplaceInstruction(
      utility::string_t _betId, 
      double _newPrice) :
      bet_id(_betId),
      new_price(_newPrice){};
   
   // CTOR from json
   ReplaceInstruction(const web::json::value& jsonVal) : bet_id(from_json<utility::string_t>(jsonVal.at(U("betId")))), new_price(from_json<double>(jsonVal.at(U("newPrice"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(bet_id, U("betId"), ret);
      build_json(new_price, U("newPrice"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_bet_id() const
   {
       return bet_id;
   };
   void set_bet_id(const utility::string_t& val)
   {
       bet_id = val;
   };
   double get_new_price() const
   {
       return new_price;
   };
   void set_new_price(const double& val)
   {
       new_price = val;
   };

private:
   utility::string_t bet_id;
   double new_price;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ReplaceInstruction& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ReplaceInstruction& bfdata)
{
    os << "betId:" << std::endl << bfdata.bet_id << std::endl;
    os << "newPrice:" << std::endl << bfdata.new_price << std::endl;
    return os;
}

// Instruction to update LIMIT bet's persistence of an order that do not affect
// exposure
// Defined in: SportsAPING.xml
class UpdateInstruction : public BetfairData
{
public:
   UpdateInstruction(
      utility::string_t _betId, 
      utility::string_t _newPersistenceType) :
      bet_id(_betId),
      new_persistence_type(_newPersistenceType){};
   
   // CTOR from json
   UpdateInstruction(const web::json::value& jsonVal) : bet_id(from_json<utility::string_t>(jsonVal.at(U("betId")))), new_persistence_type(from_json<utility::string_t>(jsonVal.at(U("newPersistenceType"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(bet_id, U("betId"), ret);
      build_json(new_persistence_type, U("newPersistenceType"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_bet_id() const
   {
       return bet_id;
   };
   void set_bet_id(const utility::string_t& val)
   {
       bet_id = val;
   };
   utility::string_t get_new_persistence_type() const
   {
       return new_persistence_type;
   };
   void set_new_persistence_type(const utility::string_t& val)
   {
       new_persistence_type = val;
   };

private:
   utility::string_t bet_id;
   utility::string_t new_persistence_type;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const UpdateInstruction& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const UpdateInstruction& bfdata)
{
    os << "betId:" << std::endl << bfdata.bet_id << std::endl;
    os << "newPersistenceType:" << std::endl << bfdata.new_persistence_type << std::endl;
    return os;
}

// Options to alter the default representation of best offer prices
// Defined in: SportsAPING.xml
class ExBestOffersOverrides : public BetfairData
{
public:
   ExBestOffersOverrides() = default;
   
   // CTOR from json
   ExBestOffersOverrides(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("bestPricesDepth")))
      {
         best_prices_depth = from_json<int>(jsonVal.at(U("bestPricesDepth")));
      }
      if (jsonVal.has_field(U("rollupModel")))
      {
         rollup_model = from_json<utility::string_t>(jsonVal.at(U("rollupModel")));
      }
      if (jsonVal.has_field(U("rollupLimit")))
      {
         rollup_limit = from_json<int>(jsonVal.at(U("rollupLimit")));
      }
      if (jsonVal.has_field(U("rollupLiabilityThreshold")))
      {
         rollup_liability_threshold = from_json<double>(jsonVal.at(U("rollupLiabilityThreshold")));
      }
      if (jsonVal.has_field(U("rollupLiabilityFactor")))
      {
         rollup_liability_factor = from_json<int>(jsonVal.at(U("rollupLiabilityFactor")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(best_prices_depth, U("bestPricesDepth"), ret);
      build_json(rollup_model, U("rollupModel"), ret);
      build_json(rollup_limit, U("rollupLimit"), ret);
      build_json(rollup_liability_threshold, U("rollupLiabilityThreshold"), ret);
      build_json(rollup_liability_factor, U("rollupLiabilityFactor"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<int> get_best_prices_depth() const
   {
       return best_prices_depth;
   };
   void set_best_prices_depth(const boost::optional<int>& val)
   {
       best_prices_depth = val;
   };
   boost::optional<utility::string_t> get_rollup_model() const
   {
       return rollup_model;
   };
   void set_rollup_model(const boost::optional<utility::string_t>& val)
   {
       rollup_model = val;
   };
   boost::optional<int> get_rollup_limit() const
   {
       return rollup_limit;
   };
   void set_rollup_limit(const boost::optional<int>& val)
   {
       rollup_limit = val;
   };
   boost::optional<double> get_rollup_liability_threshold() const
   {
       return rollup_liability_threshold;
   };
   void set_rollup_liability_threshold(const boost::optional<double>& val)
   {
       rollup_liability_threshold = val;
   };
   boost::optional<int> get_rollup_liability_factor() const
   {
       return rollup_liability_factor;
   };
   void set_rollup_liability_factor(const boost::optional<int>& val)
   {
       rollup_liability_factor = val;
   };

private:
   boost::optional<int> best_prices_depth;
   boost::optional<utility::string_t> rollup_model;
   boost::optional<int> rollup_limit;
   boost::optional<double> rollup_liability_threshold;
   boost::optional<int> rollup_liability_factor;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ExBestOffersOverrides& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ExBestOffersOverrides& bfdata)
{
    if (bfdata.best_prices_depth != boost::none)
    {
       os << "best_prices_depth:" << std::endl << bfdata.best_prices_depth.get()  << std::endl;
    }
    if (bfdata.rollup_model != boost::none)
    {
       os << "rollup_model:" << std::endl << bfdata.rollup_model.get()  << std::endl;
    }
    if (bfdata.rollup_limit != boost::none)
    {
       os << "rollup_limit:" << std::endl << bfdata.rollup_limit.get()  << std::endl;
    }
    if (bfdata.rollup_liability_threshold != boost::none)
    {
       os << "rollup_liability_threshold:" << std::endl << bfdata.rollup_liability_threshold.get()  << std::endl;
    }
    if (bfdata.rollup_liability_factor != boost::none)
    {
       os << "rollup_liability_factor:" << std::endl << bfdata.rollup_liability_factor.get()  << std::endl;
    }
    return os;
}

// Profit and loss if selection is wins or loses
// Defined in: SportsAPING.xml
class RunnerProfitAndLoss : public BetfairData
{
public:
   RunnerProfitAndLoss() = default;
   
   // CTOR from json
   RunnerProfitAndLoss(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("selectionId")))
      {
         selection_id = from_json<int>(jsonVal.at(U("selectionId")));
      }
      if (jsonVal.has_field(U("ifWin")))
      {
         if_win = from_json<double>(jsonVal.at(U("ifWin")));
      }
      if (jsonVal.has_field(U("ifLose")))
      {
         if_lose = from_json<double>(jsonVal.at(U("ifLose")));
      }
      if (jsonVal.has_field(U("ifPlace")))
      {
         if_place = from_json<double>(jsonVal.at(U("ifPlace")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(selection_id, U("selectionId"), ret);
      build_json(if_win, U("ifWin"), ret);
      build_json(if_lose, U("ifLose"), ret);
      build_json(if_place, U("ifPlace"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<int> get_selection_id() const
   {
       return selection_id;
   };
   void set_selection_id(const boost::optional<int>& val)
   {
       selection_id = val;
   };
   boost::optional<double> get_if_win() const
   {
       return if_win;
   };
   void set_if_win(const boost::optional<double>& val)
   {
       if_win = val;
   };
   boost::optional<double> get_if_lose() const
   {
       return if_lose;
   };
   void set_if_lose(const boost::optional<double>& val)
   {
       if_lose = val;
   };
   boost::optional<double> get_if_place() const
   {
       return if_place;
   };
   void set_if_place(const boost::optional<double>& val)
   {
       if_place = val;
   };

private:
   boost::optional<int> selection_id;
   boost::optional<double> if_win;
   boost::optional<double> if_lose;
   boost::optional<double> if_place;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const RunnerProfitAndLoss& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const RunnerProfitAndLoss& bfdata)
{
    if (bfdata.selection_id != boost::none)
    {
       os << "selection_id:" << std::endl << bfdata.selection_id.get()  << std::endl;
    }
    if (bfdata.if_win != boost::none)
    {
       os << "if_win:" << std::endl << bfdata.if_win.get()  << std::endl;
    }
    if (bfdata.if_lose != boost::none)
    {
       os << "if_lose:" << std::endl << bfdata.if_lose.get()  << std::endl;
    }
    if (bfdata.if_place != boost::none)
    {
       os << "if_place:" << std::endl << bfdata.if_place.get()  << std::endl;
    }
    return os;
}

class MarketFilter : public BetfairData
{
public:
   MarketFilter() = default;
   
   // CTOR from json
   MarketFilter(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("textQuery")))
      {
         text_query = from_json<utility::string_t>(jsonVal.at(U("textQuery")));
      }
      if (jsonVal.has_field(U("exchangeIds")))
      {
         exchange_ids = from_json<std::vector<utility::string_t>>(jsonVal.at(U("exchangeIds")));
      }
      if (jsonVal.has_field(U("eventTypeIds")))
      {
         event_type_ids = from_json<std::vector<utility::string_t>>(jsonVal.at(U("eventTypeIds")));
      }
      if (jsonVal.has_field(U("eventIds")))
      {
         event_ids = from_json<std::vector<utility::string_t>>(jsonVal.at(U("eventIds")));
      }
      if (jsonVal.has_field(U("competitionIds")))
      {
         competition_ids = from_json<std::vector<utility::string_t>>(jsonVal.at(U("competitionIds")));
      }
      if (jsonVal.has_field(U("marketIds")))
      {
         market_ids = from_json<std::vector<utility::string_t>>(jsonVal.at(U("marketIds")));
      }
      if (jsonVal.has_field(U("venues")))
      {
         venues = from_json<std::vector<utility::string_t>>(jsonVal.at(U("venues")));
      }
      if (jsonVal.has_field(U("bspOnly")))
      {
         bsp_only = from_json<bool>(jsonVal.at(U("bspOnly")));
      }
      if (jsonVal.has_field(U("turnInPlayEnabled")))
      {
         turn_in_play_enabled = from_json<bool>(jsonVal.at(U("turnInPlayEnabled")));
      }
      if (jsonVal.has_field(U("inPlayOnly")))
      {
         in_play_only = from_json<bool>(jsonVal.at(U("inPlayOnly")));
      }
      if (jsonVal.has_field(U("marketBettingTypes")))
      {
         market_betting_types = from_json<std::vector<utility::string_t>>(jsonVal.at(U("marketBettingTypes")));
      }
      if (jsonVal.has_field(U("marketCountries")))
      {
         market_countries = from_json<std::vector<utility::string_t>>(jsonVal.at(U("marketCountries")));
      }
      if (jsonVal.has_field(U("marketTypeCodes")))
      {
         market_type_codes = from_json<std::vector<utility::string_t>>(jsonVal.at(U("marketTypeCodes")));
      }
      if (jsonVal.has_field(U("marketStartTime")))
      {
         market_start_time = from_json<TimeRange>(jsonVal.at(U("marketStartTime")));
      }
      if (jsonVal.has_field(U("withOrders")))
      {
         with_orders = from_json<std::vector<utility::string_t>>(jsonVal.at(U("withOrders")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(text_query, U("textQuery"), ret);
      build_json(exchange_ids, U("exchangeIds"), ret);
      build_json(event_type_ids, U("eventTypeIds"), ret);
      build_json(event_ids, U("eventIds"), ret);
      build_json(competition_ids, U("competitionIds"), ret);
      build_json(market_ids, U("marketIds"), ret);
      build_json(venues, U("venues"), ret);
      build_json(bsp_only, U("bspOnly"), ret);
      build_json(turn_in_play_enabled, U("turnInPlayEnabled"), ret);
      build_json(in_play_only, U("inPlayOnly"), ret);
      build_json(market_betting_types, U("marketBettingTypes"), ret);
      build_json(market_countries, U("marketCountries"), ret);
      build_json(market_type_codes, U("marketTypeCodes"), ret);
      build_json(market_start_time, U("marketStartTime"), ret);
      build_json(with_orders, U("withOrders"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<utility::string_t> get_text_query() const
   {
       return text_query;
   };
   void set_text_query(const boost::optional<utility::string_t>& val)
   {
       text_query = val;
   };
   std::vector<utility::string_t> get_exchange_ids() const
   {
       return exchange_ids;
   };
   void set_exchange_ids(const std::vector<utility::string_t>& val)
   {
       exchange_ids = val;
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
   std::vector<utility::string_t> get_competition_ids() const
   {
       return competition_ids;
   };
   void set_competition_ids(const std::vector<utility::string_t>& val)
   {
       competition_ids = val;
   };
   std::vector<utility::string_t> get_market_ids() const
   {
       return market_ids;
   };
   void set_market_ids(const std::vector<utility::string_t>& val)
   {
       market_ids = val;
   };
   std::vector<utility::string_t> get_venues() const
   {
       return venues;
   };
   void set_venues(const std::vector<utility::string_t>& val)
   {
       venues = val;
   };
   boost::optional<bool> get_bsp_only() const
   {
       return bsp_only;
   };
   void set_bsp_only(const boost::optional<bool>& val)
   {
       bsp_only = val;
   };
   boost::optional<bool> get_turn_in_play_enabled() const
   {
       return turn_in_play_enabled;
   };
   void set_turn_in_play_enabled(const boost::optional<bool>& val)
   {
       turn_in_play_enabled = val;
   };
   boost::optional<bool> get_in_play_only() const
   {
       return in_play_only;
   };
   void set_in_play_only(const boost::optional<bool>& val)
   {
       in_play_only = val;
   };
   std::vector<utility::string_t> get_market_betting_types() const
   {
       return market_betting_types;
   };
   void set_market_betting_types(const std::vector<utility::string_t>& val)
   {
       market_betting_types = val;
   };
   std::vector<utility::string_t> get_market_countries() const
   {
       return market_countries;
   };
   void set_market_countries(const std::vector<utility::string_t>& val)
   {
       market_countries = val;
   };
   std::vector<utility::string_t> get_market_type_codes() const
   {
       return market_type_codes;
   };
   void set_market_type_codes(const std::vector<utility::string_t>& val)
   {
       market_type_codes = val;
   };
   boost::optional<TimeRange> get_market_start_time() const
   {
       return market_start_time;
   };
   void set_market_start_time(const boost::optional<TimeRange>& val)
   {
       market_start_time = val;
   };
   std::vector<utility::string_t> get_with_orders() const
   {
       return with_orders;
   };
   void set_with_orders(const std::vector<utility::string_t>& val)
   {
       with_orders = val;
   };

private:
   boost::optional<utility::string_t> text_query;
   std::vector<utility::string_t> exchange_ids;
   std::vector<utility::string_t> event_type_ids;
   std::vector<utility::string_t> event_ids;
   std::vector<utility::string_t> competition_ids;
   std::vector<utility::string_t> market_ids;
   std::vector<utility::string_t> venues;
   boost::optional<bool> bsp_only;
   boost::optional<bool> turn_in_play_enabled;
   boost::optional<bool> in_play_only;
   std::vector<utility::string_t> market_betting_types;
   std::vector<utility::string_t> market_countries;
   std::vector<utility::string_t> market_type_codes;
   boost::optional<TimeRange> market_start_time;
   std::vector<utility::string_t> with_orders;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketFilter& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketFilter& bfdata)
{
    if (bfdata.text_query != boost::none)
    {
       os << "text_query:" << std::endl << bfdata.text_query.get()  << std::endl;
    }
    os << "exchangeIds:" << std::endl << bfdata.exchange_ids << std::endl;
    os << "eventTypeIds:" << std::endl << bfdata.event_type_ids << std::endl;
    os << "eventIds:" << std::endl << bfdata.event_ids << std::endl;
    os << "competitionIds:" << std::endl << bfdata.competition_ids << std::endl;
    os << "marketIds:" << std::endl << bfdata.market_ids << std::endl;
    os << "venues:" << std::endl << bfdata.venues << std::endl;
    if (bfdata.bsp_only != boost::none)
    {
       os << "bsp_only:" << std::endl << bfdata.bsp_only.get()  << std::endl;
    }
    if (bfdata.turn_in_play_enabled != boost::none)
    {
       os << "turn_in_play_enabled:" << std::endl << bfdata.turn_in_play_enabled.get()  << std::endl;
    }
    if (bfdata.in_play_only != boost::none)
    {
       os << "in_play_only:" << std::endl << bfdata.in_play_only.get()  << std::endl;
    }
    os << "marketBettingTypes:" << std::endl << bfdata.market_betting_types << std::endl;
    os << "marketCountries:" << std::endl << bfdata.market_countries << std::endl;
    os << "marketTypeCodes:" << std::endl << bfdata.market_type_codes << std::endl;
    if (bfdata.market_start_time != boost::none)
    {
       os << "market_start_time:" << std::endl << bfdata.market_start_time.get()  << std::endl;
    }
    os << "withOrders:" << std::endl << bfdata.with_orders << std::endl;
    return os;
}

// Information about a market
// Defined in: SportsAPING.xml
class MarketCatalogue : public BetfairData
{
public:
   MarketCatalogue(
      utility::string_t _marketId, 
      utility::string_t _marketName) :
      market_id(_marketId),
      market_name(_marketName){};
   
   // CTOR from json
   MarketCatalogue(const web::json::value& jsonVal) : market_id(from_json<utility::string_t>(jsonVal.at(U("marketId")))), market_name(from_json<utility::string_t>(jsonVal.at(U("marketName"))))
   {
      if (jsonVal.has_field(U("marketStartTime")))
      {
         market_start_time = from_json<DateTime>(jsonVal.at(U("marketStartTime")));
      }
      if (jsonVal.has_field(U("description")))
      {
         description = from_json<MarketDescription>(jsonVal.at(U("description")));
      }
      if (jsonVal.has_field(U("totalMatched")))
      {
         total_matched = from_json<double>(jsonVal.at(U("totalMatched")));
      }
      if (jsonVal.has_field(U("runners")))
      {
         runners = from_json<std::vector<RunnerCatalog>>(jsonVal.at(U("runners")));
      }
      if (jsonVal.has_field(U("eventType")))
      {
         event_type = from_json<EventType>(jsonVal.at(U("eventType")));
      }
      if (jsonVal.has_field(U("competition")))
      {
         competition = from_json<Competition>(jsonVal.at(U("competition")));
      }
      if (jsonVal.has_field(U("event")))
      {
         event = from_json<Event>(jsonVal.at(U("event")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(market_id, U("marketId"), ret);
      build_json(market_name, U("marketName"), ret);
      build_json(market_start_time, U("marketStartTime"), ret);
      build_json(description, U("description"), ret);
      build_json(total_matched, U("totalMatched"), ret);
      build_json(runners, U("runners"), ret);
      build_json(event_type, U("eventType"), ret);
      build_json(competition, U("competition"), ret);
      build_json(event, U("event"), ret);

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
   utility::string_t get_market_name() const
   {
       return market_name;
   };
   void set_market_name(const utility::string_t& val)
   {
       market_name = val;
   };
   boost::optional<DateTime> get_market_start_time() const
   {
       return market_start_time;
   };
   void set_market_start_time(const boost::optional<DateTime>& val)
   {
       market_start_time = val;
   };
   boost::optional<MarketDescription> get_description() const
   {
       return description;
   };
   void set_description(const boost::optional<MarketDescription>& val)
   {
       description = val;
   };
   boost::optional<double> get_total_matched() const
   {
       return total_matched;
   };
   void set_total_matched(const boost::optional<double>& val)
   {
       total_matched = val;
   };
   std::vector<RunnerCatalog> get_runners() const
   {
       return runners;
   };
   void set_runners(const std::vector<RunnerCatalog>& val)
   {
       runners = val;
   };
   boost::optional<EventType> get_event_type() const
   {
       return event_type;
   };
   void set_event_type(const boost::optional<EventType>& val)
   {
       event_type = val;
   };
   boost::optional<Competition> get_competition() const
   {
       return competition;
   };
   void set_competition(const boost::optional<Competition>& val)
   {
       competition = val;
   };
   boost::optional<Event> get_event() const
   {
       return event;
   };
   void set_event(const boost::optional<Event>& val)
   {
       event = val;
   };

private:
   utility::string_t market_id;
   utility::string_t market_name;
   boost::optional<DateTime> market_start_time;
   boost::optional<MarketDescription> description;
   boost::optional<double> total_matched;
   std::vector<RunnerCatalog> runners;
   boost::optional<EventType> event_type;
   boost::optional<Competition> competition;
   boost::optional<Event> event;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketCatalogue& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketCatalogue& bfdata)
{
    os << "marketId:" << std::endl << bfdata.market_id << std::endl;
    os << "marketName:" << std::endl << bfdata.market_name << std::endl;
    if (bfdata.market_start_time != boost::none)
    {
       os << "market_start_time:" << std::endl << bfdata.market_start_time.get()  << std::endl;
    }
    if (bfdata.description != boost::none)
    {
       os << "description:" << std::endl << bfdata.description.get()  << std::endl;
    }
    if (bfdata.total_matched != boost::none)
    {
       os << "total_matched:" << std::endl << bfdata.total_matched.get()  << std::endl;
    }
    os << "runners:" << std::endl << bfdata.runners << std::endl;
    if (bfdata.event_type != boost::none)
    {
       os << "event_type:" << std::endl << bfdata.event_type.get()  << std::endl;
    }
    if (bfdata.competition != boost::none)
    {
       os << "competition:" << std::endl << bfdata.competition.get()  << std::endl;
    }
    if (bfdata.event != boost::none)
    {
       os << "event:" << std::endl << bfdata.event.get()  << std::endl;
    }
    return os;
}

class ExchangePrices : public BetfairData
{
public:
   ExchangePrices() = default;
   
   // CTOR from json
   ExchangePrices(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("availableToBack")))
      {
         available_to_back = from_json<std::vector<PriceSize>>(jsonVal.at(U("availableToBack")));
      }
      if (jsonVal.has_field(U("availableToLay")))
      {
         available_to_lay = from_json<std::vector<PriceSize>>(jsonVal.at(U("availableToLay")));
      }
      if (jsonVal.has_field(U("tradedVolume")))
      {
         traded_volume = from_json<std::vector<PriceSize>>(jsonVal.at(U("tradedVolume")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(available_to_back, U("availableToBack"), ret);
      build_json(available_to_lay, U("availableToLay"), ret);
      build_json(traded_volume, U("tradedVolume"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   std::vector<PriceSize> get_available_to_back() const
   {
       return available_to_back;
   };
   void set_available_to_back(const std::vector<PriceSize>& val)
   {
       available_to_back = val;
   };
   std::vector<PriceSize> get_available_to_lay() const
   {
       return available_to_lay;
   };
   void set_available_to_lay(const std::vector<PriceSize>& val)
   {
       available_to_lay = val;
   };
   std::vector<PriceSize> get_traded_volume() const
   {
       return traded_volume;
   };
   void set_traded_volume(const std::vector<PriceSize>& val)
   {
       traded_volume = val;
   };

private:
   std::vector<PriceSize> available_to_back;
   std::vector<PriceSize> available_to_lay;
   std::vector<PriceSize> traded_volume;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ExchangePrices& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ExchangePrices& bfdata)
{
    os << "availableToBack:" << std::endl << bfdata.available_to_back << std::endl;
    os << "availableToLay:" << std::endl << bfdata.available_to_lay << std::endl;
    os << "tradedVolume:" << std::endl << bfdata.traded_volume << std::endl;
    return os;
}

// Information about the Betfair Starting Price. Only available in BSP markets
// Defined in: SportsAPING.xml
class StartingPrices : public BetfairData
{
public:
   StartingPrices() = default;
   
   // CTOR from json
   StartingPrices(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("nearPrice")))
      {
         near_price = from_json<double>(jsonVal.at(U("nearPrice")));
      }
      if (jsonVal.has_field(U("farPrice")))
      {
         far_price = from_json<double>(jsonVal.at(U("farPrice")));
      }
      if (jsonVal.has_field(U("backStakeTaken")))
      {
         back_stake_taken = from_json<std::vector<PriceSize>>(jsonVal.at(U("backStakeTaken")));
      }
      if (jsonVal.has_field(U("layLiabilityTaken")))
      {
         lay_liability_taken = from_json<std::vector<PriceSize>>(jsonVal.at(U("layLiabilityTaken")));
      }
      if (jsonVal.has_field(U("actualSP")))
      {
         actual_sp = from_json<double>(jsonVal.at(U("actualSP")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(near_price, U("nearPrice"), ret);
      build_json(far_price, U("farPrice"), ret);
      build_json(back_stake_taken, U("backStakeTaken"), ret);
      build_json(lay_liability_taken, U("layLiabilityTaken"), ret);
      build_json(actual_sp, U("actualSP"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<double> get_near_price() const
   {
       return near_price;
   };
   void set_near_price(const boost::optional<double>& val)
   {
       near_price = val;
   };
   boost::optional<double> get_far_price() const
   {
       return far_price;
   };
   void set_far_price(const boost::optional<double>& val)
   {
       far_price = val;
   };
   std::vector<PriceSize> get_back_stake_taken() const
   {
       return back_stake_taken;
   };
   void set_back_stake_taken(const std::vector<PriceSize>& val)
   {
       back_stake_taken = val;
   };
   std::vector<PriceSize> get_lay_liability_taken() const
   {
       return lay_liability_taken;
   };
   void set_lay_liability_taken(const std::vector<PriceSize>& val)
   {
       lay_liability_taken = val;
   };
   boost::optional<double> get_actual_sp() const
   {
       return actual_sp;
   };
   void set_actual_sp(const boost::optional<double>& val)
   {
       actual_sp = val;
   };

private:
   boost::optional<double> near_price;
   boost::optional<double> far_price;
   std::vector<PriceSize> back_stake_taken;
   std::vector<PriceSize> lay_liability_taken;
   boost::optional<double> actual_sp;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const StartingPrices& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const StartingPrices& bfdata)
{
    if (bfdata.near_price != boost::none)
    {
       os << "near_price:" << std::endl << bfdata.near_price.get()  << std::endl;
    }
    if (bfdata.far_price != boost::none)
    {
       os << "far_price:" << std::endl << bfdata.far_price.get()  << std::endl;
    }
    os << "backStakeTaken:" << std::endl << bfdata.back_stake_taken << std::endl;
    os << "layLiabilityTaken:" << std::endl << bfdata.lay_liability_taken << std::endl;
    if (bfdata.actual_sp != boost::none)
    {
       os << "actual_sp:" << std::endl << bfdata.actual_sp.get()  << std::endl;
    }
    return os;
}

// The dynamic data about runners in a market
// Defined in: SportsAPING.xml
class Runner : public BetfairData
{
public:
   Runner(
      int _selectionId, 
      double _handicap, 
      utility::string_t _status, 
      double _adjustmentFactor) :
      selection_id(_selectionId),
      handicap(_handicap),
      status(_status),
      adjustment_factor(_adjustmentFactor){};
   
   // CTOR from json
   Runner(const web::json::value& jsonVal) : selection_id(from_json<int>(jsonVal.at(U("selectionId")))), handicap(from_json<double>(jsonVal.at(U("handicap")))), status(from_json<utility::string_t>(jsonVal.at(U("status")))), adjustment_factor(from_json<double>(jsonVal.at(U("adjustmentFactor"))))
   {
      if (jsonVal.has_field(U("lastPriceTraded")))
      {
         last_price_traded = from_json<double>(jsonVal.at(U("lastPriceTraded")));
      }
      if (jsonVal.has_field(U("totalMatched")))
      {
         total_matched = from_json<double>(jsonVal.at(U("totalMatched")));
      }
      if (jsonVal.has_field(U("removalDate")))
      {
         removal_date = from_json<DateTime>(jsonVal.at(U("removalDate")));
      }
      if (jsonVal.has_field(U("sp")))
      {
         sp = from_json<StartingPrices>(jsonVal.at(U("sp")));
      }
      if (jsonVal.has_field(U("ex")))
      {
         ex = from_json<ExchangePrices>(jsonVal.at(U("ex")));
      }
      if (jsonVal.has_field(U("orders")))
      {
         orders = from_json<std::vector<Order>>(jsonVal.at(U("orders")));
      }
      if (jsonVal.has_field(U("matches")))
      {
         matches = from_json<std::vector<Match>>(jsonVal.at(U("matches")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(selection_id, U("selectionId"), ret);
      build_json(handicap, U("handicap"), ret);
      build_json(status, U("status"), ret);
      build_json(adjustment_factor, U("adjustmentFactor"), ret);
      build_json(last_price_traded, U("lastPriceTraded"), ret);
      build_json(total_matched, U("totalMatched"), ret);
      build_json(removal_date, U("removalDate"), ret);
      build_json(sp, U("sp"), ret);
      build_json(ex, U("ex"), ret);
      build_json(orders, U("orders"), ret);
      build_json(matches, U("matches"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   int get_selection_id() const
   {
       return selection_id;
   };
   void set_selection_id(const int& val)
   {
       selection_id = val;
   };
   double get_handicap() const
   {
       return handicap;
   };
   void set_handicap(const double& val)
   {
       handicap = val;
   };
   utility::string_t get_status() const
   {
       return status;
   };
   void set_status(const utility::string_t& val)
   {
       status = val;
   };
   double get_adjustment_factor() const
   {
       return adjustment_factor;
   };
   void set_adjustment_factor(const double& val)
   {
       adjustment_factor = val;
   };
   boost::optional<double> get_last_price_traded() const
   {
       return last_price_traded;
   };
   void set_last_price_traded(const boost::optional<double>& val)
   {
       last_price_traded = val;
   };
   boost::optional<double> get_total_matched() const
   {
       return total_matched;
   };
   void set_total_matched(const boost::optional<double>& val)
   {
       total_matched = val;
   };
   boost::optional<DateTime> get_removal_date() const
   {
       return removal_date;
   };
   void set_removal_date(const boost::optional<DateTime>& val)
   {
       removal_date = val;
   };
   boost::optional<StartingPrices> get_sp() const
   {
       return sp;
   };
   void set_sp(const boost::optional<StartingPrices>& val)
   {
       sp = val;
   };
   boost::optional<ExchangePrices> get_ex() const
   {
       return ex;
   };
   void set_ex(const boost::optional<ExchangePrices>& val)
   {
       ex = val;
   };
   std::vector<Order> get_orders() const
   {
       return orders;
   };
   void set_orders(const std::vector<Order>& val)
   {
       orders = val;
   };
   std::vector<Match> get_matches() const
   {
       return matches;
   };
   void set_matches(const std::vector<Match>& val)
   {
       matches = val;
   };

private:
   int selection_id;
   double handicap;
   utility::string_t status;
   double adjustment_factor;
   boost::optional<double> last_price_traded;
   boost::optional<double> total_matched;
   boost::optional<DateTime> removal_date;
   boost::optional<StartingPrices> sp;
   boost::optional<ExchangePrices> ex;
   std::vector<Order> orders;
   std::vector<Match> matches;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const Runner& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const Runner& bfdata)
{
    os << "selectionId:" << std::endl << bfdata.selection_id << std::endl;
    os << "handicap:" << std::endl << bfdata.handicap << std::endl;
    os << "status:" << std::endl << bfdata.status << std::endl;
    os << "adjustmentFactor:" << std::endl << bfdata.adjustment_factor << std::endl;
    if (bfdata.last_price_traded != boost::none)
    {
       os << "last_price_traded:" << std::endl << bfdata.last_price_traded.get()  << std::endl;
    }
    if (bfdata.total_matched != boost::none)
    {
       os << "total_matched:" << std::endl << bfdata.total_matched.get()  << std::endl;
    }
    if (bfdata.removal_date != boost::none)
    {
       os << "removal_date:" << std::endl << bfdata.removal_date.get()  << std::endl;
    }
    if (bfdata.sp != boost::none)
    {
       os << "sp:" << std::endl << bfdata.sp.get()  << std::endl;
    }
    if (bfdata.ex != boost::none)
    {
       os << "ex:" << std::endl << bfdata.ex.get()  << std::endl;
    }
    os << "orders:" << std::endl << bfdata.orders << std::endl;
    os << "matches:" << std::endl << bfdata.matches << std::endl;
    return os;
}

// The dynamic data in a market
// Defined in: SportsAPING.xml
class MarketBook : public BetfairData
{
public:
   MarketBook(
      utility::string_t _marketId, 
      bool _isMarketDataDelayed) :
      market_id(_marketId),
      is_market_data_delayed(_isMarketDataDelayed){};
   
   // CTOR from json
   MarketBook(const web::json::value& jsonVal) : market_id(from_json<utility::string_t>(jsonVal.at(U("marketId")))), is_market_data_delayed(from_json<bool>(jsonVal.at(U("isMarketDataDelayed"))))
   {
      if (jsonVal.has_field(U("status")))
      {
         status = from_json<utility::string_t>(jsonVal.at(U("status")));
      }
      if (jsonVal.has_field(U("betDelay")))
      {
         bet_delay = from_json<int>(jsonVal.at(U("betDelay")));
      }
      if (jsonVal.has_field(U("bspReconciled")))
      {
         bsp_reconciled = from_json<bool>(jsonVal.at(U("bspReconciled")));
      }
      if (jsonVal.has_field(U("complete")))
      {
         complete = from_json<bool>(jsonVal.at(U("complete")));
      }
      if (jsonVal.has_field(U("inplay")))
      {
         inplay = from_json<bool>(jsonVal.at(U("inplay")));
      }
      if (jsonVal.has_field(U("numberOfWinners")))
      {
         number_of_winners = from_json<int>(jsonVal.at(U("numberOfWinners")));
      }
      if (jsonVal.has_field(U("numberOfRunners")))
      {
         number_of_runners = from_json<int>(jsonVal.at(U("numberOfRunners")));
      }
      if (jsonVal.has_field(U("numberOfActiveRunners")))
      {
         number_of_active_runners = from_json<int>(jsonVal.at(U("numberOfActiveRunners")));
      }
      if (jsonVal.has_field(U("lastMatchTime")))
      {
         last_match_time = from_json<DateTime>(jsonVal.at(U("lastMatchTime")));
      }
      if (jsonVal.has_field(U("totalMatched")))
      {
         total_matched = from_json<double>(jsonVal.at(U("totalMatched")));
      }
      if (jsonVal.has_field(U("totalAvailable")))
      {
         total_available = from_json<double>(jsonVal.at(U("totalAvailable")));
      }
      if (jsonVal.has_field(U("crossMatching")))
      {
         cross_matching = from_json<bool>(jsonVal.at(U("crossMatching")));
      }
      if (jsonVal.has_field(U("runnersVoidable")))
      {
         runners_voidable = from_json<bool>(jsonVal.at(U("runnersVoidable")));
      }
      if (jsonVal.has_field(U("version")))
      {
         version = from_json<int>(jsonVal.at(U("version")));
      }
      if (jsonVal.has_field(U("runners")))
      {
         runners = from_json<std::vector<Runner>>(jsonVal.at(U("runners")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(market_id, U("marketId"), ret);
      build_json(is_market_data_delayed, U("isMarketDataDelayed"), ret);
      build_json(status, U("status"), ret);
      build_json(bet_delay, U("betDelay"), ret);
      build_json(bsp_reconciled, U("bspReconciled"), ret);
      build_json(complete, U("complete"), ret);
      build_json(inplay, U("inplay"), ret);
      build_json(number_of_winners, U("numberOfWinners"), ret);
      build_json(number_of_runners, U("numberOfRunners"), ret);
      build_json(number_of_active_runners, U("numberOfActiveRunners"), ret);
      build_json(last_match_time, U("lastMatchTime"), ret);
      build_json(total_matched, U("totalMatched"), ret);
      build_json(total_available, U("totalAvailable"), ret);
      build_json(cross_matching, U("crossMatching"), ret);
      build_json(runners_voidable, U("runnersVoidable"), ret);
      build_json(version, U("version"), ret);
      build_json(runners, U("runners"), ret);

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
   bool get_is_market_data_delayed() const
   {
       return is_market_data_delayed;
   };
   void set_is_market_data_delayed(const bool& val)
   {
       is_market_data_delayed = val;
   };
   boost::optional<utility::string_t> get_status() const
   {
       return status;
   };
   void set_status(const boost::optional<utility::string_t>& val)
   {
       status = val;
   };
   boost::optional<int> get_bet_delay() const
   {
       return bet_delay;
   };
   void set_bet_delay(const boost::optional<int>& val)
   {
       bet_delay = val;
   };
   boost::optional<bool> get_bsp_reconciled() const
   {
       return bsp_reconciled;
   };
   void set_bsp_reconciled(const boost::optional<bool>& val)
   {
       bsp_reconciled = val;
   };
   boost::optional<bool> get_complete() const
   {
       return complete;
   };
   void set_complete(const boost::optional<bool>& val)
   {
       complete = val;
   };
   boost::optional<bool> get_inplay() const
   {
       return inplay;
   };
   void set_inplay(const boost::optional<bool>& val)
   {
       inplay = val;
   };
   boost::optional<int> get_number_of_winners() const
   {
       return number_of_winners;
   };
   void set_number_of_winners(const boost::optional<int>& val)
   {
       number_of_winners = val;
   };
   boost::optional<int> get_number_of_runners() const
   {
       return number_of_runners;
   };
   void set_number_of_runners(const boost::optional<int>& val)
   {
       number_of_runners = val;
   };
   boost::optional<int> get_number_of_active_runners() const
   {
       return number_of_active_runners;
   };
   void set_number_of_active_runners(const boost::optional<int>& val)
   {
       number_of_active_runners = val;
   };
   boost::optional<DateTime> get_last_match_time() const
   {
       return last_match_time;
   };
   void set_last_match_time(const boost::optional<DateTime>& val)
   {
       last_match_time = val;
   };
   boost::optional<double> get_total_matched() const
   {
       return total_matched;
   };
   void set_total_matched(const boost::optional<double>& val)
   {
       total_matched = val;
   };
   boost::optional<double> get_total_available() const
   {
       return total_available;
   };
   void set_total_available(const boost::optional<double>& val)
   {
       total_available = val;
   };
   boost::optional<bool> get_cross_matching() const
   {
       return cross_matching;
   };
   void set_cross_matching(const boost::optional<bool>& val)
   {
       cross_matching = val;
   };
   boost::optional<bool> get_runners_voidable() const
   {
       return runners_voidable;
   };
   void set_runners_voidable(const boost::optional<bool>& val)
   {
       runners_voidable = val;
   };
   boost::optional<int> get_version() const
   {
       return version;
   };
   void set_version(const boost::optional<int>& val)
   {
       version = val;
   };
   std::vector<Runner> get_runners() const
   {
       return runners;
   };
   void set_runners(const std::vector<Runner>& val)
   {
       runners = val;
   };

private:
   utility::string_t market_id;
   bool is_market_data_delayed;
   boost::optional<utility::string_t> status;
   boost::optional<int> bet_delay;
   boost::optional<bool> bsp_reconciled;
   boost::optional<bool> complete;
   boost::optional<bool> inplay;
   boost::optional<int> number_of_winners;
   boost::optional<int> number_of_runners;
   boost::optional<int> number_of_active_runners;
   boost::optional<DateTime> last_match_time;
   boost::optional<double> total_matched;
   boost::optional<double> total_available;
   boost::optional<bool> cross_matching;
   boost::optional<bool> runners_voidable;
   boost::optional<int> version;
   std::vector<Runner> runners;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketBook& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketBook& bfdata)
{
    os << "marketId:" << std::endl << bfdata.market_id << std::endl;
    os << "isMarketDataDelayed:" << std::endl << bfdata.is_market_data_delayed << std::endl;
    if (bfdata.status != boost::none)
    {
       os << "status:" << std::endl << bfdata.status.get()  << std::endl;
    }
    if (bfdata.bet_delay != boost::none)
    {
       os << "bet_delay:" << std::endl << bfdata.bet_delay.get()  << std::endl;
    }
    if (bfdata.bsp_reconciled != boost::none)
    {
       os << "bsp_reconciled:" << std::endl << bfdata.bsp_reconciled.get()  << std::endl;
    }
    if (bfdata.complete != boost::none)
    {
       os << "complete:" << std::endl << bfdata.complete.get()  << std::endl;
    }
    if (bfdata.inplay != boost::none)
    {
       os << "inplay:" << std::endl << bfdata.inplay.get()  << std::endl;
    }
    if (bfdata.number_of_winners != boost::none)
    {
       os << "number_of_winners:" << std::endl << bfdata.number_of_winners.get()  << std::endl;
    }
    if (bfdata.number_of_runners != boost::none)
    {
       os << "number_of_runners:" << std::endl << bfdata.number_of_runners.get()  << std::endl;
    }
    if (bfdata.number_of_active_runners != boost::none)
    {
       os << "number_of_active_runners:" << std::endl << bfdata.number_of_active_runners.get()  << std::endl;
    }
    if (bfdata.last_match_time != boost::none)
    {
       os << "last_match_time:" << std::endl << bfdata.last_match_time.get()  << std::endl;
    }
    if (bfdata.total_matched != boost::none)
    {
       os << "total_matched:" << std::endl << bfdata.total_matched.get()  << std::endl;
    }
    if (bfdata.total_available != boost::none)
    {
       os << "total_available:" << std::endl << bfdata.total_available.get()  << std::endl;
    }
    if (bfdata.cross_matching != boost::none)
    {
       os << "cross_matching:" << std::endl << bfdata.cross_matching.get()  << std::endl;
    }
    if (bfdata.runners_voidable != boost::none)
    {
       os << "runners_voidable:" << std::endl << bfdata.runners_voidable.get()  << std::endl;
    }
    if (bfdata.version != boost::none)
    {
       os << "version:" << std::endl << bfdata.version.get()  << std::endl;
    }
    os << "runners:" << std::endl << bfdata.runners << std::endl;
    return os;
}

// Event Result
// Defined in: SportsAPING.xml
class EventResult : public BetfairData
{
public:
   EventResult() = default;
   
   // CTOR from json
   EventResult(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("event")))
      {
         event = from_json<Event>(jsonVal.at(U("event")));
      }
      if (jsonVal.has_field(U("marketCount")))
      {
         market_count = from_json<int>(jsonVal.at(U("marketCount")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(event, U("event"), ret);
      build_json(market_count, U("marketCount"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<Event> get_event() const
   {
       return event;
   };
   void set_event(const boost::optional<Event>& val)
   {
       event = val;
   };
   boost::optional<int> get_market_count() const
   {
       return market_count;
   };
   void set_market_count(const boost::optional<int>& val)
   {
       market_count = val;
   };

private:
   boost::optional<Event> event;
   boost::optional<int> market_count;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const EventResult& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const EventResult& bfdata)
{
    if (bfdata.event != boost::none)
    {
       os << "event:" << std::endl << bfdata.event.get()  << std::endl;
    }
    if (bfdata.market_count != boost::none)
    {
       os << "market_count:" << std::endl << bfdata.market_count.get()  << std::endl;
    }
    return os;
}

// Competition Result
// Defined in: SportsAPING.xml
class CompetitionResult : public BetfairData
{
public:
   CompetitionResult() = default;
   
   // CTOR from json
   CompetitionResult(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("competition")))
      {
         competition = from_json<Competition>(jsonVal.at(U("competition")));
      }
      if (jsonVal.has_field(U("marketCount")))
      {
         market_count = from_json<int>(jsonVal.at(U("marketCount")));
      }
      if (jsonVal.has_field(U("competitionRegion")))
      {
         competition_region = from_json<utility::string_t>(jsonVal.at(U("competitionRegion")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(competition, U("competition"), ret);
      build_json(market_count, U("marketCount"), ret);
      build_json(competition_region, U("competitionRegion"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<Competition> get_competition() const
   {
       return competition;
   };
   void set_competition(const boost::optional<Competition>& val)
   {
       competition = val;
   };
   boost::optional<int> get_market_count() const
   {
       return market_count;
   };
   void set_market_count(const boost::optional<int>& val)
   {
       market_count = val;
   };
   boost::optional<utility::string_t> get_competition_region() const
   {
       return competition_region;
   };
   void set_competition_region(const boost::optional<utility::string_t>& val)
   {
       competition_region = val;
   };

private:
   boost::optional<Competition> competition;
   boost::optional<int> market_count;
   boost::optional<utility::string_t> competition_region;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CompetitionResult& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CompetitionResult& bfdata)
{
    if (bfdata.competition != boost::none)
    {
       os << "competition:" << std::endl << bfdata.competition.get()  << std::endl;
    }
    if (bfdata.market_count != boost::none)
    {
       os << "market_count:" << std::endl << bfdata.market_count.get()  << std::endl;
    }
    if (bfdata.competition_region != boost::none)
    {
       os << "competition_region:" << std::endl << bfdata.competition_region.get()  << std::endl;
    }
    return os;
}

// EventType Result
// Defined in: SportsAPING.xml
class EventTypeResult : public BetfairData
{
public:
   EventTypeResult() = default;
   
   // CTOR from json
   EventTypeResult(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("eventType")))
      {
         event_type = from_json<EventType>(jsonVal.at(U("eventType")));
      }
      if (jsonVal.has_field(U("marketCount")))
      {
         market_count = from_json<int>(jsonVal.at(U("marketCount")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(event_type, U("eventType"), ret);
      build_json(market_count, U("marketCount"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<EventType> get_event_type() const
   {
       return event_type;
   };
   void set_event_type(const boost::optional<EventType>& val)
   {
       event_type = val;
   };
   boost::optional<int> get_market_count() const
   {
       return market_count;
   };
   void set_market_count(const boost::optional<int>& val)
   {
       market_count = val;
   };

private:
   boost::optional<EventType> event_type;
   boost::optional<int> market_count;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const EventTypeResult& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const EventTypeResult& bfdata)
{
    if (bfdata.event_type != boost::none)
    {
       os << "event_type:" << std::endl << bfdata.event_type.get()  << std::endl;
    }
    if (bfdata.market_count != boost::none)
    {
       os << "market_count:" << std::endl << bfdata.market_count.get()  << std::endl;
    }
    return os;
}

// TimeRange Result
// Defined in: SportsAPING.xml
class TimeRangeResult : public BetfairData
{
public:
   TimeRangeResult() = default;
   
   // CTOR from json
   TimeRangeResult(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("timeRange")))
      {
         time_range = from_json<TimeRange>(jsonVal.at(U("timeRange")));
      }
      if (jsonVal.has_field(U("marketCount")))
      {
         market_count = from_json<int>(jsonVal.at(U("marketCount")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(time_range, U("timeRange"), ret);
      build_json(market_count, U("marketCount"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<TimeRange> get_time_range() const
   {
       return time_range;
   };
   void set_time_range(const boost::optional<TimeRange>& val)
   {
       time_range = val;
   };
   boost::optional<int> get_market_count() const
   {
       return market_count;
   };
   void set_market_count(const boost::optional<int>& val)
   {
       market_count = val;
   };

private:
   boost::optional<TimeRange> time_range;
   boost::optional<int> market_count;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const TimeRangeResult& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const TimeRangeResult& bfdata)
{
    if (bfdata.time_range != boost::none)
    {
       os << "time_range:" << std::endl << bfdata.time_range.get()  << std::endl;
    }
    if (bfdata.market_count != boost::none)
    {
       os << "market_count:" << std::endl << bfdata.market_count.get()  << std::endl;
    }
    return os;
}

// Summary of a current order.
// Defined in: SportsAPING.xml
class CurrentOrderSummary : public BetfairData
{
public:
   CurrentOrderSummary(
      utility::string_t _betId, 
      utility::string_t _marketId, 
      int _selectionId, 
      double _handicap, 
      PriceSize _priceSize, 
      double _bspLiability, 
      utility::string_t _side, 
      utility::string_t _status, 
      utility::string_t _persistenceType, 
      utility::string_t _orderType, 
      DateTime _placedDate, 
      DateTime _matchedDate) :
      bet_id(_betId),
      market_id(_marketId),
      selection_id(_selectionId),
      handicap(_handicap),
      price_size(_priceSize),
      bsp_liability(_bspLiability),
      side(_side),
      status(_status),
      persistence_type(_persistenceType),
      order_type(_orderType),
      placed_date(_placedDate),
      matched_date(_matchedDate){};
   
   // CTOR from json
   CurrentOrderSummary(const web::json::value& jsonVal) : bet_id(from_json<utility::string_t>(jsonVal.at(U("betId")))), market_id(from_json<utility::string_t>(jsonVal.at(U("marketId")))), selection_id(from_json<int>(jsonVal.at(U("selectionId")))), handicap(from_json<double>(jsonVal.at(U("handicap")))), price_size(from_json<PriceSize>(jsonVal.at(U("priceSize")))), bsp_liability(from_json<double>(jsonVal.at(U("bspLiability")))), side(from_json<utility::string_t>(jsonVal.at(U("side")))), status(from_json<utility::string_t>(jsonVal.at(U("status")))), persistence_type(from_json<utility::string_t>(jsonVal.at(U("persistenceType")))), order_type(from_json<utility::string_t>(jsonVal.at(U("orderType")))), placed_date(from_json<DateTime>(jsonVal.at(U("placedDate")))), matched_date(from_json<DateTime>(jsonVal.at(U("matchedDate"))))
   {
      if (jsonVal.has_field(U("averagePriceMatched")))
      {
         average_price_matched = from_json<double>(jsonVal.at(U("averagePriceMatched")));
      }
      if (jsonVal.has_field(U("sizeMatched")))
      {
         size_matched = from_json<double>(jsonVal.at(U("sizeMatched")));
      }
      if (jsonVal.has_field(U("sizeRemaining")))
      {
         size_remaining = from_json<double>(jsonVal.at(U("sizeRemaining")));
      }
      if (jsonVal.has_field(U("sizeLapsed")))
      {
         size_lapsed = from_json<double>(jsonVal.at(U("sizeLapsed")));
      }
      if (jsonVal.has_field(U("sizeCancelled")))
      {
         size_cancelled = from_json<double>(jsonVal.at(U("sizeCancelled")));
      }
      if (jsonVal.has_field(U("sizeVoided")))
      {
         size_voided = from_json<double>(jsonVal.at(U("sizeVoided")));
      }
      if (jsonVal.has_field(U("regulatorAuthCode")))
      {
         regulator_auth_code = from_json<utility::string_t>(jsonVal.at(U("regulatorAuthCode")));
      }
      if (jsonVal.has_field(U("regulatorCode")))
      {
         regulator_code = from_json<utility::string_t>(jsonVal.at(U("regulatorCode")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(bet_id, U("betId"), ret);
      build_json(market_id, U("marketId"), ret);
      build_json(selection_id, U("selectionId"), ret);
      build_json(handicap, U("handicap"), ret);
      build_json(price_size, U("priceSize"), ret);
      build_json(bsp_liability, U("bspLiability"), ret);
      build_json(side, U("side"), ret);
      build_json(status, U("status"), ret);
      build_json(persistence_type, U("persistenceType"), ret);
      build_json(order_type, U("orderType"), ret);
      build_json(placed_date, U("placedDate"), ret);
      build_json(matched_date, U("matchedDate"), ret);
      build_json(average_price_matched, U("averagePriceMatched"), ret);
      build_json(size_matched, U("sizeMatched"), ret);
      build_json(size_remaining, U("sizeRemaining"), ret);
      build_json(size_lapsed, U("sizeLapsed"), ret);
      build_json(size_cancelled, U("sizeCancelled"), ret);
      build_json(size_voided, U("sizeVoided"), ret);
      build_json(regulator_auth_code, U("regulatorAuthCode"), ret);
      build_json(regulator_code, U("regulatorCode"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_bet_id() const
   {
       return bet_id;
   };
   void set_bet_id(const utility::string_t& val)
   {
       bet_id = val;
   };
   utility::string_t get_market_id() const
   {
       return market_id;
   };
   void set_market_id(const utility::string_t& val)
   {
       market_id = val;
   };
   int get_selection_id() const
   {
       return selection_id;
   };
   void set_selection_id(const int& val)
   {
       selection_id = val;
   };
   double get_handicap() const
   {
       return handicap;
   };
   void set_handicap(const double& val)
   {
       handicap = val;
   };
   PriceSize get_price_size() const
   {
       return price_size;
   };
   void set_price_size(const PriceSize& val)
   {
       price_size = val;
   };
   double get_bsp_liability() const
   {
       return bsp_liability;
   };
   void set_bsp_liability(const double& val)
   {
       bsp_liability = val;
   };
   utility::string_t get_side() const
   {
       return side;
   };
   void set_side(const utility::string_t& val)
   {
       side = val;
   };
   utility::string_t get_status() const
   {
       return status;
   };
   void set_status(const utility::string_t& val)
   {
       status = val;
   };
   utility::string_t get_persistence_type() const
   {
       return persistence_type;
   };
   void set_persistence_type(const utility::string_t& val)
   {
       persistence_type = val;
   };
   utility::string_t get_order_type() const
   {
       return order_type;
   };
   void set_order_type(const utility::string_t& val)
   {
       order_type = val;
   };
   DateTime get_placed_date() const
   {
       return placed_date;
   };
   void set_placed_date(const DateTime& val)
   {
       placed_date = val;
   };
   DateTime get_matched_date() const
   {
       return matched_date;
   };
   void set_matched_date(const DateTime& val)
   {
       matched_date = val;
   };
   boost::optional<double> get_average_price_matched() const
   {
       return average_price_matched;
   };
   void set_average_price_matched(const boost::optional<double>& val)
   {
       average_price_matched = val;
   };
   boost::optional<double> get_size_matched() const
   {
       return size_matched;
   };
   void set_size_matched(const boost::optional<double>& val)
   {
       size_matched = val;
   };
   boost::optional<double> get_size_remaining() const
   {
       return size_remaining;
   };
   void set_size_remaining(const boost::optional<double>& val)
   {
       size_remaining = val;
   };
   boost::optional<double> get_size_lapsed() const
   {
       return size_lapsed;
   };
   void set_size_lapsed(const boost::optional<double>& val)
   {
       size_lapsed = val;
   };
   boost::optional<double> get_size_cancelled() const
   {
       return size_cancelled;
   };
   void set_size_cancelled(const boost::optional<double>& val)
   {
       size_cancelled = val;
   };
   boost::optional<double> get_size_voided() const
   {
       return size_voided;
   };
   void set_size_voided(const boost::optional<double>& val)
   {
       size_voided = val;
   };
   boost::optional<utility::string_t> get_regulator_auth_code() const
   {
       return regulator_auth_code;
   };
   void set_regulator_auth_code(const boost::optional<utility::string_t>& val)
   {
       regulator_auth_code = val;
   };
   boost::optional<utility::string_t> get_regulator_code() const
   {
       return regulator_code;
   };
   void set_regulator_code(const boost::optional<utility::string_t>& val)
   {
       regulator_code = val;
   };

private:
   utility::string_t bet_id;
   utility::string_t market_id;
   int selection_id;
   double handicap;
   PriceSize price_size;
   double bsp_liability;
   utility::string_t side;
   utility::string_t status;
   utility::string_t persistence_type;
   utility::string_t order_type;
   DateTime placed_date;
   DateTime matched_date;
   boost::optional<double> average_price_matched;
   boost::optional<double> size_matched;
   boost::optional<double> size_remaining;
   boost::optional<double> size_lapsed;
   boost::optional<double> size_cancelled;
   boost::optional<double> size_voided;
   boost::optional<utility::string_t> regulator_auth_code;
   boost::optional<utility::string_t> regulator_code;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CurrentOrderSummary& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CurrentOrderSummary& bfdata)
{
    os << "betId:" << std::endl << bfdata.bet_id << std::endl;
    os << "marketId:" << std::endl << bfdata.market_id << std::endl;
    os << "selectionId:" << std::endl << bfdata.selection_id << std::endl;
    os << "handicap:" << std::endl << bfdata.handicap << std::endl;
    os << "priceSize:" << std::endl << bfdata.price_size << std::endl;
    os << "bspLiability:" << std::endl << bfdata.bsp_liability << std::endl;
    os << "side:" << std::endl << bfdata.side << std::endl;
    os << "status:" << std::endl << bfdata.status << std::endl;
    os << "persistenceType:" << std::endl << bfdata.persistence_type << std::endl;
    os << "orderType:" << std::endl << bfdata.order_type << std::endl;
    os << "placedDate:" << std::endl << bfdata.placed_date << std::endl;
    os << "matchedDate:" << std::endl << bfdata.matched_date << std::endl;
    if (bfdata.average_price_matched != boost::none)
    {
       os << "average_price_matched:" << std::endl << bfdata.average_price_matched.get()  << std::endl;
    }
    if (bfdata.size_matched != boost::none)
    {
       os << "size_matched:" << std::endl << bfdata.size_matched.get()  << std::endl;
    }
    if (bfdata.size_remaining != boost::none)
    {
       os << "size_remaining:" << std::endl << bfdata.size_remaining.get()  << std::endl;
    }
    if (bfdata.size_lapsed != boost::none)
    {
       os << "size_lapsed:" << std::endl << bfdata.size_lapsed.get()  << std::endl;
    }
    if (bfdata.size_cancelled != boost::none)
    {
       os << "size_cancelled:" << std::endl << bfdata.size_cancelled.get()  << std::endl;
    }
    if (bfdata.size_voided != boost::none)
    {
       os << "size_voided:" << std::endl << bfdata.size_voided.get()  << std::endl;
    }
    if (bfdata.regulator_auth_code != boost::none)
    {
       os << "regulator_auth_code:" << std::endl << bfdata.regulator_auth_code.get()  << std::endl;
    }
    if (bfdata.regulator_code != boost::none)
    {
       os << "regulator_code:" << std::endl << bfdata.regulator_code.get()  << std::endl;
    }
    return os;
}

// A container representing search results.
// Defined in: SportsAPING.xml
class CurrentOrderSummaryReport : public BetfairData
{
public:
   CurrentOrderSummaryReport(
      std::vector<CurrentOrderSummary> _currentOrders, 
      bool _moreAvailable) :
      current_orders(_currentOrders),
      more_available(_moreAvailable){};
   CurrentOrderSummaryReport() = default;
   
   // CTOR from json
   CurrentOrderSummaryReport(const web::json::value& jsonVal) : current_orders(from_json<std::vector<CurrentOrderSummary>>(jsonVal.at(U("currentOrders")))), more_available(from_json<bool>(jsonVal.at(U("moreAvailable"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(current_orders, U("currentOrders"), ret);
      build_json(more_available, U("moreAvailable"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   std::vector<CurrentOrderSummary> get_current_orders() const
   {
       return current_orders;
   };
   void set_current_orders(const std::vector<CurrentOrderSummary>& val)
   {
       current_orders = val;
   };
   bool get_more_available() const
   {
       return more_available;
   };
   void set_more_available(const bool& val)
   {
       more_available = val;
   };

private:
   std::vector<CurrentOrderSummary> current_orders;
   bool more_available;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CurrentOrderSummaryReport& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CurrentOrderSummaryReport& bfdata)
{
    os << "currentOrders:" << std::endl << bfdata.current_orders << std::endl;
    os << "moreAvailable:" << std::endl << bfdata.more_available << std::endl;
    return os;
}

// Summary of a cleared order.
// Defined in: SportsAPING.xml
class ClearedOrderSummary : public BetfairData
{
public:
   ClearedOrderSummary() = default;
   
   // CTOR from json
   ClearedOrderSummary(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("eventTypeId")))
      {
         event_type_id = from_json<utility::string_t>(jsonVal.at(U("eventTypeId")));
      }
      if (jsonVal.has_field(U("eventId")))
      {
         event_id = from_json<utility::string_t>(jsonVal.at(U("eventId")));
      }
      if (jsonVal.has_field(U("marketId")))
      {
         market_id = from_json<utility::string_t>(jsonVal.at(U("marketId")));
      }
      if (jsonVal.has_field(U("selectionId")))
      {
         selection_id = from_json<int>(jsonVal.at(U("selectionId")));
      }
      if (jsonVal.has_field(U("handicap")))
      {
         handicap = from_json<double>(jsonVal.at(U("handicap")));
      }
      if (jsonVal.has_field(U("betId")))
      {
         bet_id = from_json<utility::string_t>(jsonVal.at(U("betId")));
      }
      if (jsonVal.has_field(U("placedDate")))
      {
         placed_date = from_json<DateTime>(jsonVal.at(U("placedDate")));
      }
      if (jsonVal.has_field(U("persistenceType")))
      {
         persistence_type = from_json<utility::string_t>(jsonVal.at(U("persistenceType")));
      }
      if (jsonVal.has_field(U("orderType")))
      {
         order_type = from_json<utility::string_t>(jsonVal.at(U("orderType")));
      }
      if (jsonVal.has_field(U("side")))
      {
         side = from_json<utility::string_t>(jsonVal.at(U("side")));
      }
      if (jsonVal.has_field(U("itemDescription")))
      {
         item_description = from_json<ItemDescription>(jsonVal.at(U("itemDescription")));
      }
      if (jsonVal.has_field(U("betOutcome")))
      {
         bet_outcome = from_json<utility::string_t>(jsonVal.at(U("betOutcome")));
      }
      if (jsonVal.has_field(U("priceRequested")))
      {
         price_requested = from_json<double>(jsonVal.at(U("priceRequested")));
      }
      if (jsonVal.has_field(U("settledDate")))
      {
         settled_date = from_json<DateTime>(jsonVal.at(U("settledDate")));
      }
      if (jsonVal.has_field(U("lastMatchedDate")))
      {
         last_matched_date = from_json<DateTime>(jsonVal.at(U("lastMatchedDate")));
      }
      if (jsonVal.has_field(U("betCount")))
      {
         bet_count = from_json<int>(jsonVal.at(U("betCount")));
      }
      if (jsonVal.has_field(U("commission")))
      {
         commission = from_json<double>(jsonVal.at(U("commission")));
      }
      if (jsonVal.has_field(U("priceMatched")))
      {
         price_matched = from_json<double>(jsonVal.at(U("priceMatched")));
      }
      if (jsonVal.has_field(U("priceReduced")))
      {
         price_reduced = from_json<bool>(jsonVal.at(U("priceReduced")));
      }
      if (jsonVal.has_field(U("sizeSettled")))
      {
         size_settled = from_json<double>(jsonVal.at(U("sizeSettled")));
      }
      if (jsonVal.has_field(U("profit")))
      {
         profit = from_json<double>(jsonVal.at(U("profit")));
      }
      if (jsonVal.has_field(U("sizeCancelled")))
      {
         size_cancelled = from_json<double>(jsonVal.at(U("sizeCancelled")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(event_type_id, U("eventTypeId"), ret);
      build_json(event_id, U("eventId"), ret);
      build_json(market_id, U("marketId"), ret);
      build_json(selection_id, U("selectionId"), ret);
      build_json(handicap, U("handicap"), ret);
      build_json(bet_id, U("betId"), ret);
      build_json(placed_date, U("placedDate"), ret);
      build_json(persistence_type, U("persistenceType"), ret);
      build_json(order_type, U("orderType"), ret);
      build_json(side, U("side"), ret);
      build_json(item_description, U("itemDescription"), ret);
      build_json(bet_outcome, U("betOutcome"), ret);
      build_json(price_requested, U("priceRequested"), ret);
      build_json(settled_date, U("settledDate"), ret);
      build_json(last_matched_date, U("lastMatchedDate"), ret);
      build_json(bet_count, U("betCount"), ret);
      build_json(commission, U("commission"), ret);
      build_json(price_matched, U("priceMatched"), ret);
      build_json(price_reduced, U("priceReduced"), ret);
      build_json(size_settled, U("sizeSettled"), ret);
      build_json(profit, U("profit"), ret);
      build_json(size_cancelled, U("sizeCancelled"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<utility::string_t> get_event_type_id() const
   {
       return event_type_id;
   };
   void set_event_type_id(const boost::optional<utility::string_t>& val)
   {
       event_type_id = val;
   };
   boost::optional<utility::string_t> get_event_id() const
   {
       return event_id;
   };
   void set_event_id(const boost::optional<utility::string_t>& val)
   {
       event_id = val;
   };
   boost::optional<utility::string_t> get_market_id() const
   {
       return market_id;
   };
   void set_market_id(const boost::optional<utility::string_t>& val)
   {
       market_id = val;
   };
   boost::optional<int> get_selection_id() const
   {
       return selection_id;
   };
   void set_selection_id(const boost::optional<int>& val)
   {
       selection_id = val;
   };
   boost::optional<double> get_handicap() const
   {
       return handicap;
   };
   void set_handicap(const boost::optional<double>& val)
   {
       handicap = val;
   };
   boost::optional<utility::string_t> get_bet_id() const
   {
       return bet_id;
   };
   void set_bet_id(const boost::optional<utility::string_t>& val)
   {
       bet_id = val;
   };
   boost::optional<DateTime> get_placed_date() const
   {
       return placed_date;
   };
   void set_placed_date(const boost::optional<DateTime>& val)
   {
       placed_date = val;
   };
   boost::optional<utility::string_t> get_persistence_type() const
   {
       return persistence_type;
   };
   void set_persistence_type(const boost::optional<utility::string_t>& val)
   {
       persistence_type = val;
   };
   boost::optional<utility::string_t> get_order_type() const
   {
       return order_type;
   };
   void set_order_type(const boost::optional<utility::string_t>& val)
   {
       order_type = val;
   };
   boost::optional<utility::string_t> get_side() const
   {
       return side;
   };
   void set_side(const boost::optional<utility::string_t>& val)
   {
       side = val;
   };
   boost::optional<ItemDescription> get_item_description() const
   {
       return item_description;
   };
   void set_item_description(const boost::optional<ItemDescription>& val)
   {
       item_description = val;
   };
   boost::optional<utility::string_t> get_bet_outcome() const
   {
       return bet_outcome;
   };
   void set_bet_outcome(const boost::optional<utility::string_t>& val)
   {
       bet_outcome = val;
   };
   boost::optional<double> get_price_requested() const
   {
       return price_requested;
   };
   void set_price_requested(const boost::optional<double>& val)
   {
       price_requested = val;
   };
   boost::optional<DateTime> get_settled_date() const
   {
       return settled_date;
   };
   void set_settled_date(const boost::optional<DateTime>& val)
   {
       settled_date = val;
   };
   boost::optional<DateTime> get_last_matched_date() const
   {
       return last_matched_date;
   };
   void set_last_matched_date(const boost::optional<DateTime>& val)
   {
       last_matched_date = val;
   };
   boost::optional<int> get_bet_count() const
   {
       return bet_count;
   };
   void set_bet_count(const boost::optional<int>& val)
   {
       bet_count = val;
   };
   boost::optional<double> get_commission() const
   {
       return commission;
   };
   void set_commission(const boost::optional<double>& val)
   {
       commission = val;
   };
   boost::optional<double> get_price_matched() const
   {
       return price_matched;
   };
   void set_price_matched(const boost::optional<double>& val)
   {
       price_matched = val;
   };
   boost::optional<bool> get_price_reduced() const
   {
       return price_reduced;
   };
   void set_price_reduced(const boost::optional<bool>& val)
   {
       price_reduced = val;
   };
   boost::optional<double> get_size_settled() const
   {
       return size_settled;
   };
   void set_size_settled(const boost::optional<double>& val)
   {
       size_settled = val;
   };
   boost::optional<double> get_profit() const
   {
       return profit;
   };
   void set_profit(const boost::optional<double>& val)
   {
       profit = val;
   };
   boost::optional<double> get_size_cancelled() const
   {
       return size_cancelled;
   };
   void set_size_cancelled(const boost::optional<double>& val)
   {
       size_cancelled = val;
   };

private:
   boost::optional<utility::string_t> event_type_id;
   boost::optional<utility::string_t> event_id;
   boost::optional<utility::string_t> market_id;
   boost::optional<int> selection_id;
   boost::optional<double> handicap;
   boost::optional<utility::string_t> bet_id;
   boost::optional<DateTime> placed_date;
   boost::optional<utility::string_t> persistence_type;
   boost::optional<utility::string_t> order_type;
   boost::optional<utility::string_t> side;
   boost::optional<ItemDescription> item_description;
   boost::optional<utility::string_t> bet_outcome;
   boost::optional<double> price_requested;
   boost::optional<DateTime> settled_date;
   boost::optional<DateTime> last_matched_date;
   boost::optional<int> bet_count;
   boost::optional<double> commission;
   boost::optional<double> price_matched;
   boost::optional<bool> price_reduced;
   boost::optional<double> size_settled;
   boost::optional<double> profit;
   boost::optional<double> size_cancelled;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ClearedOrderSummary& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ClearedOrderSummary& bfdata)
{
    if (bfdata.event_type_id != boost::none)
    {
       os << "event_type_id:" << std::endl << bfdata.event_type_id.get()  << std::endl;
    }
    if (bfdata.event_id != boost::none)
    {
       os << "event_id:" << std::endl << bfdata.event_id.get()  << std::endl;
    }
    if (bfdata.market_id != boost::none)
    {
       os << "market_id:" << std::endl << bfdata.market_id.get()  << std::endl;
    }
    if (bfdata.selection_id != boost::none)
    {
       os << "selection_id:" << std::endl << bfdata.selection_id.get()  << std::endl;
    }
    if (bfdata.handicap != boost::none)
    {
       os << "handicap:" << std::endl << bfdata.handicap.get()  << std::endl;
    }
    if (bfdata.bet_id != boost::none)
    {
       os << "bet_id:" << std::endl << bfdata.bet_id.get()  << std::endl;
    }
    if (bfdata.placed_date != boost::none)
    {
       os << "placed_date:" << std::endl << bfdata.placed_date.get()  << std::endl;
    }
    if (bfdata.persistence_type != boost::none)
    {
       os << "persistence_type:" << std::endl << bfdata.persistence_type.get()  << std::endl;
    }
    if (bfdata.order_type != boost::none)
    {
       os << "order_type:" << std::endl << bfdata.order_type.get()  << std::endl;
    }
    if (bfdata.side != boost::none)
    {
       os << "side:" << std::endl << bfdata.side.get()  << std::endl;
    }
    if (bfdata.item_description != boost::none)
    {
       os << "item_description:" << std::endl << bfdata.item_description.get()  << std::endl;
    }
    if (bfdata.bet_outcome != boost::none)
    {
       os << "bet_outcome:" << std::endl << bfdata.bet_outcome.get()  << std::endl;
    }
    if (bfdata.price_requested != boost::none)
    {
       os << "price_requested:" << std::endl << bfdata.price_requested.get()  << std::endl;
    }
    if (bfdata.settled_date != boost::none)
    {
       os << "settled_date:" << std::endl << bfdata.settled_date.get()  << std::endl;
    }
    if (bfdata.last_matched_date != boost::none)
    {
       os << "last_matched_date:" << std::endl << bfdata.last_matched_date.get()  << std::endl;
    }
    if (bfdata.bet_count != boost::none)
    {
       os << "bet_count:" << std::endl << bfdata.bet_count.get()  << std::endl;
    }
    if (bfdata.commission != boost::none)
    {
       os << "commission:" << std::endl << bfdata.commission.get()  << std::endl;
    }
    if (bfdata.price_matched != boost::none)
    {
       os << "price_matched:" << std::endl << bfdata.price_matched.get()  << std::endl;
    }
    if (bfdata.price_reduced != boost::none)
    {
       os << "price_reduced:" << std::endl << bfdata.price_reduced.get()  << std::endl;
    }
    if (bfdata.size_settled != boost::none)
    {
       os << "size_settled:" << std::endl << bfdata.size_settled.get()  << std::endl;
    }
    if (bfdata.profit != boost::none)
    {
       os << "profit:" << std::endl << bfdata.profit.get()  << std::endl;
    }
    if (bfdata.size_cancelled != boost::none)
    {
       os << "size_cancelled:" << std::endl << bfdata.size_cancelled.get()  << std::endl;
    }
    return os;
}

// A container representing search results.
// Defined in: SportsAPING.xml
class ClearedOrderSummaryReport : public BetfairData
{
public:
   ClearedOrderSummaryReport(
      std::vector<ClearedOrderSummary> _clearedOrders, 
      bool _moreAvailable) :
      cleared_orders(_clearedOrders),
      more_available(_moreAvailable){};
   ClearedOrderSummaryReport() = default;
   
   // CTOR from json
   ClearedOrderSummaryReport(const web::json::value& jsonVal) : cleared_orders(from_json<std::vector<ClearedOrderSummary>>(jsonVal.at(U("clearedOrders")))), more_available(from_json<bool>(jsonVal.at(U("moreAvailable"))))
   {
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(cleared_orders, U("clearedOrders"), ret);
      build_json(more_available, U("moreAvailable"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   std::vector<ClearedOrderSummary> get_cleared_orders() const
   {
       return cleared_orders;
   };
   void set_cleared_orders(const std::vector<ClearedOrderSummary>& val)
   {
       cleared_orders = val;
   };
   bool get_more_available() const
   {
       return more_available;
   };
   void set_more_available(const bool& val)
   {
       more_available = val;
   };

private:
   std::vector<ClearedOrderSummary> cleared_orders;
   bool more_available;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ClearedOrderSummaryReport& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ClearedOrderSummaryReport& bfdata)
{
    os << "clearedOrders:" << std::endl << bfdata.cleared_orders << std::endl;
    os << "moreAvailable:" << std::endl << bfdata.more_available << std::endl;
    return os;
}

// Instruction to place a new order
// Defined in: SportsAPING.xml
class PlaceInstruction : public BetfairData
{
public:
   PlaceInstruction(
      utility::string_t _orderType, 
      int _selectionId, 
      utility::string_t _side) :
      order_type(_orderType),
      selection_id(_selectionId),
      side(_side){};
   
   // CTOR from json
   PlaceInstruction(const web::json::value& jsonVal) : order_type(from_json<utility::string_t>(jsonVal.at(U("orderType")))), selection_id(from_json<int>(jsonVal.at(U("selectionId")))), side(from_json<utility::string_t>(jsonVal.at(U("side"))))
   {
      if (jsonVal.has_field(U("handicap")))
      {
         handicap = from_json<double>(jsonVal.at(U("handicap")));
      }
      if (jsonVal.has_field(U("limitOrder")))
      {
         limit_order = from_json<LimitOrder>(jsonVal.at(U("limitOrder")));
      }
      if (jsonVal.has_field(U("limitOnCloseOrder")))
      {
         limit_on_close_order = from_json<LimitOnCloseOrder>(jsonVal.at(U("limitOnCloseOrder")));
      }
      if (jsonVal.has_field(U("marketOnCloseOrder")))
      {
         market_on_close_order = from_json<MarketOnCloseOrder>(jsonVal.at(U("marketOnCloseOrder")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(order_type, U("orderType"), ret);
      build_json(selection_id, U("selectionId"), ret);
      build_json(handicap, U("handicap"), ret);
      build_json(side, U("side"), ret);
      build_json(limit_order, U("limitOrder"), ret);
      build_json(limit_on_close_order, U("limitOnCloseOrder"), ret);
      build_json(market_on_close_order, U("marketOnCloseOrder"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_order_type() const
   {
       return order_type;
   };
   void set_order_type(const utility::string_t& val)
   {
       order_type = val;
   };
   int get_selection_id() const
   {
       return selection_id;
   };
   void set_selection_id(const int& val)
   {
       selection_id = val;
   };
   boost::optional<double> get_handicap() const
   {
       return handicap;
   };
   void set_handicap(const boost::optional<double>& val)
   {
       handicap = val;
   };
   utility::string_t get_side() const
   {
       return side;
   };
   void set_side(const utility::string_t& val)
   {
       side = val;
   };
   boost::optional<LimitOrder> get_limit_order() const
   {
       return limit_order;
   };
   void set_limit_order(const boost::optional<LimitOrder>& val)
   {
       limit_order = val;
   };
   boost::optional<LimitOnCloseOrder> get_limit_on_close_order() const
   {
       return limit_on_close_order;
   };
   void set_limit_on_close_order(const boost::optional<LimitOnCloseOrder>& val)
   {
       limit_on_close_order = val;
   };
   boost::optional<MarketOnCloseOrder> get_market_on_close_order() const
   {
       return market_on_close_order;
   };
   void set_market_on_close_order(const boost::optional<MarketOnCloseOrder>& val)
   {
       market_on_close_order = val;
   };

private:
   utility::string_t order_type;
   int selection_id;
   boost::optional<double> handicap;
   utility::string_t side;
   boost::optional<LimitOrder> limit_order;
   boost::optional<LimitOnCloseOrder> limit_on_close_order;
   boost::optional<MarketOnCloseOrder> market_on_close_order;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const PlaceInstruction& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const PlaceInstruction& bfdata)
{
    os << "orderType:" << std::endl << bfdata.order_type << std::endl;
    os << "selectionId:" << std::endl << bfdata.selection_id << std::endl;
    if (bfdata.handicap != boost::none)
    {
       os << "handicap:" << std::endl << bfdata.handicap.get()  << std::endl;
    }
    os << "side:" << std::endl << bfdata.side << std::endl;
    if (bfdata.limit_order != boost::none)
    {
       os << "limit_order:" << std::endl << bfdata.limit_order.get()  << std::endl;
    }
    if (bfdata.limit_on_close_order != boost::none)
    {
       os << "limit_on_close_order:" << std::endl << bfdata.limit_on_close_order.get()  << std::endl;
    }
    if (bfdata.market_on_close_order != boost::none)
    {
       os << "market_on_close_order:" << std::endl << bfdata.market_on_close_order.get()  << std::endl;
    }
    return os;
}

// Response to a PlaceInstruction
// Defined in: SportsAPING.xml
class PlaceInstructionReport : public BetfairData
{
public:
   PlaceInstructionReport(
      utility::string_t _status, 
      PlaceInstruction _instruction) :
      status(_status),
      instruction(_instruction){};
   PlaceInstructionReport() = default;
   
   // CTOR from json
   PlaceInstructionReport(const web::json::value& jsonVal) : status(from_json<utility::string_t>(jsonVal.at(U("status")))), instruction(from_json<PlaceInstruction>(jsonVal.at(U("instruction"))))
   {
      if (jsonVal.has_field(U("errorCode")))
      {
         error_code = from_json<utility::string_t>(jsonVal.at(U("errorCode")));
      }
      if (jsonVal.has_field(U("betId")))
      {
         bet_id = from_json<utility::string_t>(jsonVal.at(U("betId")));
      }
      if (jsonVal.has_field(U("placedDate")))
      {
         placed_date = from_json<DateTime>(jsonVal.at(U("placedDate")));
      }
      if (jsonVal.has_field(U("averagePriceMatched")))
      {
         average_price_matched = from_json<double>(jsonVal.at(U("averagePriceMatched")));
      }
      if (jsonVal.has_field(U("sizeMatched")))
      {
         size_matched = from_json<double>(jsonVal.at(U("sizeMatched")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(status, U("status"), ret);
      build_json(error_code, U("errorCode"), ret);
      build_json(instruction, U("instruction"), ret);
      build_json(bet_id, U("betId"), ret);
      build_json(placed_date, U("placedDate"), ret);
      build_json(average_price_matched, U("averagePriceMatched"), ret);
      build_json(size_matched, U("sizeMatched"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_status() const
   {
       return status;
   };
   void set_status(const utility::string_t& val)
   {
       status = val;
   };
   boost::optional<utility::string_t> get_error_code() const
   {
       return error_code;
   };
   void set_error_code(const boost::optional<utility::string_t>& val)
   {
       error_code = val;
   };
   PlaceInstruction get_instruction() const
   {
       return instruction;
   };
   void set_instruction(const PlaceInstruction& val)
   {
       instruction = val;
   };
   boost::optional<utility::string_t> get_bet_id() const
   {
       return bet_id;
   };
   void set_bet_id(const boost::optional<utility::string_t>& val)
   {
       bet_id = val;
   };
   boost::optional<DateTime> get_placed_date() const
   {
       return placed_date;
   };
   void set_placed_date(const boost::optional<DateTime>& val)
   {
       placed_date = val;
   };
   boost::optional<double> get_average_price_matched() const
   {
       return average_price_matched;
   };
   void set_average_price_matched(const boost::optional<double>& val)
   {
       average_price_matched = val;
   };
   boost::optional<double> get_size_matched() const
   {
       return size_matched;
   };
   void set_size_matched(const boost::optional<double>& val)
   {
       size_matched = val;
   };

private:
   utility::string_t status;
   boost::optional<utility::string_t> error_code;
   PlaceInstruction instruction;
   boost::optional<utility::string_t> bet_id;
   boost::optional<DateTime> placed_date;
   boost::optional<double> average_price_matched;
   boost::optional<double> size_matched;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const PlaceInstructionReport& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const PlaceInstructionReport& bfdata)
{
    os << "status:" << std::endl << bfdata.status << std::endl;
    if (bfdata.error_code != boost::none)
    {
       os << "error_code:" << std::endl << bfdata.error_code.get()  << std::endl;
    }
    os << "instruction:" << std::endl << bfdata.instruction << std::endl;
    if (bfdata.bet_id != boost::none)
    {
       os << "bet_id:" << std::endl << bfdata.bet_id.get()  << std::endl;
    }
    if (bfdata.placed_date != boost::none)
    {
       os << "placed_date:" << std::endl << bfdata.placed_date.get()  << std::endl;
    }
    if (bfdata.average_price_matched != boost::none)
    {
       os << "average_price_matched:" << std::endl << bfdata.average_price_matched.get()  << std::endl;
    }
    if (bfdata.size_matched != boost::none)
    {
       os << "size_matched:" << std::endl << bfdata.size_matched.get()  << std::endl;
    }
    return os;
}

class PlaceExecutionReport : public BetfairData
{
public:
   PlaceExecutionReport(
      utility::string_t _status) :
      status(_status){};
   PlaceExecutionReport() = default;
   
   // CTOR from json
   PlaceExecutionReport(const web::json::value& jsonVal) : status(from_json<utility::string_t>(jsonVal.at(U("status"))))
   {
      if (jsonVal.has_field(U("customerRef")))
      {
         customer_ref = from_json<utility::string_t>(jsonVal.at(U("customerRef")));
      }
      if (jsonVal.has_field(U("errorCode")))
      {
         error_code = from_json<utility::string_t>(jsonVal.at(U("errorCode")));
      }
      if (jsonVal.has_field(U("marketId")))
      {
         market_id = from_json<utility::string_t>(jsonVal.at(U("marketId")));
      }
      if (jsonVal.has_field(U("instructionReports")))
      {
         instruction_reports = from_json<std::vector<PlaceInstructionReport>>(jsonVal.at(U("instructionReports")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(customer_ref, U("customerRef"), ret);
      build_json(status, U("status"), ret);
      build_json(error_code, U("errorCode"), ret);
      build_json(market_id, U("marketId"), ret);
      build_json(instruction_reports, U("instructionReports"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<utility::string_t> get_customer_ref() const
   {
       return customer_ref;
   };
   void set_customer_ref(const boost::optional<utility::string_t>& val)
   {
       customer_ref = val;
   };
   utility::string_t get_status() const
   {
       return status;
   };
   void set_status(const utility::string_t& val)
   {
       status = val;
   };
   boost::optional<utility::string_t> get_error_code() const
   {
       return error_code;
   };
   void set_error_code(const boost::optional<utility::string_t>& val)
   {
       error_code = val;
   };
   boost::optional<utility::string_t> get_market_id() const
   {
       return market_id;
   };
   void set_market_id(const boost::optional<utility::string_t>& val)
   {
       market_id = val;
   };
   std::vector<PlaceInstructionReport> get_instruction_reports() const
   {
       return instruction_reports;
   };
   void set_instruction_reports(const std::vector<PlaceInstructionReport>& val)
   {
       instruction_reports = val;
   };

private:
   boost::optional<utility::string_t> customer_ref;
   utility::string_t status;
   boost::optional<utility::string_t> error_code;
   boost::optional<utility::string_t> market_id;
   std::vector<PlaceInstructionReport> instruction_reports;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const PlaceExecutionReport& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const PlaceExecutionReport& bfdata)
{
    if (bfdata.customer_ref != boost::none)
    {
       os << "customer_ref:" << std::endl << bfdata.customer_ref.get()  << std::endl;
    }
    os << "status:" << std::endl << bfdata.status << std::endl;
    if (bfdata.error_code != boost::none)
    {
       os << "error_code:" << std::endl << bfdata.error_code.get()  << std::endl;
    }
    if (bfdata.market_id != boost::none)
    {
       os << "market_id:" << std::endl << bfdata.market_id.get()  << std::endl;
    }
    os << "instructionReports:" << std::endl << bfdata.instruction_reports << std::endl;
    return os;
}

class CancelInstructionReport : public BetfairData
{
public:
   CancelInstructionReport(
      utility::string_t _status, 
      double _sizeCancelled, 
      DateTime _cancelledDate) :
      status(_status),
      size_cancelled(_sizeCancelled),
      cancelled_date(_cancelledDate){};
   CancelInstructionReport() = default;
   
   // CTOR from json
   CancelInstructionReport(const web::json::value& jsonVal) : status(from_json<utility::string_t>(jsonVal.at(U("status")))), size_cancelled(from_json<double>(jsonVal.at(U("sizeCancelled")))), cancelled_date(from_json<DateTime>(jsonVal.at(U("cancelledDate"))))
   {
      if (jsonVal.has_field(U("errorCode")))
      {
         error_code = from_json<utility::string_t>(jsonVal.at(U("errorCode")));
      }
      if (jsonVal.has_field(U("instruction")))
      {
         instruction = from_json<CancelInstruction>(jsonVal.at(U("instruction")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(status, U("status"), ret);
      build_json(error_code, U("errorCode"), ret);
      build_json(instruction, U("instruction"), ret);
      build_json(size_cancelled, U("sizeCancelled"), ret);
      build_json(cancelled_date, U("cancelledDate"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_status() const
   {
       return status;
   };
   void set_status(const utility::string_t& val)
   {
       status = val;
   };
   boost::optional<utility::string_t> get_error_code() const
   {
       return error_code;
   };
   void set_error_code(const boost::optional<utility::string_t>& val)
   {
       error_code = val;
   };
   boost::optional<CancelInstruction> get_instruction() const
   {
       return instruction;
   };
   void set_instruction(const boost::optional<CancelInstruction>& val)
   {
       instruction = val;
   };
   double get_size_cancelled() const
   {
       return size_cancelled;
   };
   void set_size_cancelled(const double& val)
   {
       size_cancelled = val;
   };
   DateTime get_cancelled_date() const
   {
       return cancelled_date;
   };
   void set_cancelled_date(const DateTime& val)
   {
       cancelled_date = val;
   };

private:
   utility::string_t status;
   boost::optional<utility::string_t> error_code;
   boost::optional<CancelInstruction> instruction;
   double size_cancelled;
   DateTime cancelled_date;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CancelInstructionReport& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CancelInstructionReport& bfdata)
{
    os << "status:" << std::endl << bfdata.status << std::endl;
    if (bfdata.error_code != boost::none)
    {
       os << "error_code:" << std::endl << bfdata.error_code.get()  << std::endl;
    }
    if (bfdata.instruction != boost::none)
    {
       os << "instruction:" << std::endl << bfdata.instruction.get()  << std::endl;
    }
    os << "sizeCancelled:" << std::endl << bfdata.size_cancelled << std::endl;
    os << "cancelledDate:" << std::endl << bfdata.cancelled_date << std::endl;
    return os;
}

class CancelExecutionReport : public BetfairData
{
public:
   CancelExecutionReport(
      utility::string_t _status) :
      status(_status){};
   CancelExecutionReport() = default;
   
   // CTOR from json
   CancelExecutionReport(const web::json::value& jsonVal) : status(from_json<utility::string_t>(jsonVal.at(U("status"))))
   {
      if (jsonVal.has_field(U("customerRef")))
      {
         customer_ref = from_json<utility::string_t>(jsonVal.at(U("customerRef")));
      }
      if (jsonVal.has_field(U("errorCode")))
      {
         error_code = from_json<utility::string_t>(jsonVal.at(U("errorCode")));
      }
      if (jsonVal.has_field(U("marketId")))
      {
         market_id = from_json<utility::string_t>(jsonVal.at(U("marketId")));
      }
      if (jsonVal.has_field(U("instructionReports")))
      {
         instruction_reports = from_json<std::vector<CancelInstructionReport>>(jsonVal.at(U("instructionReports")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(customer_ref, U("customerRef"), ret);
      build_json(status, U("status"), ret);
      build_json(error_code, U("errorCode"), ret);
      build_json(market_id, U("marketId"), ret);
      build_json(instruction_reports, U("instructionReports"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<utility::string_t> get_customer_ref() const
   {
       return customer_ref;
   };
   void set_customer_ref(const boost::optional<utility::string_t>& val)
   {
       customer_ref = val;
   };
   utility::string_t get_status() const
   {
       return status;
   };
   void set_status(const utility::string_t& val)
   {
       status = val;
   };
   boost::optional<utility::string_t> get_error_code() const
   {
       return error_code;
   };
   void set_error_code(const boost::optional<utility::string_t>& val)
   {
       error_code = val;
   };
   boost::optional<utility::string_t> get_market_id() const
   {
       return market_id;
   };
   void set_market_id(const boost::optional<utility::string_t>& val)
   {
       market_id = val;
   };
   std::vector<CancelInstructionReport> get_instruction_reports() const
   {
       return instruction_reports;
   };
   void set_instruction_reports(const std::vector<CancelInstructionReport>& val)
   {
       instruction_reports = val;
   };

private:
   boost::optional<utility::string_t> customer_ref;
   utility::string_t status;
   boost::optional<utility::string_t> error_code;
   boost::optional<utility::string_t> market_id;
   std::vector<CancelInstructionReport> instruction_reports;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CancelExecutionReport& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const CancelExecutionReport& bfdata)
{
    if (bfdata.customer_ref != boost::none)
    {
       os << "customer_ref:" << std::endl << bfdata.customer_ref.get()  << std::endl;
    }
    os << "status:" << std::endl << bfdata.status << std::endl;
    if (bfdata.error_code != boost::none)
    {
       os << "error_code:" << std::endl << bfdata.error_code.get()  << std::endl;
    }
    if (bfdata.market_id != boost::none)
    {
       os << "market_id:" << std::endl << bfdata.market_id.get()  << std::endl;
    }
    os << "instructionReports:" << std::endl << bfdata.instruction_reports << std::endl;
    return os;
}

class ReplaceInstructionReport : public BetfairData
{
public:
   ReplaceInstructionReport(
      utility::string_t _status) :
      status(_status){};
   ReplaceInstructionReport() = default;
   
   // CTOR from json
   ReplaceInstructionReport(const web::json::value& jsonVal) : status(from_json<utility::string_t>(jsonVal.at(U("status"))))
   {
      if (jsonVal.has_field(U("errorCode")))
      {
         error_code = from_json<utility::string_t>(jsonVal.at(U("errorCode")));
      }
      if (jsonVal.has_field(U("cancelInstructionReport")))
      {
         cancel_instruction_report = from_json<CancelInstructionReport>(jsonVal.at(U("cancelInstructionReport")));
      }
      if (jsonVal.has_field(U("placeInstructionReport")))
      {
         place_instruction_report = from_json<PlaceInstructionReport>(jsonVal.at(U("placeInstructionReport")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(status, U("status"), ret);
      build_json(error_code, U("errorCode"), ret);
      build_json(cancel_instruction_report, U("cancelInstructionReport"), ret);
      build_json(place_instruction_report, U("placeInstructionReport"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_status() const
   {
       return status;
   };
   void set_status(const utility::string_t& val)
   {
       status = val;
   };
   boost::optional<utility::string_t> get_error_code() const
   {
       return error_code;
   };
   void set_error_code(const boost::optional<utility::string_t>& val)
   {
       error_code = val;
   };
   boost::optional<CancelInstructionReport> get_cancel_instruction_report() const
   {
       return cancel_instruction_report;
   };
   void set_cancel_instruction_report(const boost::optional<CancelInstructionReport>& val)
   {
       cancel_instruction_report = val;
   };
   boost::optional<PlaceInstructionReport> get_place_instruction_report() const
   {
       return place_instruction_report;
   };
   void set_place_instruction_report(const boost::optional<PlaceInstructionReport>& val)
   {
       place_instruction_report = val;
   };

private:
   utility::string_t status;
   boost::optional<utility::string_t> error_code;
   boost::optional<CancelInstructionReport> cancel_instruction_report;
   boost::optional<PlaceInstructionReport> place_instruction_report;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ReplaceInstructionReport& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ReplaceInstructionReport& bfdata)
{
    os << "status:" << std::endl << bfdata.status << std::endl;
    if (bfdata.error_code != boost::none)
    {
       os << "error_code:" << std::endl << bfdata.error_code.get()  << std::endl;
    }
    if (bfdata.cancel_instruction_report != boost::none)
    {
       os << "cancel_instruction_report:" << std::endl << bfdata.cancel_instruction_report.get()  << std::endl;
    }
    if (bfdata.place_instruction_report != boost::none)
    {
       os << "place_instruction_report:" << std::endl << bfdata.place_instruction_report.get()  << std::endl;
    }
    return os;
}

class ReplaceExecutionReport : public BetfairData
{
public:
   ReplaceExecutionReport(
      utility::string_t _status) :
      status(_status){};
   ReplaceExecutionReport() = default;
   
   // CTOR from json
   ReplaceExecutionReport(const web::json::value& jsonVal) : status(from_json<utility::string_t>(jsonVal.at(U("status"))))
   {
      if (jsonVal.has_field(U("customerRef")))
      {
         customer_ref = from_json<utility::string_t>(jsonVal.at(U("customerRef")));
      }
      if (jsonVal.has_field(U("errorCode")))
      {
         error_code = from_json<utility::string_t>(jsonVal.at(U("errorCode")));
      }
      if (jsonVal.has_field(U("marketId")))
      {
         market_id = from_json<utility::string_t>(jsonVal.at(U("marketId")));
      }
      if (jsonVal.has_field(U("instructionReports")))
      {
         instruction_reports = from_json<std::vector<ReplaceInstructionReport>>(jsonVal.at(U("instructionReports")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(customer_ref, U("customerRef"), ret);
      build_json(status, U("status"), ret);
      build_json(error_code, U("errorCode"), ret);
      build_json(market_id, U("marketId"), ret);
      build_json(instruction_reports, U("instructionReports"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<utility::string_t> get_customer_ref() const
   {
       return customer_ref;
   };
   void set_customer_ref(const boost::optional<utility::string_t>& val)
   {
       customer_ref = val;
   };
   utility::string_t get_status() const
   {
       return status;
   };
   void set_status(const utility::string_t& val)
   {
       status = val;
   };
   boost::optional<utility::string_t> get_error_code() const
   {
       return error_code;
   };
   void set_error_code(const boost::optional<utility::string_t>& val)
   {
       error_code = val;
   };
   boost::optional<utility::string_t> get_market_id() const
   {
       return market_id;
   };
   void set_market_id(const boost::optional<utility::string_t>& val)
   {
       market_id = val;
   };
   std::vector<ReplaceInstructionReport> get_instruction_reports() const
   {
       return instruction_reports;
   };
   void set_instruction_reports(const std::vector<ReplaceInstructionReport>& val)
   {
       instruction_reports = val;
   };

private:
   boost::optional<utility::string_t> customer_ref;
   utility::string_t status;
   boost::optional<utility::string_t> error_code;
   boost::optional<utility::string_t> market_id;
   std::vector<ReplaceInstructionReport> instruction_reports;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ReplaceExecutionReport& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const ReplaceExecutionReport& bfdata)
{
    if (bfdata.customer_ref != boost::none)
    {
       os << "customer_ref:" << std::endl << bfdata.customer_ref.get()  << std::endl;
    }
    os << "status:" << std::endl << bfdata.status << std::endl;
    if (bfdata.error_code != boost::none)
    {
       os << "error_code:" << std::endl << bfdata.error_code.get()  << std::endl;
    }
    if (bfdata.market_id != boost::none)
    {
       os << "market_id:" << std::endl << bfdata.market_id.get()  << std::endl;
    }
    os << "instructionReports:" << std::endl << bfdata.instruction_reports << std::endl;
    return os;
}

class UpdateInstructionReport : public BetfairData
{
public:
   UpdateInstructionReport(
      utility::string_t _status, 
      UpdateInstruction _instruction) :
      status(_status),
      instruction(_instruction){};
   UpdateInstructionReport() = default;
   
   // CTOR from json
   UpdateInstructionReport(const web::json::value& jsonVal) : status(from_json<utility::string_t>(jsonVal.at(U("status")))), instruction(from_json<UpdateInstruction>(jsonVal.at(U("instruction"))))
   {
      if (jsonVal.has_field(U("errorCode")))
      {
         error_code = from_json<utility::string_t>(jsonVal.at(U("errorCode")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(status, U("status"), ret);
      build_json(error_code, U("errorCode"), ret);
      build_json(instruction, U("instruction"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   utility::string_t get_status() const
   {
       return status;
   };
   void set_status(const utility::string_t& val)
   {
       status = val;
   };
   boost::optional<utility::string_t> get_error_code() const
   {
       return error_code;
   };
   void set_error_code(const boost::optional<utility::string_t>& val)
   {
       error_code = val;
   };
   UpdateInstruction get_instruction() const
   {
       return instruction;
   };
   void set_instruction(const UpdateInstruction& val)
   {
       instruction = val;
   };

private:
   utility::string_t status;
   boost::optional<utility::string_t> error_code;
   UpdateInstruction instruction;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const UpdateInstructionReport& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const UpdateInstructionReport& bfdata)
{
    os << "status:" << std::endl << bfdata.status << std::endl;
    if (bfdata.error_code != boost::none)
    {
       os << "error_code:" << std::endl << bfdata.error_code.get()  << std::endl;
    }
    os << "instruction:" << std::endl << bfdata.instruction << std::endl;
    return os;
}

class UpdateExecutionReport : public BetfairData
{
public:
   UpdateExecutionReport(
      utility::string_t _status) :
      status(_status){};
   UpdateExecutionReport() = default;
   
   // CTOR from json
   UpdateExecutionReport(const web::json::value& jsonVal) : status(from_json<utility::string_t>(jsonVal.at(U("status"))))
   {
      if (jsonVal.has_field(U("customerRef")))
      {
         customer_ref = from_json<utility::string_t>(jsonVal.at(U("customerRef")));
      }
      if (jsonVal.has_field(U("errorCode")))
      {
         error_code = from_json<utility::string_t>(jsonVal.at(U("errorCode")));
      }
      if (jsonVal.has_field(U("marketId")))
      {
         market_id = from_json<utility::string_t>(jsonVal.at(U("marketId")));
      }
      if (jsonVal.has_field(U("instructionReports")))
      {
         instruction_reports = from_json<std::vector<UpdateInstructionReport>>(jsonVal.at(U("instructionReports")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(customer_ref, U("customerRef"), ret);
      build_json(status, U("status"), ret);
      build_json(error_code, U("errorCode"), ret);
      build_json(market_id, U("marketId"), ret);
      build_json(instruction_reports, U("instructionReports"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   boost::optional<utility::string_t> get_customer_ref() const
   {
       return customer_ref;
   };
   void set_customer_ref(const boost::optional<utility::string_t>& val)
   {
       customer_ref = val;
   };
   utility::string_t get_status() const
   {
       return status;
   };
   void set_status(const utility::string_t& val)
   {
       status = val;
   };
   boost::optional<utility::string_t> get_error_code() const
   {
       return error_code;
   };
   void set_error_code(const boost::optional<utility::string_t>& val)
   {
       error_code = val;
   };
   boost::optional<utility::string_t> get_market_id() const
   {
       return market_id;
   };
   void set_market_id(const boost::optional<utility::string_t>& val)
   {
       market_id = val;
   };
   std::vector<UpdateInstructionReport> get_instruction_reports() const
   {
       return instruction_reports;
   };
   void set_instruction_reports(const std::vector<UpdateInstructionReport>& val)
   {
       instruction_reports = val;
   };

private:
   boost::optional<utility::string_t> customer_ref;
   utility::string_t status;
   boost::optional<utility::string_t> error_code;
   boost::optional<utility::string_t> market_id;
   std::vector<UpdateInstructionReport> instruction_reports;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const UpdateExecutionReport& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const UpdateExecutionReport& bfdata)
{
    if (bfdata.customer_ref != boost::none)
    {
       os << "customer_ref:" << std::endl << bfdata.customer_ref.get()  << std::endl;
    }
    os << "status:" << std::endl << bfdata.status << std::endl;
    if (bfdata.error_code != boost::none)
    {
       os << "error_code:" << std::endl << bfdata.error_code.get()  << std::endl;
    }
    if (bfdata.market_id != boost::none)
    {
       os << "market_id:" << std::endl << bfdata.market_id.get()  << std::endl;
    }
    os << "instructionReports:" << std::endl << bfdata.instruction_reports << std::endl;
    return os;
}

// Selection criteria of the returning price data
// Defined in: SportsAPING.xml
class PriceProjection : public BetfairData
{
public:
   PriceProjection() = default;
   
   // CTOR from json
   PriceProjection(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("priceData")))
      {
         price_data = from_json<std::vector<utility::string_t>>(jsonVal.at(U("priceData")));
      }
      if (jsonVal.has_field(U("exBestOffersOverrides")))
      {
         ex_best_offers_overrides = from_json<ExBestOffersOverrides>(jsonVal.at(U("exBestOffersOverrides")));
      }
      if (jsonVal.has_field(U("virtualise")))
      {
         virtualise = from_json<bool>(jsonVal.at(U("virtualise")));
      }
      if (jsonVal.has_field(U("rolloverStakes")))
      {
         rollover_stakes = from_json<bool>(jsonVal.at(U("rolloverStakes")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(price_data, U("priceData"), ret);
      build_json(ex_best_offers_overrides, U("exBestOffersOverrides"), ret);
      build_json(virtualise, U("virtualise"), ret);
      build_json(rollover_stakes, U("rolloverStakes"), ret);

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
   std::vector<utility::string_t> get_price_data() const
   {
       return price_data;
   };
   void set_price_data(const std::vector<utility::string_t>& val)
   {
       price_data = val;
   };
   boost::optional<ExBestOffersOverrides> get_ex_best_offers_overrides() const
   {
       return ex_best_offers_overrides;
   };
   void set_ex_best_offers_overrides(const boost::optional<ExBestOffersOverrides>& val)
   {
       ex_best_offers_overrides = val;
   };
   boost::optional<bool> get_virtualise() const
   {
       return virtualise;
   };
   void set_virtualise(const boost::optional<bool>& val)
   {
       virtualise = val;
   };
   boost::optional<bool> get_rollover_stakes() const
   {
       return rollover_stakes;
   };
   void set_rollover_stakes(const boost::optional<bool>& val)
   {
       rollover_stakes = val;
   };

private:
   std::vector<utility::string_t> price_data;
   boost::optional<ExBestOffersOverrides> ex_best_offers_overrides;
   boost::optional<bool> virtualise;
   boost::optional<bool> rollover_stakes;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const PriceProjection& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const PriceProjection& bfdata)
{
    os << "priceData:" << std::endl << bfdata.price_data << std::endl;
    if (bfdata.ex_best_offers_overrides != boost::none)
    {
       os << "ex_best_offers_overrides:" << std::endl << bfdata.ex_best_offers_overrides.get()  << std::endl;
    }
    if (bfdata.virtualise != boost::none)
    {
       os << "virtualise:" << std::endl << bfdata.virtualise.get()  << std::endl;
    }
    if (bfdata.rollover_stakes != boost::none)
    {
       os << "rollover_stakes:" << std::endl << bfdata.rollover_stakes.get()  << std::endl;
    }
    return os;
}

// Profit and loss in a market
// Defined in: SportsAPING.xml
class MarketProfitAndLoss : public BetfairData
{
public:
   MarketProfitAndLoss() = default;
   
   // CTOR from json
   MarketProfitAndLoss(const web::json::value& jsonVal)
   {
      if (jsonVal.has_field(U("marketId")))
      {
         market_id = from_json<utility::string_t>(jsonVal.at(U("marketId")));
      }
      if (jsonVal.has_field(U("commissionApplied")))
      {
         commission_applied = from_json<double>(jsonVal.at(U("commissionApplied")));
      }
      if (jsonVal.has_field(U("profitAndLosses")))
      {
         profit_and_losses = from_json<std::vector<RunnerProfitAndLoss>>(jsonVal.at(U("profitAndLosses")));
      }
   };

   web::json::value to_json() const
   {
      web::json::value ret;
      build_json(market_id, U("marketId"), ret);
      build_json(commission_applied, U("commissionApplied"), ret);
      build_json(profit_and_losses, U("profitAndLosses"), ret);

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
   boost::optional<double> get_commission_applied() const
   {
       return commission_applied;
   };
   void set_commission_applied(const boost::optional<double>& val)
   {
       commission_applied = val;
   };
   std::vector<RunnerProfitAndLoss> get_profit_and_losses() const
   {
       return profit_and_losses;
   };
   void set_profit_and_losses(const std::vector<RunnerProfitAndLoss>& val)
   {
       profit_and_losses = val;
   };

private:
   boost::optional<utility::string_t> market_id;
   boost::optional<double> commission_applied;
   std::vector<RunnerProfitAndLoss> profit_and_losses;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketProfitAndLoss& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const MarketProfitAndLoss& bfdata)
{
    if (bfdata.market_id != boost::none)
    {
       os << "market_id:" << std::endl << bfdata.market_id.get()  << std::endl;
    }
    if (bfdata.commission_applied != boost::none)
    {
       os << "commission_applied:" << std::endl << bfdata.commission_applied.get()  << std::endl;
    }
    os << "profitAndLosses:" << std::endl << bfdata.profit_and_losses << std::endl;
    return os;
}

} // betfair_api namespace 