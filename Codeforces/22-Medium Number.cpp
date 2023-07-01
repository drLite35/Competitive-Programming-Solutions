#include <iostream>
#include <algorithm>

int main() {
    int tt;
    std::cin >> tt;
    while (tt-- > 0) {
        int arr[3];
        for (int i = 0; i < 3; i++) {
            std::cin >> arr[i];
        }
        std::sort(arr, arr + 3);
        std::cout << arr[1] << std::endl;
    }
    return 0;
}