#pragma once

#include <string>
#include <cpprest/json.h>
#include <boost/optional.hpp>

class BetfairData
{
public:
   virtual web::json::value to_json() const = 0;

};

// simple type 
template <class T, typename std::enable_if<std::is_arithmetic<T>::value, bool>::type = nullptr>
inline void build_json(const T& item, const utility::string_t& jsonName, web::json::value& json_builder)
{
   json_builder[jsonName] = web::json::value(item);
}

// string type
template <class T, typename std::enable_if<std::is_same<T,utility::string_t>::value, bool>::type = nullptr>
inline void build_json(const T& s, const utility::string_t& jsonName, web::json::value& json_builder)
{
   if (!s.empty()) // is this correct should we be able to send empty string??
   {
      json_builder[jsonName] = web::json::value(s);
   }
}

// unordered map type
template <class T, typename std::enable_if<std::is_same<T, std::unordered_map<utility::string_t, utility::string_t>>::value, bool>::type = nullptr>
inline void build_json(const T& items, const utility::string_t& jsonName, web::json::value& json_builder)
{
   json_builder[jsonName] = web::json::value();

   for (const auto& item : items)
   {
      json_builder[jsonName][item.first] = web::json::value(item.second);
   }
}

// object with base of BetfairData so has a to json
template <class T, typename std::enable_if<std::is_base_of<BetfairData, T>::value, bool>::type = nullptr>
inline void build_json(const T& item, const utility::string_t& jsonName, web::json::value& json_builder)
{
   json_builder[jsonName] = item.to_json();
}

// array of items that are object with base of BetfairData so has a to json
template <class T, typename std::enable_if<std::is_base_of<BetfairData, T>::value, bool>::type = nullptr>
inline void build_json(const std::vector<T>& items, const utility::string_t& jsonName, web::json::value& json_builder)
{
   if (!items.empty())
   {
      std::vector<web::json::value> ret;
      ret.reserve(items.size());

      for (const auto& item : items)
      {
         ret.push_back(item.to_json());
      }

      json_builder[jsonName] = web::json::value::array(ret);
   }
}

//template <>//, typename std::enable_if<std::is_same<T, std::vector<utility::string_t>>::value, bool>::type = nullptr>
template <class T, typename std::enable_if<std::is_same<T, utility::string_t>::value, bool>::type = nullptr>
inline void build_json(const std::vector<T>& items, const utility::string_t& jsonName, web::json::value& json_builder)
{
   if (!items.empty())
   {
      std::vector<web::json::value> ret;
      ret.reserve(items.size());

      for (const auto& item : items)
      {
         web::json::value json_item(item);
         ret.push_back(json_item);
      }

      json_builder[jsonName] = web::json::value::array(ret);
   }
}



template <class T, typename std::enable_if<std::is_arithmetic<T>::value, bool>::type = nullptr>
inline void build_json(const boost::optional<T>& item, const utility::string_t& jsonName, web::json::value& json_builder)
{
   if (item != boost::none)
   {
      json_builder[jsonName] = web::json::value(*item);
   }
}


template <class T, typename std::enable_if<std::is_same<T,utility::string_t>::value, bool>::type = nullptr>
inline void build_json(const boost::optional<T>& item, const utility::string_t& jsonName, web::json::value& json_builder)
{
   if (item != boost::none)
   {
      json_builder[jsonName] = web::json::value(*item);
   }
}

template <class T, typename std::enable_if<std::is_base_of<BetfairData, T>::value, bool>::type = nullptr>
inline void build_json(const boost::optional<T>& item, const utility::string_t& jsonName, web::json::value& json_builder)
{
   if (item != boost::none)
   {
      json_builder[jsonName] = item->to_json();
   }
}

template <class T, typename std::enable_if<std::is_same<T, int>::value, bool>::type = nullptr>
inline int from_json(const web::json::value& value)
{
   return value.as_integer();
}

template <class T, typename std::enable_if<std::is_same<T, double>::value, bool>::type = nullptr>
inline double from_json(const web::json::value& value)
{
   return value.as_double();
}

template <class T, typename std::enable_if<std::is_same<T, bool>::value, bool>::type = nullptr>
inline bool from_json(const web::json::value& value)
{
   return value.as_bool();
}

template <class T, typename std::enable_if<std::is_same<T, utility::string_t>::value, bool>::type = nullptr>
inline T from_json(const web::json::value& value)
{
   return utility::string_t(value.as_string());
}


template <class T, typename std::enable_if<std::is_base_of<BetfairData, T>::value, bool>::type = nullptr>
inline T from_json(const web::json::value& value)
{
   return T(value);
}


template <typename T>
using is_vector = std::is_same<T, std::vector< typename T::value_type, typename T::allocator_type>>;


template <class T, typename std::enable_if<(is_vector<T>::value) && (std::is_base_of<BetfairData, typename T::value_type>::value), bool>::type = nullptr>
inline T from_json(const web::json::value& value)
{
   T ret;
   for (const auto& item : value.as_array())
   {
      ret.emplace_back(from_json<typename T::value_type>(item));
   }

   return ret;
}

template <class T, typename std::enable_if<std::is_same<std::vector<utility::string_t>, T>::value, bool>::type = nullptr>
inline std::vector<utility::string_t> from_json(const web::json::value& value)
{
   std::vector<utility::string_t> ret;
   for (const auto& item : value.as_array())
   {
      ret.emplace_back(from_json<utility::string_t>(item));
   }

   return ret;
}


template <class T, typename std::enable_if<std::is_same<std::unordered_map<utility::string_t,utility::string_t>, T>::value, bool>::type = nullptr>
inline std::unordered_map<utility::string_t, utility::string_t> from_json(const web::json::value& value)
{
   std::unordered_map<utility::string_t, utility::string_t> ret;
   for (const auto& item : value.as_object())
   {
      ret.insert(std::pair<utility::string_t, utility::string_t>(item.first, item.second.serialize()));
   }

   return ret;
}
