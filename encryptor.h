#pragma once
#include <string>

namespace Encryption
{
    std::string caesarCipher(const std::string &text, int shift);
    std::string caesarDecipher(const std::string &text, int shift);
}
