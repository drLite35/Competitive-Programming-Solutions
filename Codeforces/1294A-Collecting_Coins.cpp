#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int tmp = std::max(std::max(a, b), c);
        int t0 = tmp - a;
        int t1 = tmp - b;
        int t2 = tmp - c;
        n = n - t0 - t1 - t2;
        if (n < 0)
            cout << "NO" << endl;
        else {
            if (n % 3 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}