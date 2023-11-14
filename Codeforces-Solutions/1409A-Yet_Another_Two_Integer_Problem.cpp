 #include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a , b;
    cin >> a>>b;
    int tmp(0);
    int ans;
    if(b-a==0)cout<< "0"<<endl;
    else if(abs(b-a)<=10)cout << "1"<<endl;
    else{
        tmp = abs(b-a);
        ans = tmp/10;
        if(tmp%10!=0)ans++;
        
        cout<<ans<<endl;
    }
    }
    return 0;
     
}