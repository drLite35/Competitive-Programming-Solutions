#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int ans = 0;

    while (n > 0) {
        int tmp = n % 10;
        if (tmp == 4 || tmp == 7) {
            ans++;
        }
        n /= 10;
    }

    if (ans == 4 || ans == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}