/*
    Copyright (c) 2005-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/process/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_PROCESS_CURRENTENVIRONMENT_HPP_
#define _ISHIKO_CPP_PROCESS_CURRENTENVIRONMENT_HPP_

#include <map>
#include <string>

namespace Ishiko
{

class CurrentEnvironment
{
public:
    enum class SubstitutionFormat
    {
        DollarAndCurlyBrackets = 0x01,
        DollarAndRoundBrackets = 0x02
    };

public:
    static bool Find(const std::string& name, std::string& value);
    static std::map<std::string, std::string> ToMap();
    static void Set(const std::string& name, const std::string& value);

    static std::string ExpandVariablesInString(const std::string& str, SubstitutionFormat format);
};

}

#endif