#include <iostream>

int main() {
    long long int n, m, a;
    std::cin >> n >> m >> a;
    
    long long int len = n / a;
    if (n % a != 0) {
        len++;
    }
    
    long long int wid = m / a;
    if (m % a != 0) {
        wid++;
    }
    
    std::cout << len * wid << std::endl;
    
    return 0;
}
