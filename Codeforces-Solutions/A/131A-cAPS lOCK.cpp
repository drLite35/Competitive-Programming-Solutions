#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int tmp = 0;

    if (s[0] >= 'a' && s[0] <= 'z') { 
        for (int i = 1; s[i] != '\0'; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                tmp = 1;
                break;
            }
        }
    }
    else {
        for (int i = 1; s[i] != '\0'; i++) { 
            if (s[i] >= 'a' && s[i] <= 'z') { 
                tmp = 1;
                break;
            }
        }
    }

    if (tmp == 1) {
        cout << s << endl;
    }
    else {
        for (int i = 0; s[i] != '\0'; i++) { 
            if (s[i] >= 'a' && s[i] <= 'z') { 
                s[i] -= 32;
            }
            else {
                s[i] += 32;
            }
        }
        cout << s << endl;
    }
    return 0;
}
