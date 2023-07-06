#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int ans=1;
        if(n%2==0)ans=n/2;
        else ans=(n-1)/2;
        cout<<ans<<endl;
    }
    return 0;
}