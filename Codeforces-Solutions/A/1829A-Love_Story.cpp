#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    while (t-- > 0) {
        int ans = 0;
        std::string s;
        std::getline(std::cin, s);
        std::string tmp = "codeforces";
        
        for (int i = 0; i < 10; i++) {
            if (s[i] != tmp[i])
                ans++;
        }

        std::cout << ans << std::endl;
    }

    return 0;
}


