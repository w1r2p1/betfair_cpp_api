
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <codecvt>
#include <cpprest\http_client.h>
#include "..\generated\betfair_api.h"
#include "..\include\betfair_cost_helper.h"

using namespace std;
using namespace betfair_api;

utility::string_t _tgetenv(const utility::char_t* env_name)
{
#ifdef _UTF16_STRINGS
//windows
   wchar_t *pValue;
   size_t len;
   _wdupenv_s(&pValue, &len, env_name);
   return pValue;
#else
// not windows
   return getenv(env_name);
#endif
}

int main()
{
   utility::string_t betfair_app_key = _tgetenv(U("APP_KEY"));
   utility::string_t betfair_username = _tgetenv(U("BF_USERNAME"));
   utility::string_t betfair_password = _tgetenv(U("BF_PASSWORD"));

   if (betfair_app_key.empty() || betfair_username.empty() || betfair_password.empty())
   {
      ucout << "APP_KEY, BF_USERNAME and BF_PASSWORD enviroment vars need to be set\n";
      return 1;
   }

   chrono::time_point<chrono::system_clock> start, end;

   MarketFilter fil;
   fil.set_turn_in_play_enabled(true);
   ListEventTypesRequest evtReq(fil);

   ucout << evtReq.to_json().serialize() << endl;

   BetfairAPI x(betfair_app_key);

   try
   {

      auto login = x.login(betfair_username, betfair_password);

   }
   catch (web::http::http_exception& exp)
   {
      ucout << exp.what() << endl;
   }
   catch (...)
   {
      ucout << "exception" << endl;
   }
   //wcout << login << endl;
   
   //auto out = x.Logout();

   //wcout << out << endl;

   //wstring bodytext = L"{\"filter\":{}}";


   //value filter = value::object();

   //auto zzzz = x.listeventTypes(filter).get();
   //wcout << zzzz.serialize() << endl;
   //zzzz = x.listeventTypes_block(filter);

//   auto zzzz = x.listeventTypes_block(evtReq);
   //wcout << zzzz.serialize() << endl;

   //try
   //{
   //   auto vresp = x.GetAccountDetails().get();
   //}
   //catch(const BetfairException& e)
   //{ 
   //   cout << e.what() << endl;
   //}

//   ListEventsRequest evtsReq(fil);

   //ListEventTypesRequest evtTypeReq(fil);

   //auto int_events = x.ListEventTypes(evtTypeReq).get();

   //

   //start = std::chrono::system_clock::now();

   //auto zaaaa = x.ListEvents(evtsReq).get();

   //end = std::chrono::system_clock::now();
   //chrono::duration<double> elapsed_seconds = end - start;
   //cout << elapsed_seconds.count() << "Seconds" << endl;

   //MarketFilter market_cat_fil;

   try
   {
     
      ListEventTypesRequest evtTypeReq(fil);
      
      vector<pplx::task<AccountDetailsResponse>> tasks(0);

      chrono::time_point<chrono::system_clock> made_request;
      chrono::time_point<chrono::system_clock> current;

      made_request = chrono::system_clock::now();
      
      tasks.push_back(x.get_account_details());

      auto zz = tasks[0].get();

      current = chrono::system_clock::now();
      const auto d_actual = chrono::duration_cast<chrono::milliseconds>(current - made_request).count();
      ucout << d_actual << endl;
   }
   catch (web::http::http_exception& exp)
   {
      ucout << exp.what() << endl;
   }
   catch (BetfairException& exp)
   {
      ucout << exp.what() << endl;
   }
   catch (...)
   {
      ucout << "exception" << endl;
   }

//   for (const auto& item : zaaaa)
//   {
//      wcout << item << endl;
//   }
//
   //ListCompetitionsRequest compReq(fil);

   //auto bbbb = x.ListCompetitions(compReq).get();
   //

   

   //auto cccc = x.ListTimeRanges(timeReq).get();

   

   return 0;
}
