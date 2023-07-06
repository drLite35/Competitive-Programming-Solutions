#include <iostream>
using namespace std;
int main(){
    int n , h ;
    cin >> n >> h;
    int ans=0;
    while(n--){
        int a;
        cin >> a;
        if(a>h)ans+=2;
        else ans+=1;
    }
    cout << ans;
    return 0;
}