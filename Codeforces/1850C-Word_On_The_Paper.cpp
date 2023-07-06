#include <iostream>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    
    while (tt--) {
        string a;
        for (int i = 1; i <= 64; i++) {
            char c;
            cin >> c;
            if (c != '.')
                a += c;
        }
        cout << a << endl;
    }

    return 0;
}