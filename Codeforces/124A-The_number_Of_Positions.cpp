#include <iostream>
using namespace std;
int main(){
    int n ,a ,b;
    cin>>n>>a>>b;
    int str = a+1;
    int end = n-b;
    if(str==end)cout<<b+1;
    else if(str>end)cout<<n-a;
    else cout<<b+1;
    return 0;
}