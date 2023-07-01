#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t-- > 0) {
        int len;
        cin >> len;
        
        int num, eve = 0, odd = 0;
        
        for (int i = 0; i < len; i++) {
            cin >> num;
            
            if (num % 2 == 0) {
                eve += num;
            } else {
                odd += num;
            }
        }
        
        if (eve > odd) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
