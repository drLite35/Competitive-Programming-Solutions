
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    string s;
    cin >> s;
    int tmp = 0;

    if (t < 26) {
        cout << "NO";
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        sort(s.begin(), s.end());
        auto it = unique(s.begin(), s.end());
        s.erase(it, s.end());

        if (s.length() < 26)cout<<"NO";
        else cout<<"YES";
    }

    return 0;
}