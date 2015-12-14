
//*********************************************************
// Auto generated interface operations classs do not edit
// Data time generated 2015-12-14 15:58:18.570816
//*********************************************************
#pragma once
#include "../include/betfair_api_base.h"
#include "betfair_api_types.h"
#include "betfair_api_req_resp.h"
#include "betfair_api_simple_types.h"

namespace betfair_api
{
class BetfairAPI : public BetfairAPIBase
{
public:
   BetfairAPI(const utility::string_t& appid) : BetfairAPIBase(appid) {}; 
   // Create 2 application keys for given user; one active and the other delayed
   // Defined in: AccountAPING.xml
   pplx::task<DeveloperApp> create_developer_app_keys(const CreateDeveloperAppKeysRequest& request, BetfairExchangeEnum exchange = InternationalExchange)
   {
      return do_request<DeveloperApp, CreateDeveloperAppKeysRequest>(request, U("createDeveloperAppKeys/"), ACCOUNTS, exchange);
   };

   // Get all application keys owned by the given developer/vendor
   // Defined in: AccountAPING.xml
   pplx::task<DeveloperApp> get_developer_app_keys(BetfairExchangeEnum exchange = InternationalExchange)
   {
     return do_request<DeveloperApp>(U("getDeveloperAppKeys/"), ACCOUNTS, exchange);
   };

   // Get available to bet amount.
   // Defined in: AccountAPING.xml
   pplx::task<AccountFundsResponse> get_account_funds(const GetAccountFundsRequest& request, BetfairExchangeEnum exchange = InternationalExchange)
   {
      return do_request<AccountFundsResponse, GetAccountFundsRequest>(request, U("getAccountFunds/"), ACCOUNTS, exchange);
   };

   // Transfer funds between wallets
   // Defined in: AccountAPING.xml
   pplx::task<TransferResponse> transfer_funds(const TransferFundsRequest& request, BetfairExchangeEnum exchange = InternationalExchange)
   {
      return do_request<TransferResponse, TransferFundsRequest>(request, U("transferFunds/"), ACCOUNTS, exchange);
   };

   // Get Account details.
   // Defined in: AccountAPING.xml
   pplx::task<AccountDetailsResponse> get_account_details(BetfairExchangeEnum exchange = InternationalExchange)
   {
     return do_request<AccountDetailsResponse>(U("getAccountDetails/"), ACCOUNTS, exchange);
   };

   // Get vendor client id for customer account.
   // Defined in: AccountAPING.xml
   pplx::task<utility::string_t> get_vendor_client_id(BetfairExchangeEnum exchange = InternationalExchange)
   {
     return do_request<utility::string_t>(U("getVendorClientId/"), ACCOUNTS, exchange);
   };

   // Returns the newly generate subscription token
   // Defined in: AccountAPING.xml
   pplx::task<utility::string_t> get_application_subscription_token(const GetApplicationSubscriptionTokenRequest& request, BetfairExchangeEnum exchange = InternationalExchange)
   {
      return do_request<utility::string_t, GetApplicationSubscriptionTokenRequest>(request, U("getApplicationSubscriptionToken/"), ACCOUNTS, exchange);
   };

   // Activate the subscription token for the customer
   // Defined in: AccountAPING.xml
   pplx::task<utility::string_t> activate_application_subscription(const ActivateApplicationSubscriptionRequest& request, BetfairExchangeEnum exchange = InternationalExchange)
   {
      return do_request<utility::string_t, ActivateApplicationSubscriptionRequest>(request, U("activateApplicationSubscription/"), ACCOUNTS, exchange);
   };

   // Cancel application subscription
   // Defined in: AccountAPING.xml
   pplx::task<utility::string_t> cancel_application_subscription(const CancelApplicationSubscriptionRequest& request, BetfairExchangeEnum exchange = InternationalExchange)
   {
      return do_request<utility::string_t, CancelApplicationSubscriptionRequest>(request, U("cancelApplicationSubscription/"), ACCOUNTS, exchange);
   };

   // Update an application subscription with a new expiry date
   // Defined in: AccountAPING.xml
   pplx::task<utility::string_t> update_application_subscription(const UpdateApplicationSubscriptionRequest& request, BetfairExchangeEnum exchange = InternationalExchange)
   {
      return do_request<utility::string_t, UpdateApplicationSubscriptionRequest>(request, U("updateApplicationSubscription/"), ACCOUNTS, exchange);
   };

   // List of subscription tokens for an application
   // Defined in: AccountAPING.xml
   pplx::task<std::vector<ApplicationSubscription>> list_application_subscription_tokens(const ListApplicationSubscriptionTokensRequest& request, BetfairExchangeEnum exchange = InternationalExchange) 
   {
      return do_request<std::vector<ApplicationSubscription>, ListApplicationSubscriptionTokensRequest>(request, U("listApplicationSubscriptionTokens/"), ACCOUNTS, exchange);
   };

   // List of subscription tokens associated with the account
   // Defined in: AccountAPING.xml
   pplx::task<std::vector<AccountSubscription>> list_account_subscription_tokens(BetfairExchangeEnum exchange = InternationalExchange)
   {
      return do_request<std::vector<AccountSubscription>>(U("listAccountSubscriptionTokens/"), ACCOUNTS, exchange);
   };

   // Identify all subscriptions, regardless of status, for a single client for a
   // single application key. The operation may be called by either the application
   // key owner or a client.
   // Defined in: AccountAPING.xml
   pplx::task<SubscriptionHistory> get_application_subscription_history(const GetApplicationSubscriptionHistoryRequest& request, BetfairExchangeEnum exchange = InternationalExchange)
   {
      return do_request<SubscriptionHistory, GetApplicationSubscriptionHistoryRequest>(request, U("getApplicationSubscriptionHistory/"), ACCOUNTS, exchange);
   };

   // Get account statement
   // Defined in: AccountAPING.xml
   pplx::task<AccountStatementReport> get_account_statement(const GetAccountStatementRequest& request, BetfairExchangeEnum exchange = InternationalExchange)
   {
      return do_request<AccountStatementReport, GetAccountStatementRequest>(request, U("getAccountStatement/"), ACCOUNTS, exchange);
   };

   // Returns a list of currency rates based on given currency
   // Defined in: AccountAPING.xml
   pplx::task<std::vector<CurrencyRate>> list_currency_rates(const ListCurrencyRatesRequest& request, BetfairExchangeEnum exchange = InternationalExchange) 
   {
      return do_request<std::vector<CurrencyRate>, ListCurrencyRatesRequest>(request, U("listCurrencyRates/"), ACCOUNTS, exchange);
   };

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
   pplx::task<HeartbeatReport> heartbeat(const HeartbeatRequest& request, BetfairExchangeEnum exchange = InternationalExchange)
   {
      return do_request<HeartbeatReport, HeartbeatRequest>(request, U("heartbeat/"), HEARTBEAT, exchange);
   };

   // Returns a list of Event Types (i.e. Sports) associated with the markets
   // selected by the MarketFilter.
   // Defined in: SportsAPING.xml
   pplx::task<std::vector<EventTypeResult>> list_event_types(const ListEventTypesRequest& request, BetfairExchangeEnum exchange = InternationalExchange) 
   {
      return do_request<std::vector<EventTypeResult>, ListEventTypesRequest>(request, U("listEventTypes/"), SPORTS, exchange);
   };

   // Returns a list of Competitions (i.e., World Cup 2013) associated with the
   // markets selected by the MarketFilter. Currently only Football markets have an
   // associated competition.
   // Defined in: SportsAPING.xml
   pplx::task<std::vector<CompetitionResult>> list_competitions(const ListCompetitionsRequest& request, BetfairExchangeEnum exchange = InternationalExchange) 
   {
      return do_request<std::vector<CompetitionResult>, ListCompetitionsRequest>(request, U("listCompetitions/"), SPORTS, exchange);
   };

   // Returns a list of time ranges in the granularity specified in the request (i.e.
   // 3PM to 4PM, Aug 14th to Aug 15th) associated with the markets selected by the
   // MarketFilter.
   // Defined in: SportsAPING.xml
   pplx::task<std::vector<TimeRangeResult>> list_time_ranges(const ListTimeRangesRequest& request, BetfairExchangeEnum exchange = InternationalExchange) 
   {
      return do_request<std::vector<TimeRangeResult>, ListTimeRangesRequest>(request, U("listTimeRanges/"), SPORTS, exchange);
   };

   // Returns a list of Events (i.e, Reading vs. Man United) associated with the
   // markets selected by the MarketFilter.
   // Defined in: SportsAPING.xml
   pplx::task<std::vector<EventResult>> list_events(const ListEventsRequest& request, BetfairExchangeEnum exchange = InternationalExchange) 
   {
      return do_request<std::vector<EventResult>, ListEventsRequest>(request, U("listEvents/"), SPORTS, exchange);
   };

   // Returns a list of market types (i.e. MATCH_ODDS, NEXT_GOAL) associated with the
   // markets selected by the MarketFilter. The market types are always the same,
   // regardless of locale.
   // Defined in: SportsAPING.xml
   pplx::task<std::vector<MarketTypeResult>> list_market_types(const ListMarketTypesRequest& request, BetfairExchangeEnum exchange = InternationalExchange) 
   {
      return do_request<std::vector<MarketTypeResult>, ListMarketTypesRequest>(request, U("listMarketTypes/"), SPORTS, exchange);
   };

   // Returns a list of Countries associated with the markets selected by the
   // MarketFilter.
   // Defined in: SportsAPING.xml
   pplx::task<std::vector<CountryCodeResult>> list_countries(const ListCountriesRequest& request, BetfairExchangeEnum exchange = InternationalExchange) 
   {
      return do_request<std::vector<CountryCodeResult>, ListCountriesRequest>(request, U("listCountries/"), SPORTS, exchange);
   };

   // Returns a list of Venues (i.e. Cheltenham, Ascot) associated with the markets
   // selected by the MarketFilter. Currently, only Horse Racing markets are
   // associated with a Venue.
   // Defined in: SportsAPING.xml
   pplx::task<std::vector<VenueResult>> list_venues(const ListVenuesRequest& request, BetfairExchangeEnum exchange = InternationalExchange) 
   {
      return do_request<std::vector<VenueResult>, ListVenuesRequest>(request, U("listVenues/"), SPORTS, exchange);
   };

   // Returns a list of information about markets that does not change (or changes
   // very rarely). You use listMarketCatalogue to retrieve the name of the market,
   // the names of selections and other information about markets.
   // Defined in: SportsAPING.xml
   pplx::task<std::vector<MarketCatalogue>> list_market_catalogue(const ListMarketCatalogueRequest& request, BetfairExchangeEnum exchange = InternationalExchange) 
   {
      return do_request<std::vector<MarketCatalogue>, ListMarketCatalogueRequest>(request, U("listMarketCatalogue/"), SPORTS, exchange);
   };

   // Returns a list of dynamic data about markets. Dynamic data includes prices, the
   // status of the market, the status of selections, the traded volume, and the
   // status of any orders you have placed in the market.
   // Defined in: SportsAPING.xml
   pplx::task<std::vector<MarketBook>> list_market_book(const ListMarketBookRequest& request, BetfairExchangeEnum exchange = InternationalExchange) 
   {
      return do_request<std::vector<MarketBook>, ListMarketBookRequest>(request, U("listMarketBook/"), SPORTS, exchange);
   };

   // Returns a list of your current orders. Optionally you can filter and sort your
   // current orders using the various parameters, setting none of the parameters
   // will return all of your current orders, up to a maximum of 1000 bets, ordered
   // BY_BET and sorted EARLIEST_TO_LATEST. To retrieve more than 1000 orders, you
   // need to make use of the fromRecord and recordCount parameters.
   // Defined in: SportsAPING.xml
   pplx::task<std::vector<CurrentOrderSummaryReport>> list_current_orders(const ListCurrentOrdersRequest& request, BetfairExchangeEnum exchange = InternationalExchange) 
   {
      return do_request<std::vector<CurrentOrderSummaryReport>, ListCurrentOrdersRequest>(request, U("listCurrentOrders/"), SPORTS, exchange);
   };

   // Returns a List of bets based on the bet status, ordered by settled date
   // Defined in: SportsAPING.xml
   pplx::task<std::vector<ClearedOrderSummaryReport>> list_cleared_orders(const ListClearedOrdersRequest& request, BetfairExchangeEnum exchange = InternationalExchange) 
   {
      return do_request<std::vector<ClearedOrderSummaryReport>, ListClearedOrdersRequest>(request, U("listClearedOrders/"), SPORTS, exchange);
   };

   // Place new orders into market. LIMIT orders below the minimum bet size are
   // allowed if there is an unmatched bet at the same price in the market. This
   // operation is atomic in that all orders will be placed or none will be placed.
   // Defined in: SportsAPING.xml
   pplx::task<PlaceExecutionReport> place_orders(const PlaceOrdersRequest& request, BetfairExchangeEnum exchange = InternationalExchange)
   {
      return do_request<PlaceExecutionReport, PlaceOrdersRequest>(request, U("placeOrders/"), SPORTS, exchange);
   };

   // Cancel all bets OR cancel all bets on a market OR fully or partially cancel
   // particular orders on a market. Only LIMIT orders an be cancelled or partially
   // cancelled once placed.
   // Defined in: SportsAPING.xml
   pplx::task<CancelExecutionReport> cancel_orders(const CancelOrdersRequest& request, BetfairExchangeEnum exchange = InternationalExchange)
   {
      return do_request<CancelExecutionReport, CancelOrdersRequest>(request, U("cancelOrders/"), SPORTS, exchange);
   };

   // This operation is logically a bulk cancel followed by a bulk place. The cancel
   // is completed first then the new orders are placed. The new orders will be
   // placed atomically in that they will all be placed or none will be placed. In
   // the case where the new orders cannot be placed the cancellations will not be
   // rolled back. See ReplaceInstruction.
   // Defined in: SportsAPING.xml
   pplx::task<ReplaceExecutionReport> replace_orders(const ReplaceOrdersRequest& request, BetfairExchangeEnum exchange = InternationalExchange)
   {
      return do_request<ReplaceExecutionReport, ReplaceOrdersRequest>(request, U("replaceOrders/"), SPORTS, exchange);
   };

   // Update non-exposure changing fields
   // Defined in: SportsAPING.xml
   pplx::task<UpdateExecutionReport> update_orders(const UpdateOrdersRequest& request, BetfairExchangeEnum exchange = InternationalExchange)
   {
      return do_request<UpdateExecutionReport, UpdateOrdersRequest>(request, U("updateOrders/"), SPORTS, exchange);
   };

   // Retrieve profit and loss for a given list of markets. The values are calculated
   // using matched bets and optionally settled bets. Only odds markets are
   // implemented, markets of other types are silently ignored.
   // Defined in: SportsAPING.xml
   pplx::task<std::vector<MarketProfitAndLoss>> list_market_profit_and_loss(const ListMarketProfitAndLossRequest& request, BetfairExchangeEnum exchange = InternationalExchange) 
   {
      return do_request<std::vector<MarketProfitAndLoss>, ListMarketProfitAndLossRequest>(request, U("listMarketProfitAndLoss/"), SPORTS, exchange);
   };

}; 
} // betfair_api namespace 