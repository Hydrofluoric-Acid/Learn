#include ".\md5.h"

std::string Binary_conversion(int n) {
    if (n > 264) {
        n %= 264;
    }
    std::bitset<10> bit(n);
    std::string res = bit.to_string();
    std::stringstream ss;
    ss << std::setw(64) << std::setfill('0') << res;
    std::string formattedString = ss.str();
    return formattedString;
}

void Process_str(std::string str) {
    std::string s = "";
}

std::string md5(int n) {
    return Binary_conversion(n);
}