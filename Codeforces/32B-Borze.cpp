#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int arr[s.length()];
    int tmp = 0;
    for (int i = 0; i < s.length(); i++) {
        
        if (s[i] == '.') {
            arr[tmp] = 0;
            tmp++;
        } else if (s[i] == '-' && s[i + 1] == '.') {
            arr[tmp] = 1;
            tmp++;
            i++;
        } else {
            arr[tmp] = 2;
            tmp++;
            i++;
        }
    }
    for (int j = 0; j < tmp; j++) {
        cout << arr[j];
    }
    return 0;
}