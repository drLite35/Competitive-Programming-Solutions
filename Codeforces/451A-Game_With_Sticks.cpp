#include <iostream>
using namespace std;
int main(){
    int n ,m ;
    cin >> n>>m;
    int ans;
    if(n>=m)ans=m;
    else ans=n;
    if(ans%2==0)cout << "Malvika";
    else cout << "Akshat";
    return 0;
}