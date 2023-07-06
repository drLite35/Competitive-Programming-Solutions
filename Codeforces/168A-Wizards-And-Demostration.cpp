#include <iostream>
using namespace std;
int main(){
    int n , x , y;
    cin>>n>>x>>y;
    int tmp = ((((y*n))%100)==0) ? (y*n/100) : (y*n/100)+1;
    if(tmp>x)cout<<tmp-x;
    else cout<<0;
    return 0;
}