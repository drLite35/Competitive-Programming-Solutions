#include <iostream>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int a ;
        cin>>a;
        int ans(0);
        if(a<10){
            int tmp = a;
            ans+=(10*(tmp-1));
            ans+=1;
        }
        if(a<100 && a>10){
            int tmp = a/10;
            ans+=(10*(tmp-1));
            ans+=3;
        }
        if(a<1000 && a>100){
            int tmp = a/100;
            ans+=(10*(tmp-1));
            ans+=6;
        }
        if(a<10000 && a>1000){
            int tmp = a/1000;
            ans+=(10*(tmp-1));
            ans+=10;
        }
        cout<<ans<<endl;
    }
    return 0;
}