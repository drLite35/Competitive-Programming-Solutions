#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n , m;
    cin>>n>>m;
    double max=0;
    int ans=0;
    for(int i=1 ; i<=n ; i++){
        double t;
        cin>>t;
        if(ceil(t/m)>=max){
            ans=i;
            max=ceil(t/m);
        }
    }
    cout<<ans;
    return 0;
}