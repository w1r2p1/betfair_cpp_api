# Betfair C++ API:

## THIS IS A WORK IN PROGRESS!!!!

## Intention

The intention is to write a cross platform, asynchronous, strongly typed C++ interface to the Betfair API-NG.
With the interface generated from the [interface definition docs published by Betfair](https://api.developer.betfair.com/services/webapps/docs/display/1smk3cen4v3lu3yomq5qye0ni/Interface+Definition+Documents)

## Dependencies

- [CPPRest](https://github.com/Microsoft/cpprestsdk)
- [Boost, for optional<T>](http://www.boost.org/)

## Current state

This is a work in progress. Currently "working" in Visual Studio 2015 Update 1.

## TODO:
- Get working on other platforms, should be just getting it to build as CPPRest and Boost are cross platform
- Tests
- Tidy up the code generator, hopefully reduce the code that is generated
- Look art performance

 
## Example use:

The API should directly follow the [Betfair API](https://api.developer.betfair.com/services/webapps/docs/display/1smk3cen4v3lu3yomq5qye0ni/Reference+Guide)

```CPP
#include <iostream>
#include "betfair_api.h"

using namespace std;
using namespace betfair_api

int main()
{
    // create the API with your app key
    BetfairAPI api(U("My_Betfair_APP_Key"));

    // login with you betfair username and password
    api.login(U("betfair_username"), U("betfair_password"));

    // get a list of the event types, passing with the API needs
    auto events_task = api.list_event_types(ListEventTypesRequest(MarketFilter()));

    //events is a PPL task so get the result
    auto events = eventsTasks.get();

    for (const auto& evt : events)
    {
        // dump the content to stdout
        ucout << evt << endl;
    }
}

```