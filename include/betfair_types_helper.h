#pragma once
// include for the json generation
#include "json_builder.h"

#include <cpprest\asyncrt_utils.h>

// includes for the std types used
#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>


// used but not defiend in the XML as a base XML type
class DateTime : public BetfairData
{
 
public:
   DateTime() = default;


   // CTOR from json
   DateTime(const web::json::value& jsonVal) : dt(utility::datetime::from_string(jsonVal.as_string(), utility::datetime::ISO_8601))
   {
   };

   // Move CTOR
   DateTime(web::json::value&& jsonVal) : dt(utility::datetime::from_string(jsonVal.as_string(), utility::datetime::ISO_8601))
   {
   };

   web::json::value to_json() const
   {
      return web::json::value(dt.to_string(utility::datetime::ISO_8601));
   };

private:
   utility::datetime dt;
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const DateTime& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const DateTime& bfdata)
{
   os << dt.to_string(utility::datetime::ISO_8601) << std::endl;
   return os;
}
