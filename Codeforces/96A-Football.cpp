#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int tmp = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i + 1]) {
            tmp++;
        } else {
            tmp = 0;
        }

        if (tmp >= 6) {
            break;
        }
    }

    if (tmp >= 6) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}