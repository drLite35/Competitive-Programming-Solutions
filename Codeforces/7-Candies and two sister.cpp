#include <iostream>

int main() {
    int t;
    std::cin >> t;
    
    for (int i = t; i > 0; i--) {
        int can;
        std::cin >> can;
        
        int ans = 0;
        if (can == 0 || can == 1) {
            ans = 0;
        } else {
            int b = 1;
            int a = can - 1;
            while (a > b) {
                a--;
                b++;
                ans++;
            }
        }
        std::cout << ans << std::endl;
    }
    
    return 0;
}
