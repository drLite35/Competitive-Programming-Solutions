#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t-- > 0) {
        int l;
        cin >> l;
        
        int max = 0;
        int tmp = 0;
        for (int i = 0; i < l; i++) {
            int num;
            cin >> num;
            
            if (num == 1)
                tmp = 0;
            else {
                tmp++;
                if (tmp > max)
                    max = tmp;
            }
        }
        
        cout << max << endl;
    }
    
    return 0;
}

