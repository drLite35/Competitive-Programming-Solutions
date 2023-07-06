#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int ans(0);
    int sum(0);
    while(t--){
        int n ;
        cin >> n;
        if(n>0)sum+=n;
        else{
            if(sum>0)sum--;
            else ans++;
        }
    }
    cout << ans;
    return 0;
}