
//********************************************************************
// Auto generated types do not edit
// Data time generated 
//********************************************************************
#pragma once
namespace betfair_api 
{
// Defined in: AccountAPING.xml
class SubscriptionStatuss
{
public:
   static constexpr const utility::char_t* ALL = U("ALL");
   static constexpr const utility::char_t* ACTIVATED = U("ACTIVATED");
   static constexpr const utility::char_t* UNACTIVATED = U("UNACTIVATED");
   static constexpr const utility::char_t* CANCELLED = U("CANCELLED");
   static constexpr const utility::char_t* EXPIRED = U("EXPIRED");
};

// Defined in: AccountAPING.xml
class Statuss
{
public:
   static constexpr const utility::char_t* SUCCESS = U("SUCCESS");
};

// Defined in: AccountAPING.xml
class ItemClasss
{
public:
   static constexpr const utility::char_t* UNKNOWN = U("UNKNOWN");
};

// Defined in: AccountAPING.xml
class Wallets
{
public:
   static constexpr const utility::char_t* UK = U("UK");
   static constexpr const utility::char_t* AUSTRALIAN = U("AUSTRALIAN");
};

// Defined in: AccountAPING.xml
class IncludeItems
{
public:
   static constexpr const utility::char_t* ALL = U("ALL");
   static constexpr const utility::char_t* EXCHANGE = U("EXCHANGE");
   static constexpr const utility::char_t* POKER_ROOM = U("POKER_ROOM");
   static constexpr const utility::char_t* DEPOSITS_WITHDRAWALS = U("DEPOSITS_WITHDRAWALS");
};

// Defined in: HeartbeatAPING.xml
class ActionPerformeds
{
public:
   static constexpr const utility::char_t* NONE = U("NONE");
   static constexpr const utility::char_t* CANCELLATION_REQUEST_SUBMITTED = U("CANCELLATION_REQUEST_SUBMITTED");
   static constexpr const utility::char_t* ALL_BETS_CANCELLED = U("ALL_BETS_CANCELLED");
   static constexpr const utility::char_t* SOME_BETS_NOT_CANCELLED = U("SOME_BETS_NOT_CANCELLED");
   static constexpr const utility::char_t* CANCELLATION_REQUEST_ERROR = U("CANCELLATION_REQUEST_ERROR");
   static constexpr const utility::char_t* CANCELLATION_STATUS_UNKNOWN = U("CANCELLATION_STATUS_UNKNOWN");
};

// Defined in: SportsAPING.xml
class MarketProjections
{
public:
   static constexpr const utility::char_t* COMPETITION = U("COMPETITION");
   static constexpr const utility::char_t* EVENT = U("EVENT");
   static constexpr const utility::char_t* EVENT_TYPE = U("EVENT_TYPE");
   static constexpr const utility::char_t* MARKET_START_TIME = U("MARKET_START_TIME");
   static constexpr const utility::char_t* MARKET_DESCRIPTION = U("MARKET_DESCRIPTION");
   static constexpr const utility::char_t* RUNNER_DESCRIPTION = U("RUNNER_DESCRIPTION");
   static constexpr const utility::char_t* RUNNER_METADATA = U("RUNNER_METADATA");
};

// Defined in: SportsAPING.xml
class PriceDatas
{
public:
   static constexpr const utility::char_t* SP_AVAILABLE = U("SP_AVAILABLE");
   static constexpr const utility::char_t* SP_TRADED = U("SP_TRADED");
   static constexpr const utility::char_t* EX_BEST_OFFERS = U("EX_BEST_OFFERS");
   static constexpr const utility::char_t* EX_ALL_OFFERS = U("EX_ALL_OFFERS");
   static constexpr const utility::char_t* EX_TRADED = U("EX_TRADED");
};

// Defined in: SportsAPING.xml
class MatchProjections
{
public:
   static constexpr const utility::char_t* NO_ROLLUP = U("NO_ROLLUP");
   static constexpr const utility::char_t* ROLLED_UP_BY_PRICE = U("ROLLED_UP_BY_PRICE");
   static constexpr const utility::char_t* ROLLED_UP_BY_AVG_PRICE = U("ROLLED_UP_BY_AVG_PRICE");
};

// Defined in: SportsAPING.xml
class OrderProjections
{
public:
   static constexpr const utility::char_t* ALL = U("ALL");
   static constexpr const utility::char_t* EXECUTABLE = U("EXECUTABLE");
   static constexpr const utility::char_t* EXECUTION_COMPLETE = U("EXECUTION_COMPLETE");
};

// Defined in: SportsAPING.xml
class MarketStatuss
{
public:
   static constexpr const utility::char_t* INACTIVE = U("INACTIVE");
   static constexpr const utility::char_t* OPEN = U("OPEN");
   static constexpr const utility::char_t* SUSPENDED = U("SUSPENDED");
   static constexpr const utility::char_t* CLOSED = U("CLOSED");
};

// Defined in: SportsAPING.xml
class RunnerStatuss
{
public:
   static constexpr const utility::char_t* ACTIVE = U("ACTIVE");
   static constexpr const utility::char_t* WINNER = U("WINNER");
   static constexpr const utility::char_t* LOSER = U("LOSER");
   static constexpr const utility::char_t* REMOVED_VACANT = U("REMOVED_VACANT");
   static constexpr const utility::char_t* REMOVED = U("REMOVED");
};

// Defined in: SportsAPING.xml
class TimeGranularitys
{
public:
   static constexpr const utility::char_t* DAYS = U("DAYS");
   static constexpr const utility::char_t* HOURS = U("HOURS");
   static constexpr const utility::char_t* MINUTES = U("MINUTES");
};















// Defined in: SportsAPING.xml
class Sides
{
public:
   static constexpr const utility::char_t* BACK = U("BACK");
   static constexpr const utility::char_t* LAY = U("LAY");
};

// Defined in: SportsAPING.xml
class OrderStatuss
{
public:
   static constexpr const utility::char_t* EXECUTION_COMPLETE = U("EXECUTION_COMPLETE");
   static constexpr const utility::char_t* EXECUTABLE = U("EXECUTABLE");
};

// Defined in: SportsAPING.xml
class OrderBys
{
public:
   static constexpr const utility::char_t* BY_BET = U("BY_BET");
   static constexpr const utility::char_t* BY_MARKET = U("BY_MARKET");
   static constexpr const utility::char_t* BY_PLACE_TIME = U("BY_PLACE_TIME");
   static constexpr const utility::char_t* BY_MATCH_TIME = U("BY_MATCH_TIME");
   static constexpr const utility::char_t* BY_VOID_TIME = U("BY_VOID_TIME");
   static constexpr const utility::char_t* BY_SETTLED_TIME = U("BY_SETTLED_TIME");
};

// Defined in: SportsAPING.xml
class SortDirs
{
public:
   static constexpr const utility::char_t* EARLIEST_TO_LATEST = U("EARLIEST_TO_LATEST");
   static constexpr const utility::char_t* LATEST_TO_EARLIEST = U("LATEST_TO_EARLIEST");
};

// Defined in: SportsAPING.xml
class OrderTypes
{
public:
   static constexpr const utility::char_t* LIMIT = U("LIMIT");
   static constexpr const utility::char_t* LIMIT_ON_CLOSE = U("LIMIT_ON_CLOSE");
   static constexpr const utility::char_t* MARKET_ON_CLOSE = U("MARKET_ON_CLOSE");
};

// Defined in: SportsAPING.xml
class MarketSorts
{
public:
   static constexpr const utility::char_t* MINIMUM_TRADED = U("MINIMUM_TRADED");
   static constexpr const utility::char_t* MAXIMUM_TRADED = U("MAXIMUM_TRADED");
   static constexpr const utility::char_t* MINIMUM_AVAILABLE = U("MINIMUM_AVAILABLE");
   static constexpr const utility::char_t* MAXIMUM_AVAILABLE = U("MAXIMUM_AVAILABLE");
   static constexpr const utility::char_t* FIRST_TO_START = U("FIRST_TO_START");
   static constexpr const utility::char_t* LAST_TO_START = U("LAST_TO_START");
};

// Defined in: SportsAPING.xml
class MarketBettingTypes
{
public:
   static constexpr const utility::char_t* ODDS = U("ODDS");
   static constexpr const utility::char_t* LINE = U("LINE");
   static constexpr const utility::char_t* RANGE = U("RANGE");
   static constexpr const utility::char_t* ASIAN_HANDICAP_DOUBLE_LINE = U("ASIAN_HANDICAP_DOUBLE_LINE");
   static constexpr const utility::char_t* ASIAN_HANDICAP_SINGLE_LINE = U("ASIAN_HANDICAP_SINGLE_LINE");
   static constexpr const utility::char_t* FIXED_ODDS = U("FIXED_ODDS");
};

// Defined in: SportsAPING.xml
class ExecutionReportStatuss
{
public:
   static constexpr const utility::char_t* SUCCESS = U("SUCCESS");
   static constexpr const utility::char_t* FAILURE = U("FAILURE");
   static constexpr const utility::char_t* PROCESSED_WITH_ERRORS = U("PROCESSED_WITH_ERRORS");
   static constexpr const utility::char_t* TIMEOUT = U("TIMEOUT");
};

// Defined in: SportsAPING.xml
class ExecutionReportErrorCodes
{
public:
   static constexpr const utility::char_t* ERROR_IN_MATCHER = U("ERROR_IN_MATCHER");
   static constexpr const utility::char_t* PROCESSED_WITH_ERRORS = U("PROCESSED_WITH_ERRORS");
   static constexpr const utility::char_t* BET_ACTION_ERROR = U("BET_ACTION_ERROR");
   static constexpr const utility::char_t* INVALID_ACCOUNT_STATE = U("INVALID_ACCOUNT_STATE");
   static constexpr const utility::char_t* INVALID_WALLET_STATUS = U("INVALID_WALLET_STATUS");
   static constexpr const utility::char_t* INSUFFICIENT_FUNDS = U("INSUFFICIENT_FUNDS");
   static constexpr const utility::char_t* LOSS_LIMIT_EXCEEDED = U("LOSS_LIMIT_EXCEEDED");
   static constexpr const utility::char_t* MARKET_SUSPENDED = U("MARKET_SUSPENDED");
   static constexpr const utility::char_t* MARKET_NOT_OPEN_FOR_BETTING = U("MARKET_NOT_OPEN_FOR_BETTING");
   static constexpr const utility::char_t* DUPLICATE_TRANSACTION = U("DUPLICATE_TRANSACTION");
   static constexpr const utility::char_t* INVALID_ORDER = U("INVALID_ORDER");
   static constexpr const utility::char_t* INVALID_MARKET_ID = U("INVALID_MARKET_ID");
   static constexpr const utility::char_t* PERMISSION_DENIED = U("PERMISSION_DENIED");
   static constexpr const utility::char_t* DUPLICATE_BETIDS = U("DUPLICATE_BETIDS");
   static constexpr const utility::char_t* NO_ACTION_REQUIRED = U("NO_ACTION_REQUIRED");
   static constexpr const utility::char_t* SERVICE_UNAVAILABLE = U("SERVICE_UNAVAILABLE");
   static constexpr const utility::char_t* REJECTED_BY_REGULATOR = U("REJECTED_BY_REGULATOR");
};

// Defined in: SportsAPING.xml
class PersistenceTypes
{
public:
   static constexpr const utility::char_t* LAPSE = U("LAPSE");
   static constexpr const utility::char_t* PERSIST = U("PERSIST");
   static constexpr const utility::char_t* MARKET_ON_CLOSE = U("MARKET_ON_CLOSE");
};

// Defined in: SportsAPING.xml
class InstructionReportStatuss
{
public:
   static constexpr const utility::char_t* SUCCESS = U("SUCCESS");
   static constexpr const utility::char_t* FAILURE = U("FAILURE");
   static constexpr const utility::char_t* TIMEOUT = U("TIMEOUT");
};

// Defined in: SportsAPING.xml
class InstructionReportErrorCodes
{
public:
   static constexpr const utility::char_t* INVALID_BET_SIZE = U("INVALID_BET_SIZE");
   static constexpr const utility::char_t* INVALID_RUNNER = U("INVALID_RUNNER");
   static constexpr const utility::char_t* BET_TAKEN_OR_LAPSED = U("BET_TAKEN_OR_LAPSED");
   static constexpr const utility::char_t* BET_IN_PROGRESS = U("BET_IN_PROGRESS");
   static constexpr const utility::char_t* RUNNER_REMOVED = U("RUNNER_REMOVED");
   static constexpr const utility::char_t* MARKET_NOT_OPEN_FOR_BETTING = U("MARKET_NOT_OPEN_FOR_BETTING");
   static constexpr const utility::char_t* LOSS_LIMIT_EXCEEDED = U("LOSS_LIMIT_EXCEEDED");
   static constexpr const utility::char_t* MARKET_NOT_OPEN_FOR_BSP_BETTING = U("MARKET_NOT_OPEN_FOR_BSP_BETTING");
   static constexpr const utility::char_t* INVALID_PRICE_EDIT = U("INVALID_PRICE_EDIT");
   static constexpr const utility::char_t* INVALID_ODDS = U("INVALID_ODDS");
   static constexpr const utility::char_t* INSUFFICIENT_FUNDS = U("INSUFFICIENT_FUNDS");
   static constexpr const utility::char_t* INVALID_PERSISTENCE_TYPE = U("INVALID_PERSISTENCE_TYPE");
   static constexpr const utility::char_t* ERROR_IN_MATCHER = U("ERROR_IN_MATCHER");
   static constexpr const utility::char_t* INVALID_BACK_LAY_COMBINATION = U("INVALID_BACK_LAY_COMBINATION");
   static constexpr const utility::char_t* ERROR_IN_ORDER = U("ERROR_IN_ORDER");
   static constexpr const utility::char_t* INVALID_BID_TYPE = U("INVALID_BID_TYPE");
   static constexpr const utility::char_t* INVALID_BET_ID = U("INVALID_BET_ID");
   static constexpr const utility::char_t* CANCELLED_NOT_PLACED = U("CANCELLED_NOT_PLACED");
   static constexpr const utility::char_t* RELATED_ACTION_FAILED = U("RELATED_ACTION_FAILED");
   static constexpr const utility::char_t* NO_ACTION_REQUIRED = U("NO_ACTION_REQUIRED");
};

// Defined in: SportsAPING.xml
class RollupModels
{
public:
   static constexpr const utility::char_t* STAKE = U("STAKE");
   static constexpr const utility::char_t* PAYOUT = U("PAYOUT");
   static constexpr const utility::char_t* MANAGED_LIABILITY = U("MANAGED_LIABILITY");
   static constexpr const utility::char_t* NONE = U("NONE");
};

// Defined in: SportsAPING.xml
class GroupBys
{
public:
   static constexpr const utility::char_t* EVENT_TYPE = U("EVENT_TYPE");
   static constexpr const utility::char_t* EVENT = U("EVENT");
   static constexpr const utility::char_t* MARKET = U("MARKET");
   static constexpr const utility::char_t* RUNNER = U("RUNNER");
   static constexpr const utility::char_t* SIDE = U("SIDE");
   static constexpr const utility::char_t* BET = U("BET");
};

// Defined in: SportsAPING.xml
class BetStatuss
{
public:
   static constexpr const utility::char_t* SETTLED = U("SETTLED");
   static constexpr const utility::char_t* VOIDED = U("VOIDED");
   static constexpr const utility::char_t* LAPSED = U("LAPSED");
   static constexpr const utility::char_t* CANCELLED = U("CANCELLED");
};

} // betfair_api namespace 