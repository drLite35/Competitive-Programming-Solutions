#include <iostream>
#include <algorithm>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int len;
        cin>>len;
        long long int am(10000000000) , bm(10000000000);
        long long int a[len];
        long long int b[len];
        for(int i=0 ; i<len ; i++){
            cin>>a[i];
            if(a[i]<am)am=a[i];
        }
        for(int i=0 ; i<len ; i++){
            cin>>b[i];
            if(b[i]<bm)bm=b[i];
        }
        long long int ans(0);
        for(int i=0 ; i<len ; i++){
            ans+=max((a[i]-am) , (b[i]-bm));
        }
        cout<<ans<<endl;
    }
    return 0;
}