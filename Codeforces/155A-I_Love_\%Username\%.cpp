#include <iostream>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    int arr[tt];
    
    for (int i = 0; i < tt; i++) {
        cin >> arr[i];
    }
    
    int max = arr[0];  
    int min = arr[0];  
    int ans = 0;
    
    for (int i = 1; i < tt; i++) {
        if (arr[i] < min) {
            min = arr[i];
            ans++;
        }
        if (arr[i] > max) {
            max = arr[i];
            ans++;
        }
    }
    
    cout << ans;
    
    return 0;
}