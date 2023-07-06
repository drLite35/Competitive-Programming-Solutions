#include <iostream>
using namespace std;
int main(){
    int n , k;
    cin >>n >> k;
    int ans=0;
    while(n--){
        int num ;
        cin>>num;
        int tmp = 0;
        while(num>0){
            if(num%10==4 || num%10==7)tmp++;
            num/=10;
        }
        if(tmp<=k)ans++;
    }
    cout << ans;
    return 0;
}