#include "encryptor.h"
#include <cctype> // Include this for isalpha and islower

namespace Encryption
{

    std::string caesarCipher(const std::string &text, int shift)
    {
        std::string result = "";
        for (char c : text)
        {
            if (isalpha(c))
            {
                char base = islower(c) ? 'a' : 'A';
                c = (c - base + shift) % 26 + base;
            }
            result += c;
        }
        return result;
    }

    std::string caesarDecipher(const std::string &text, int shift)
    {
        return caesarCipher(text, 26 - shift % 26);
    }

    // Definitions for other algorithms
}
