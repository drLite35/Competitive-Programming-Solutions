#include <iostream>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt--){ 
    int len;
    cin >> len;
    cin.ignore(); // Clear the newline character from the buffer
    string s;
    getline(cin, s);
    
    int ans = len * 2;
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (s[i] == s[j]) {
                ans--;
                break;
            }
        }
    }
    cout << ans <<endl;
}
    return 0;
}