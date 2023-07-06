#include <iostream>

int main() {
    int tt;
    std::cin >> tt;
    int ans = 0;
    while (tt-- > 0) {
        int tmp = 0;
        for (int i = 0; i < 3; i++) {
            int a;
            std::cin >> a;
            if (a == 1)
                tmp++;
        }
        if(tmp>1)ans++;
        
    }
            std::cout << ans << std::endl;
    
    return 0;
}