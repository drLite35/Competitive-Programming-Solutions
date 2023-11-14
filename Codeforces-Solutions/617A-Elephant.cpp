#include <iostream>

int main() {
    int num;
    std::cin >> num;
    int ans = 0;
    if (num <= 5) {
        ans = 1;
    } else {
        while (num > 0) {
            num = num - 5;
            ans++;
        }
    }
    std::cout << ans << std::endl;
    return 0;
}
