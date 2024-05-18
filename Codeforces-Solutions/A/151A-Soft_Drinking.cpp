#include <iostream>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int n1 = (k * l) / nl;
    int n2 = c * d;
    int n3 = p / np;
    int fin = (min(min(n1, n2), n3)) / n;

    cout << fin;
    return 0;
}