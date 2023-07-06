#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        if (n % 4 != 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            
            for (int i = 2; i <= n; i += 2) {
                cout << i << " ";
            }
            
            int j = 1;
            for (int i = 1; i <= (n / 2) - 1; i++) {
                cout << j << " ";
                j += 2;
            }
            
            cout << n + ((n / 2) - 1) << endl;
        }
    }
    
    return 0;
}