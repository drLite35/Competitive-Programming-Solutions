
#include <iostream>

int main() {
    int k, l, m, n, d;
    std::cin >> k >> l >> m >> n >> d;
    int num = d;

    if (k == 1 || l == 1 || m == 1 || n == 1) {
        std::cout << d << std::endl;
        return 0;
    } else {
        for (int i = 1; i <= d; i++) {
            if (i % k != 0 && i % l != 0 && i % m != 0 && i % n != 0) {
                num--;
            }
        }
        std::cout << num << std::endl;
    }

    return 0;
}