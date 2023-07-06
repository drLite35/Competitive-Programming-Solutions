#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1)cout<<1;
    else{
    cout<<n<<" ";
    for(int i=1 ; i<n ; i++)cout<<i<<" ";
    return 0;}
}