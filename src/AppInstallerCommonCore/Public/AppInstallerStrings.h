// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.
#pragma once

#include <string>
#include <string_view>

namespace AppInstaller::Utility
{
    // Converts the given UTF16 string to UTF8
    std::string ConvertToUTF8(std::wstring_view input);

    // Converts the given UTF8 string to UTF16
    std::wstring ConvertToUTF16(std::string_view input);

    // Get the lower case version of the given std::string
    std::string ToLower(const std::string& in);

    // Get the lower case version of the given std::wstring
    std::wstring ToLower(const std::wstring& in);

    // Checks if the input string is empty or whitespace
    bool IsEmptyOrWhitespace(std::wstring_view str);
}