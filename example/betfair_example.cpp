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
      ucout << "APP_KEY, BF_USERNAME and BF_PASSWORD environment vars need to be set\n";
      return 1;
   }

   chrono::time_point<chrono::system_clock> start, end;

   MarketFilter fil;
   fil.set_turn_in_play_enabled(true);
   ListEventTypesRequest evtReq(fil);

   ucout << evtReq.to_json().serialize() << endl;

   BetfairAPI api(betfair_app_key);

   try
   {

      api.login(betfair_username, betfair_password);

      auto eventsTasks = api.list_event_types(ListEventTypesRequest(MarketFilter()));

      //events is a PPL task so get the result
      auto events = eventsTasks.get();

      for (const auto& evt : events)
      {
         // dump the content to stdout
         ucout << evt << endl;
      }
   }
   catch (web::http::http_exception& exp)
   {
      ucout << exp.what() << endl;
   }
   catch (...)
   {
      ucout << "exception" << endl;
   }
   try
   {
     
      ListEventTypesRequest evtTypeReq(fil);
      
      vector<pplx::task<AccountDetailsResponse>> tasks(0);

      chrono::time_point<chrono::system_clock> made_request;
      chrono::time_point<chrono::system_clock> current;

      made_request = chrono::system_clock::now();
      
      tasks.push_back(api.get_account_details());

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

   return 0;
}
