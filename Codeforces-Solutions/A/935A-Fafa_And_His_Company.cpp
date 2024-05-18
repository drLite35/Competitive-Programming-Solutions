#include <iostream>
using namespace std; 
int main(){
    int n;
    cin>>n;
    int ans(1);
    int i=2;
    while(i<=n/2){
        if((n-i)%i==0)ans++;
        i++;
    }
    cout<<ans<<endl;
    return 0;
    
}