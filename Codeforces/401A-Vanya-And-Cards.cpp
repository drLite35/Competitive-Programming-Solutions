#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n , x;
    cin>>n>>x;
    int sum =0;
    for(int i=0 ; i<n ; i++){
        int a;
        cin>>a;
        sum+=a;
    }
    if(sum==0)cout<<0;
    else if(abs(sum)<=x)cout<<1;
    else{
        int ans=0;
        sum=abs(sum);
        while(true){
            ans++;
            sum-=x;
            if(sum<=0){
                cout<<ans;
                break;
            }
        }
    }
    return 0;
}