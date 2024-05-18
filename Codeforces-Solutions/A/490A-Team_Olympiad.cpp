#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    int arr[tt];
    int a1[tt];
    int b1 = 0, b2 = 0, b3 = 0;
    int a2[tt];
    int a3[tt];
    
    for (int i = 0; i < tt; i++) {
        cin >> arr[i];
        if (arr[i] == 1) {
            a1[b1] = i + 1;
            b1++;
        }
        if (arr[i] == 2) {
            a2[b2] = i + 1;
            b2++;
        }
        if (arr[i] == 3) {
            a3[b3] = i + 1;
            b3++;
        }
    }

    int ans = min({b1, b2, b3});
    if (ans == 0) {
        cout << 0;
    } else {
        cout<<ans<<endl;
        for (int i = 0; i < ans; i++) {
            cout << a1[i] << " " << a2[i] << " " << a3[i] << endl;
        }
    }
    return 0;
}