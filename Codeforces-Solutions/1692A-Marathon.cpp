#include <iostream>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
    int a , b, c, d;
    cin >> a>>b>>c>>d;
    int ans(0);
    if(b>a)ans++;
    if(c>a)ans++;
    if(d>a)ans++;
    cout<<ans<<endl;
    }
    return 0;
}