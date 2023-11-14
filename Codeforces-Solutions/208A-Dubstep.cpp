#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string ans;
    int l = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i + 2 < s.size() && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            i += 2;
            if (l > 0) {
                ans += ' ';
            }
            l=0;
        } else {
            ans += s[i];
            l++;
        }
    }
    cout << ans;
    return 0;
}