#include <iostream>
using namespace std;
int main(){
    int a , b , ans(0);
    cin >> a >> b;
    while(true){
        ans++;
        a*=3;
        b*=2;
        if(a>b)break;
    }
    cout << ans;
    return 0;
}