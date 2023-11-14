#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int tmp = 0;
    char arr[(s.length() / 2) + 1];

    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 1)
            continue;
        else {
            arr[tmp] = s[i];
            tmp++;
        }
    }

    sort(arr, arr + tmp);

    string ans;
    tmp = 0;

    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 1)
            ans += '+';
        else {
            ans += arr[tmp];
            tmp++;
        }
    }

    cout << ans << endl;

    return 0;
}