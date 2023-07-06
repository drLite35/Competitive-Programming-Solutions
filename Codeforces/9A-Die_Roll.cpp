#include <iostream>
using namespace std;
int main(){
    int a , b;
    cin>>a>>b;
    int max = (a>b) ? a : b;
    int ans = 7-max;
    if(ans<=0)cout<<"0/6";
    else if(ans==1 || ans==5) cout<<ans<<"/6";
    else if(ans==2) cout<<"1/3";
    else if(ans==3) cout<<"1/2";
    else if(ans==4) cout<<"2/3";
    else if(ans==6) cout<<"1/1";
    return 0;
}