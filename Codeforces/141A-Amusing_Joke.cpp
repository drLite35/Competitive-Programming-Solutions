#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    string fin = a + b;

    sort(begin(fin), end(fin));
    sort(begin(c), end(c));

    if (fin == c)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}