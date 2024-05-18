#include <iostream>
#include <string>

using namespace std;

int main() {
    int tt;
    cin >> tt;

    int ans = 0;
    for (int i = 0; i < tt; i++) {
        string s;
        cin>>s;

        if (s[1] == '+') {
            ans++;
        } else if (s[1]=='-') {
            ans--;
        }
    }

    cout << ans << endl;

    return 0;
}