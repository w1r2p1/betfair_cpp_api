#pragma once
#include "../generated/betfair_api.h"
// https://api.developer.betfair.com/services/webapps/docs/display/1smk3cen4v3lu3yomq5qye0ni/Market+Data+Request+Limits

using namespace betfair_api;

const int COST_LIMIT = 200;

int Weight(const std::vector<utility::string_t>& marketProjection)
{
   int result = 0;
   for (const auto& item : marketProjection)
   {
      if (item == MarketProjections::RUNNER_DESCRIPTION ||
         item == MarketProjections::RUNNER_METADATA)
      {
         ++result;
      }
   }
   return result;
}

int Weight(const boost::optional<PriceProjection> priceProjection)
{

   // Null(No PriceProjection set)	2
   // SP_AVAILABLE	3
   // SP_TRADED	7
   // EX_BEST_OFFERS	5
   // EX_ALL_OFFERS	17
   // EX_TRADED	17


   int result = 0; // default value
   if (priceProjection != boost::none)
   {

      for (const auto& item : priceProjection->get_price_data())
      {
         if (item == PriceDatas::SP_AVAILABLE)
         {
            result += 3;

         }
         if (item == PriceDatas::SP_TRADED)
         {
            result += 7;
         }
         if (item == PriceDatas::EX_BEST_OFFERS)
         {
            result += 5;
         }
         if (item == PriceDatas::EX_ALL_OFFERS ||
            item == PriceDatas::EX_TRADED)
         {
            result += 7;
         }
      }
   }

   if (result == 0)
   {
      result = 2; // default value to return 
   }

   return result;
}

int Cost(const ListMarketCatalogueRequest& request)
{   
   return Weight(request.get_market_projection()) * static_cast<int>(request.get_filter().get_market_ids().size());
}

int Cost(const ListMarketBookRequest& request)
{
   return Weight(request.get_price_projection()) * static_cast<int>(request.get_market_ids().size());
}

int Cost(const ListMarketProfitAndLossRequest& request)
{
   return 4 * static_cast<int>(request.get_market_ids().size()); //always 4 * market IDs
}


template<typename T>
bool IsTooMuchData(const T& request)
{
   return Cost(request) > COST_LIMIT;
}


//listMarketCatalogue
//listMarketBook
//listMarketProfitandLoss