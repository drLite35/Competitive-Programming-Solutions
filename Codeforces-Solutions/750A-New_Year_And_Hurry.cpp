#include <iostream>
using namespace std;
int main(){
    int p , t;
    cin >> p >> t;
    int tt = 240 - t;
    int ans = 0;
    int i = 1;
    while(true){
        if((tt<(5*i)) || i>p)break;
        tt-=(5*i);
        i++;
        ans++;
    }
    cout << ans;
     return 0;
}