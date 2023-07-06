#include <iostream>

int main() {
    int div;
    std::cin >> div;
    double sum = 0;
    double tmp = div;

    while (div-->0) {
        double num;
        std::cin >> num;
        num /= 100;
        sum += num;
    }
    double ans = (sum/tmp)*100;

    std::cout << (ans) << std::endl;

    return 0;
}