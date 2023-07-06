#include <iostream>

int main() {
    int tt;
    std::cin >> tt;
    
    int x, y, z;
    std::cin >> x >> y >> z;
    
    while (tt-- > 1) {
        int x1, y1, z1;
        std::cin >> x1 >> y1 >> z1;
        
        x += x1;
        y += y1;
        z += z1;
    }
    
    if (x == 0 && y == 0 && z == 0)
        std::cout << "YES";
    else
        std::cout << "NO";
    
    return 0;
}