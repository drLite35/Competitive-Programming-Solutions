#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;


    while (t-- > 0) {
        int len;
        cin >> len;
     

        string s;
        getline(cin, s); 

        int tmp = 0;

        for (int i = 0; i < len - 1; i++) {
            for (int j = i + 1; j < len; j++) {
                char c1 = s[i];
                char c2 = s[j];

                if (c1 == c2 && (i - j) % 2 != 0) {
                    tmp = 1;
                    break;
                }
            }

            if (tmp == 1) {
                break;
            }
        }

        if (tmp == 1) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

    return 0;
}

