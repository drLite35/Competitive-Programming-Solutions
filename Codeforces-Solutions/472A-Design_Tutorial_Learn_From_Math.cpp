
#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    
    return true;
}

int main() {
    int t;
    cin >> t;
    int i = 4;
    int j = t - 4;

    while (true) {
        if (!is_prime(i) && !is_prime(j)) {
            cout << i << " " << j << endl;
            break;
        }
        i++;
        j--;
    }

    return 0;
}