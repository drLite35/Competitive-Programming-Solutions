#include <iostream>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    int a[tt];
    int b[tt];
    for(int i = 0; i < tt; i++){
        cin >> a[i];
        cin >> b[i];
    }
    int tmp0 = 0;
    int tmp1 = 0;
    int ans = 0;
    for(int i = 0; i < tt; i++){
        if(a[i] == 1)
            tmp1++;
        else
            tmp0++;
    }
    
    if(tmp0 >= tmp1)
        ans = tmp1;
    else
        ans = tmp0;
    
    tmp0 = 0;
    tmp1 = 0;
    for(int i = 0; i < tt; i++){
        if(b[i] == 1)
            tmp1++;
        else
            tmp0++;
    }
    
    if(tmp0 >= tmp1)
        ans += tmp1;
    else
        ans += tmp0;
    
    cout << ans << endl;
    
    return 0;
}