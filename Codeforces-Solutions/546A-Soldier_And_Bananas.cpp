#include <iostream>
using namespace std;
int main(){
    int k , n, w;
    cin >> k >> n >> w;
    int ans = 0;
    for(int i=1 ; i<=w ; i++){
        ans+=(k*i);
    }
    if((ans-n) >=0)cout << ans-n;
    else cout << '0';
    
    return 0;
}