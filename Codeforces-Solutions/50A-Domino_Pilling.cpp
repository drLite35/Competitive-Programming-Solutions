#include <iostream>

int main() {
    int m, n;
    std::cin >> m;
    std::cin.ignore();
    std::cin >> n;
    std::cin.ignore();
    int q = m * n;
    int ans = q / 2;
    std::cout << ans << std::endl;
    return 0;
}
