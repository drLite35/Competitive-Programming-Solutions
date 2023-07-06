#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    
    while (tt-- > 0) {
        long long len;
        cin >> len;
        
        long long arr[len];
        for (long long i = 0; i < len; i++) {
            cin >> arr[i];
        }
        
        long long odd = 0, even = 0;
        for (long long i = 0; i < len; i++) {
            if (i % 2 == 0 && arr[i] > 0) {
                even += arr[i];
            } else if (arr[i] > 0) {
                odd += arr[i];
            }
        }
        
        long long ans = max(even, odd);
        
        if (ans == 0) {
            sort(arr, arr + len);
            cout << arr[len - 1] << endl;
        } else {
            cout << ans << endl;
        }
    }
    
    return 0;
}