#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a ;
        cin>>a;
        a = 180-a;
        if(360%a==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}