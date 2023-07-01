#include <iostream>
#include <vector>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    
    while (tt-- > 0) {
        int len;
        cin >> len;
        
        int a, b, c;
        vector<int> arr(len);
        
        for (int i = 0; i < len; i++) {
            cin >> arr[i];
            
            if (arr[i] == 1)
                a = i+1;
            if (arr[i] == 2)
                b = i+1;
            if (arr[i] == len)
                c = i+1;
        }
        
        if ((a > c && c > b) || (a < c && c < b)) {
            cout << a << " " << a << endl;
        }
        else if ((c > a && a > b) || (c < a && a < b)) {
            cout << c << " " << a << endl;
        }
        else if ((c > b && b > a) || (c < b && b < a)) {
            cout << c << " " << b << endl;
        }
    }
    
    return 0;
}