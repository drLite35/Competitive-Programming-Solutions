#include <iostream>
using namespace std; 
int main(){
    int t; 
    cin >> t; 
    int ans=0;
    int tmp=1;
    while(t>0){
        for(int i=1 ; i<=tmp ; i++){
            if(t<0)break;
            t-=i;
        }
        if(t>=0)ans++;
        tmp++;
    }
    if(ans==0)ans=1;
    cout<<ans;
    return 0;
}