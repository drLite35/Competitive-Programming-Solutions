#include <iostream>
using namespace std;
int main(){
    int tt;
    int ans=0;
    while(tt--){
        int p ,q;
        cin>>p>>q;
        if((q-p)>=2)ans++;
    }
    cout << ans;
    return 0;
}