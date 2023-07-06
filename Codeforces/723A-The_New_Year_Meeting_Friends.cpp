#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int ans = abs(a - b) + abs(c - b);

    if (abs(a - c) + abs(b - c) < ans)
        ans = abs(a - c) + abs(b - c);

    if (abs(b - a) + abs(c - a) < ans)
        ans = abs(b - a) + abs(c - a);

    cout << ans;
    return 0;
}