#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int a , b, c;
        cin>>a>>b>>c;
        long long int ans = c - c%a + b;
        if(ans>c) ans = c - c%a - a +b;
        cout<<ans<<endl;
        
    }
    return 0;
}