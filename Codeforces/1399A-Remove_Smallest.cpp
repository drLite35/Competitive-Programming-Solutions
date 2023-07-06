#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int tt;
        cin >> tt;
        int a[tt];
        for (int i = 0; i < tt; i++) {
            cin >> a[i];
        }

        int tmp = 0;
        sort(a, a + tt); 
        for (int i = 0; i < tt - 1; i++) {
            if (a[i + 1] - a[i] > 1) {
                tmp++;
                break;
            }
        }

        if (tmp > 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
