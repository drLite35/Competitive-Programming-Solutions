#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t; // number of test cases

    while (t--) {
        int n;
        std::cin >> n; // length of array

        std::vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i]; // input array elements
        }

        std::sort(arr.begin(), arr.end()); // sort the array

        int maxCost = 0;
        for (int i = 0; i < n / 2; i++) {
            int diff = arr[n-(i+1)] - arr[i]; // calculate difference between corresponding elements
            maxCost += diff;
        }

        std::cout << maxCost << std::endl;
    }

    return 0;
}
