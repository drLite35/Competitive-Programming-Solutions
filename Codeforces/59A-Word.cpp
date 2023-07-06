#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string s;
    std::getline(std::cin, s);
    int caps = 0, sma = 0;

    for (int i = 0; i < s.length(); i++) {
        if (std::isupper(s[i]))
            caps++;
        else
            sma++;
    }

    if (sma >= caps)
        for (char& c : s)
            c = std::tolower(c);
    else
        for (char& c : s)
            c = std::toupper(c);

    std::cout << s << std::endl;

    return 0;
}