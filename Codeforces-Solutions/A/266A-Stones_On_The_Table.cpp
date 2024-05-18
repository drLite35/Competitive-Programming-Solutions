#include <iostream>
#include <string>
using namespace std;

int main() {
    int len;
    cin >> len;
    cin.ignore(); // Ignore the newline character after reading the integer
    string s;
    getline(cin, s);
    int ans = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1])
            ans++;
    }
    cout << ans << endl;
    return 0;
}