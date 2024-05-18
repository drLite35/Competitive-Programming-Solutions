#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int len;
        cin >> len;
        string input;
        cin >> input;
    
        vector<int> arr(len);
    
        for (int i = 0; i < len; i++) {
        arr[i] = input[i] - '0';
        }
        
        int tmp = len;
        
        for (int i = 0; i <= len / 2; i++) {
            if (tmp == 1 || tmp == 0) break;
            if (((arr[i] == 1) && (arr[len - i - 1] == 0)) || ((arr[i] == 0) && (arr[len - i - 1] == 1))) {
                tmp -= 2;
            }
            else {
                break;
            }
        }
        
        cout << tmp << endl;
    }
    
    return 0;
}
