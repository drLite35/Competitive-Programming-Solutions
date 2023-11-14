#include <iostream>

int main() {
    int input;
    std::cin >> input;

    if (input == 0 || input == 1 || input == 2) {
        std::cout << "NO" << std::endl;
    } else if (input % 2 == 0) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}

