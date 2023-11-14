#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t > 0) {
        int a, b;
        std::cin >> a >> b;
        int ans = (b - (a % b)) % b;
        std::cout << ans << std::endl;
        t--;
    }
    return 0;
}
