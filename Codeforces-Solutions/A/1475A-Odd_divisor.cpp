#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
bool power(long long a){
    if((a & (a-1)) == 0)return true;
    else return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a=2;
        int t=0;
        if(n%2==1)cout<<"YES"<<endl;
        else{
            if(power(n))cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}