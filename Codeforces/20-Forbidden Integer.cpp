#include <iostream>

typedef long long ll;

int main() {
    ll n, k, x , t;
    std::cin>>t;
    while(t-->0){
    std::cin >> n >> k >> x;
    
    if (x != 1) {
        std::cout << "YES" << std::endl;
        std::cout << n << std::endl;
        for (int i = 1; i < n + 1; i++) {
            std::cout << 1 << " ";
        }
        std::cout << std::endl;

    }
    
    else if (n == 1 || k <= 1) {
        std::cout << "NO" << std::endl;

    }
    
    else if (n % 2 == 0) {
        std::cout << "YES" << std::endl;
        std::cout << n / 2 << std::endl;
        for (int i = 1; i <= n / 2; i++) {
            std::cout << 2 << " ";
        }
        std::cout << std::endl;

    }
    
    else if (k > 2) {
        std::cout << "YES" << std::endl;
        std::cout << (n - 3) / 2 + 1 << std::endl;
        for (int i = 1; i <= (n - 3) / 2; i++) {
            std::cout << 2 << " ";
        }
        std::cout << 3 << std::endl;

    }
    else{
    std::cout << "NO" << std::endl;}}
    
    return 0;
}


