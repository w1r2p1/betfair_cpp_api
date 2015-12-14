import jinja2
import pprint
from functools import total_ordering
import xml.etree.ElementTree as ET
import re
from pathlib import Path
from datetime import datetime
import os

type_template = """
//********************************************************************
// Auto generated types do not edit
// Data time generated {{timestamp}}
//********************************************************************
#pragma once
#include "../include/betfair_types_helper.h" 
#include "../include/json_builder.h"
#include "betfair_api_types.h"

namespace betfair_api
{
{% for type in types %}
{%if not type.is_void %}
{%if type.description%}
// {{type.description | wordwrap(wrapstring="\n// ")}}
// Defined in: {{type.filename}}
{%endif%}
class {{type.name}} : public BetfairData
{
public:
{%if type.has_mandatory%}
   {{type.name}}({%for parameter in type.parameters if parameter.mandatory %}

      {{parameter.cpp_type}} _{{parameter.name}}{%if not loop.last %}, {%endif%}
{%endfor%}) :
{%for parameter in type.parameters if parameter.mandatory %}
      {{parameter.api_name}}(_{{parameter.name}}){%if not loop.last %},
{%endif%}
{%endfor%}
{};
{%endif%}
{%if not type.has_mandatory%}
   {{type.name}}() = default;
{%elif "Response" in type.name%}
   {{type.name}}() = default;
{%elif "Report" in type.name%}
   {{type.name}}() = default;
{%elif "History" in type.name%}
   {{type.name}}() = default;
{%elif "DeveloperApp" in type.name%}
   {{type.name}}() = default;
{%endif%}
   
   // CTOR from json
   {{type.name}}(const web::json::value& jsonVal){%if type.has_mandatory%} : {%endif%}{%for parameter in type.parameters if parameter.mandatory %}
{{parameter.api_name}}(from_json<{{parameter.cpp_type}}>(jsonVal.at(U("{{parameter.name}}")))){%if not loop.last %}, {%endif%}
{%endfor%}

   {
{%for parameter in type.parameters if not parameter.mandatory%}
      if (jsonVal.has_field(U("{{parameter.name}}")))
      {
         {{parameter.api_name}} = from_json<{{parameter.cpp_type}}>(jsonVal.at(U("{{parameter.name}}")));
      }
{%endfor%}
   };

   web::json::value to_json() const
   {
      web::json::value ret;
{%for parameter in type.parameters%}
      build_json({{parameter.api_name}}, U("{{parameter.name}}"), ret);
{%endfor%}

      if (ret.is_null())
      {
         ret = web::json::value::object();
      }

      return ret;
   };

// Accessors:
{%for parameter in type.parameters%}
{% if parameter.mandatory or 'std::' in parameter.cpp_type %}
   {{parameter.cpp_type}} get_{{parameter.api_name}}() const
   {
       return {{parameter.api_name}};
   };
   void set_{{parameter.api_name}}(const {{parameter.cpp_type}}& val)
   {
       {{parameter.api_name}} = val;
   };
{%else%}
   boost::optional<{{parameter.cpp_type}}> get_{{parameter.api_name}}() const
   {
       return {{parameter.api_name}};
   };
   void set_{{parameter.api_name}}(const boost::optional<{{parameter.cpp_type}}>& val)
   {
       {{parameter.api_name}} = val;
   };
{%endif%}
{%endfor%}

private:
{%for parameter in type.parameters%}
{% if parameter.mandatory or 'std::' in parameter.cpp_type%}
   {{parameter.cpp_type}} {{parameter.api_name}};
{%else%}
   boost::optional<{{parameter.cpp_type}}> {{parameter.api_name}};
{%endif%}
{%endfor%}
   template <typename Char, typename Traits>
   friend std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const {{type.name}}& bfdata);
};

template <typename Char, typename Traits>
inline std::basic_ostream<Char, Traits> & operator<<(std::basic_ostream<Char, Traits>& os, const {{type.name}}& bfdata)
{
{%for parameter in type.parameters%}
{% if parameter.mandatory or 'std::' in parameter.cpp_type%}
    os << "{{parameter.name}}:" << std::endl << bfdata.{{parameter.name}} << std::endl;
{%else%}
    if (bfdata.{{parameter.name}} != boost::none)
    {
       os << "{{parameter.name}}:" << std::endl << bfdata.{{parameter.name}}.get()  << std::endl;
    }
{%endif%}
{%endfor%}
    return os;
}

{%endif%}
{%endfor%}
} // betfair_api namespace """


simple_type_template = """
//********************************************************************
// Auto generated types do not edit
// Data time generated {{timestamp}}
//********************************************************************
#pragma once
namespace betfair_api 
{
{% for simpleType in types %}
{% if simpleType.valid_values|length > 0 %}
// Defined in: {{simpleType.filename}}
class {{simpleType.name}}s
{
public:
{% for value in simpleType.valid_values %}
   static constexpr const utility::char_t* {{value}} = U("{{value}}");
{% endfor %}
};
{% endif %}

{% endfor %}
} // betfair_api namespace """


operation_dec_template = """
//*********************************************************
// Auto generated interface operations classs do not edit
// Data time generated {{timestamp}}
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
{% for opp in opps %}
   // {{opp.description | wordwrap(wrapstring="\n   // ")}}
   // Defined in: {{opp.filename}}
{%if "List" in opp.name %}
{%if not opp.is_void%}
   pplx::task<std::vector<{{opp.simpleResponse}}>> {{opp.request_name}}(const {{opp.name}}& request, BetfairExchangeEnum exchange = InternationalExchange) 
   {
      return do_request<std::vector<{{opp.simpleResponse}}>, {{opp.name}}>(request, U("{{opp.url_name}}"), {{opp.base_url}}, exchange);
   };
{%else%}
   pplx::task<std::vector<{{opp.simpleResponse}}>> {{opp.request_name}}(BetfairExchangeEnum exchange = InternationalExchange)
   {
      return do_request<std::vector<{{opp.simpleResponse}}>>(U("{{opp.url_name}}"), {{opp.base_url}}, exchange);
   };
{%endif%}
{%else%}
{%if not opp.is_void%}
   pplx::task<{{opp.simpleResponse}}> {{opp.request_name}}(const {{opp.name}}& request, BetfairExchangeEnum exchange = InternationalExchange)
   {
      return do_request<{{opp.simpleResponse}}, {{opp.name}}>(request, U("{{opp.url_name}}"), {{opp.base_url}}, exchange);
   };
{%else%}
   pplx::task<{{opp.simpleResponse}}> {{opp.request_name}}(BetfairExchangeEnum exchange = InternationalExchange)
   {
     return do_request<{{opp.simpleResponse}}>(U("{{opp.url_name}}"), {{opp.base_url}}, exchange);
   };
{%endif%}
{%endif%}

{%endfor%}
}; 
} // betfair_api namespace """


exception_template = """
"""

simple_param_names = ['double','string','i32','bool','i64','dateTime', 'string,string'] ##,'','','','']
complex_param_names = []

class BFSimpleType:
    def __init__(self, name, type, valid_values, filename):
        self.name = name
        self.type = type
        self.valid_values = valid_values
        self.filename = filename

@total_ordering
class BFComplexType:
    def __init__(self, name, description, parameters, filename):
        self.name = name
        self.parameters = parameters
        self.description = description
        self.filename = filename

    def contain_param_inner_cpp_type(self, param):
        for item in self.parameters:
            if item.inner_cpp_type == param.inner_cpp_type:
                return True
        return False

    def contain_param_cpp_type(self, param):
        for item in self.parameters:
            if item.cpp_type == param.cpp_type:
                return True
        return False

    @property
    def has_mandatory(self):
        for param in self.parameters:
            if param.mandatory == True:
                return True
        return False

    def __eq__(self, other):
        return self.name == other.name

    def __gt__(self, other):
        return not (self < other)

    def __lt__(self, other):
        ## todo: this is broken need to be fixed need to cal sort trice to work
        self_complex = [x for x in self.parameters if x.inner_type in complex_param_names]

        if len(self_complex) < 1:
            return True
        else:
            for other_param in other.parameters:
                ##print('item name:', self.name, "inner type: ", other_param.inner_type)
                if other_param.inner_type == self.name:
                    #'other' contains us so we need to be before it
                    return True

            return False

    def __repr__(self, **kwargs):
        return self.name

    def __str__(self, **kwargs):
        return self.name


class BFParametersType:

    def __init__(self, name, xml_type, description, mandatory, simple_types, filename):
        self.name = name
        self.xml_type = xml_type
        self.description = description
        self.mandatory = mandatory
        self.simple_types = simple_types
        self.filename = filename

    @property
    def inner_type(self):
        return raw_type(self.xml_type)

    @property
    def cpp_type(self):
        raw_convert = convert_type(self.xml_type)

        result = re.search('<(.*?)>', raw_convert)
        if result:
            inner_type = result.group(0)[1:-1]
        else:
            inner_type = raw_convert

        for simple_type in self.simple_types:
            if inner_type == simple_type.name:
                if not result:
                    return simple_type.type
                else:
                    return raw_convert.replace(inner_type, simple_type.type)

        return raw_convert

    @property
    def inner_cpp_type(self):
        result = re.search('<(.*?)>', self.cpp_type)
        if result:
            return result.group(0)[1:-1]
        else:
            return self.cpp_type
    
    @property
    def inner_xml_type(self):
        result = re.search('\((.*?)\)', self.xml_type)
        if result:
            return result.group(0)[1:-1]
        else:
            return self.xml_type
    
    @property
    def api_name(self):
        s1 = re.sub('(.)([A-Z][a-z]+)', r'\1_\2', self.name)
        return re.sub('([a-z0-9])([A-Z])', r'\1_\2', s1).lower()

    def __repr__(self, **kwargs):
        return self.name

    def __str__(self, **kwargs):
        return self.name


class BFOperationType:

    def __init__(self, name, description, simpleResponse, parameters, filename):
        self._name = name
        self.description = description
        self.simpleResponse = simpleResponse
        self.parameters = parameters
        self.is_Request = True
        self.filename = filename

    @property
    def has_mandatory(self):
         for param in self.parameters:
            if param.mandatory == True:
                return True
         return False
    
    @property
    def is_void(self):
        return len(self.parameters) == 0

    @property
    def request_name(self):
        s1 = re.sub('(.)([A-Z][a-z]+)', r'\1_\2', self._name)
        return re.sub('([a-z0-9])([A-Z])', r'\1_\2', s1).lower()

    @property
    def url_name(self):
        return self._name + '/'
     
    @property
    def name(self):
        return self._name[0].upper() + self._name[1:] + 'Request'

    
    @property
    def base_url(self):
        if  self.filename == 'SportsAPING.xml':
            return "SPORTS"
        elif self.filename == 'HeartbeatAPING.xml':
            return "HEARTBEAT"
        elif self.filename == 'AccountAPING.xml':
            return "ACCOUNTS"
        else:
            return "error!!!"


    def __repr__(self, **kwargs):
        return self.name

    def __str__(self, **kwargs):
        return self.name



type_cnversion_dict = {'string': 'utility::string_t',
                       'i64': 'int',
                       'dateTime': 'DateTime',
                       'i32': 'int',
                       'set(': 'std::vector<',
                       'list(': 'std::vector<',
                       'map(string,string': "std::unordered_map<utility::string_t,utility::string_t"}


def convert_type(xml_type):
    xml_type = xml_type.replace(')','>')
    for k,v in type_cnversion_dict.items():
        if xml_type.startswith(k):
            return xml_type.replace(k,v)

    return xml_type


def raw_type(type, simple_types = None):
    type = type.replace(')','')
    type = type.replace('set(','')
    type = type.replace('list(','')
    type = type.replace('map(','')
    type = type.replace('string','utility::string_t')
    if simple_types:
        for simple_type in simple_types:
            if simple_type.name == type:
                type = simple_type.type
                break

    return type


def read_xml_file(filename):
    tree = ET.parse(filename)
    return tree


def get_simple_types(tree, filename):
    simple_types = []
    for simple_type in tree.findall('simpleType'):
        available_values = []
        valid_values = simple_type.find('validValues')
        if valid_values:
            values = valid_values.findall('value')
            for value in values:
                available_values.append(value.attrib['name'])

        simple_param_names.append(simple_type.attrib['name'])

        simple_types.append(BFSimpleType(simple_type.attrib['name'],
                             convert_type(simple_type.attrib['type']),
                             available_values, filename))


    return simple_types


def get_types(tree, simple_types, filename):
    data_types = []
    for data_type in tree.findall('dataType'):
        available_values = []
        desc = data_type.find('description').text
        if desc is not None:
            desc = ' '.join(desc.split())

        params = []
        has_mandatory = False
        for param in data_type.findall('parameter'):
            param_desc = param.find('description').text
            if param_desc is not None:
                param_desc = ' '.join(param_desc.split())

            if 'mandatory' in param.attrib:
                has_mandatory = True

            param_type = param.attrib['type']

            param_data = BFParametersType(param.attrib['name'],
                                          param_type,
                                          param_desc,
                                          'mandatory' in param.attrib,
                                          simple_types, filename)

            params.append(param_data)

        complex_param_names.append(data_type.attrib['name'])

        data_types.append(BFComplexType(data_type.attrib['name'],
                           desc,
                           params, filename))


    ## put the them in the correct order so top items dont depend on lower ones


    ## sort trice because .... fucked if i know!
    return sorted(sorted(data_types))


def get_operations(tree, simple_types, complex_types, filename):
    operations = []
    for operation_type in tree.findall('operation'):
        opp_desc = operation_type.find('description').text
        if opp_desc is not None:
            opp_desc = ' '.join(opp_desc.split())
        pram = operation_type.find('parameters')

        request = pram.find('request')

        responce = pram.find('simpleResponse')

        responce_type = raw_type(responce.attrib['type'], simple_types)

        req = []
        has_mandatory = False

        for param in request.findall('parameter'):
            name = param.attrib['name']
            type = convert_type(param.attrib['type'])

            mandatory = 'mandatory' in param.attrib
            param_desc = pram.find('description')
            if param_desc is not None:
                param_desc =' '.join(param_desc.text.split())

            if 'mandatory' in param.attrib:
                has_mandatory = True

            req.append(BFParametersType(name, type, param_desc, mandatory, simple_types, filename))
        
        name = operation_type.attrib['name']


        operations.append(BFOperationType(name,
                                            opp_desc,
                                            responce_type,
                                            req, filename))




    return operations

def print_type_info(types):
    for type in types:
        params = type.parameters
        inner_types = []
        for param in params:
            if param.inner_type in complex_param_names:
              inner_types.append(param.inner_type)


        print(type.name,' - ',  inner_types)

def write_to_file(filename, content):
    file = open(filename,'w')
    file.write(content)
    file.close()

def remove_duplicates(values):
    output = []
    seen = set()
    for value in values:
        # If value has not been encountered yet,
        # ... add it to both list and set.
        if value.name not in seen:
            output.append(value)
            seen.add(value.name)
    return output


def main():
    ## xxx: get from url? not sure the URL is consistent between versions!
    fn = os.path.join(os.path.dirname(__file__), 'interface definition documents')
    files_to_read = [os.path.join(fn,x) for x in os.listdir(fn) if x.endswith('.xml')]

    simple_types_list = []
    types = []
    operations = []

    for file in files_to_read:
        # Read XML file
        fileName = Path(file)
        interface_def = read_xml_file(str(fileName))

        simple_types_list.extend(get_simple_types(interface_def, fileName.name))

    # extract simple types
    # create simple types from tempate
    simple_template = jinja2.Template(simple_type_template, trim_blocks=True)

    simpleTypes = simple_template.render(types=simple_types_list)

    generated_dir = os.path.abspath(os.path.join(os.path.dirname(__file__), os.pardir))

    write_to_file(os.path.join(generated_dir,"generated/betfair_api_simple_types.h"), simpleTypes)

    for file in files_to_read:
        # # extract  types
        # # create types from tempate
        fileName = Path(file)
        interface_def = read_xml_file(str(fileName))
        types.extend(get_types(interface_def, simple_types_list, fileName.name))


    types = remove_duplicates(types)

    complex_types_template = jinja2.Template(type_template, trim_blocks=True)


    
    # extract exceptions
    #     create exceptions from tempate
    #
    # extract operations
    #     create operations from template
    for file in files_to_read:
        fileName = Path(file)
        interface_def = read_xml_file(str(fileName))
        
        operations.extend(get_operations(interface_def, simple_types_list, types, fileName.name))

    operation_dec_tem = jinja2.Template(operation_dec_template, trim_blocks=True)

    interface_decl = operation_dec_tem.render(opps=operations, timestamp=datetime.now())

    write_to_file(os.path.join(generated_dir,"generated/betfair_api.h"), interface_decl)

    interface_request_responce = complex_types_template.render(types=operations, is_request=True, timestamp=datetime.now())

    write_to_file(os.path.join(generated_dir,"generated/betfair_api_req_resp.h"), interface_request_responce)

    complex_types = complex_types_template.render(types=types, timestamp=datetime.now())

    write_to_file(os.path.join(generated_dir,"generated/betfair_api_types.h"), complex_types)


if __name__ == "__main__":
    main()
