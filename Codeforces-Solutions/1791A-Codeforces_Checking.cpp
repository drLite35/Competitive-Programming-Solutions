#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    std::cin.ignore();

    while (t-- > 0) {
        std::string s;
        std::getline(std::cin, s);
        
        if (s == "c" || s == "o" || s == "d" || s == "e" || s == "f" || 
            s == "o" || s == "r" || s == "c" || s == "e" || s == "s") {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No" << std::endl;
        }
    }

    return 0;
}


