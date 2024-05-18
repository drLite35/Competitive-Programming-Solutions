#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    
    while (tt-- > 0) {
        int len;
        cin >> len;
        int ans;
        
        int arr[len];
        for (int i = 0; i < len; i++) {
            cin >> arr[i];
        }
        int max = arr[0];
        int min = arr[0];
        for (int i = 0; i < len ; i++) {
            if(max<=arr[i])max=arr[i];
            if(min>=arr[i])min=arr[i];
        }
        if(min<0){
            ans=min;
        }
        else{
            ans=max;
        }
        
        cout << ans << endl;
    }
    
    return 0;
}