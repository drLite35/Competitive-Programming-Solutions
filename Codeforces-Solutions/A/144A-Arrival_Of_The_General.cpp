
#include <iostream>

int main() {
    int len;
    std::cin >> len;
    
    int arr[len];
    for (int i = 0; i < len; i++) {
        std::cin >> arr[i];
    }
    
    int minInd;
    int min = arr[0];
    int max = arr[0];
    int maxInd;
    
    for (int i = 0; i < len; i++) {
        if (arr[i] <= min) {
            min = arr[i];
            minInd = i;
        }
    }
    
    for (int i = len - 1; i >= 0; i--) {
        if (arr[i] >= max) {
            max = arr[i];
            maxInd = i;
        }
    }
    
    if (minInd < maxInd) {
        int ans = maxInd + (len - 1 - minInd) - 1;
        std::cout << ans << std::endl;
    } else {
        int ans = maxInd + (len - 1 - minInd);
        std::cout << ans << std::endl;
    }
    
    return 0;
}