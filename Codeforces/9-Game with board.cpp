#include <iostream>
#include <vector>
#include <algorithm>
 
int main() {
    int t;
    std::cin >> t; // number of test cases
 
    while (t--) {
        int n;
        std::cin >> n; // length of array
 
        if (n > 4) {
            std::cout << "Alice" << std::endl;
        } else {
            std::cout << "Bob" << std::endl;
        }
    }
 
    return 0;
}
