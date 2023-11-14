#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    std::cin.ignore();

    while (t-- > 0) {
        std::string S;
        std::getline(std::cin, S);

        std::string A = S;
        std::transform(A.begin(), A.end(), A.begin(), ::toupper); 

        if (A == "YES") {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}


