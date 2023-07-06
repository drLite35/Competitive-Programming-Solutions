#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int ans(0);
        long long int s;
        for(int i=1 ; i<=9 ; i++){
            s=i;
            while(s<=n){
                ans++;
                s=s*10+i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}