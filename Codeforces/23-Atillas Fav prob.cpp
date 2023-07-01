#include <iostream>
#include <string>

int main() {
    int tt;
    std::cin >> tt;
    while (tt-- > 0) {
        int len;
        std::cin >> len;
        std::string s;
        std::cin >> s;
        char n = 'a';
        for (char c : s) {
            if (c > n)
                n = c;
        }
        std::cout << static_cast<int>(n) - 96 << std::endl;
    }
    return 0;
}