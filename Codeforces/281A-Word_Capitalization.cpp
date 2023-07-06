#include <iostream>
#include <string>

int main() {
    std::string s;
    std::getline(std::cin, s);

    if (s[0] >= 95) {
        char c = s[0];
        char n = c - 32;
        s[0] = n;
    }

    std::cout << s << std::endl;

    return 0;
}