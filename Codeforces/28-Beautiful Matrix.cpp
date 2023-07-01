#include <iostream>
#include <cmath>

int main() {
    int arr[5][5];
    int ans;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cin >> arr[i][j];
            if (arr[i][j] == 1) {
                ans = std::abs(i - 2);
                ans += std::abs(j - 2);
                break;
            }
        }
    }
    std::cout << ans << std::endl;
    return 0;
}