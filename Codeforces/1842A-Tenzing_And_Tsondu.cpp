#include <iostream>

int main() {
    int t;
    std::cin >> t;
    while (t-->0) {
        int n, m;
        std::cin >> n;
        std::cin >> m;
        
        long long int  sum1 = 0;
        long long int  sum2 = 0;
        
        for (int i = 0; i < n; i++) {
            int num;
            std::cin >> num;
            sum1 += num;
        }
        
        for (int j = 0; j < m; j++) {
            int num;
            std::cin >> num;
            sum2 += num;
        }
        
        if (sum1 > sum2) {
            std::cout << "Tsondu" << std::endl;
        } else if (sum2 > sum1) {
            std::cout << "Tenzing" << std::endl;
        } else {
            std::cout << "Draw" << std::endl;
        }
    }
    
    return 0;
}

