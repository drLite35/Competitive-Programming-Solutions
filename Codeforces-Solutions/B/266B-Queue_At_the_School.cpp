#include <iostream>
#include <string>
using namespace std;

int main() {
    int len, tt;
    cin >> len >> tt;
    string s;
    cin >> s;

    for (int i = 0; i < tt; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (s[j] == 'B' && s[j + 1] == 'G') {
                s[j + 1] = 'B';
                s[j] = 'G';
                j++;
            }
        }
    }

    cout << s << endl;

    return 0;
}