#include <iostream>
using namespace std;
int main(){
    int n , k;
    cin>>n>>k;
    int j = k + 2;
    for(int i=k+1 ; i>0 ; i--){
        cout<<i<<" ";
    }
    for(; j<=n ; j++)cout<<j<<" ";
    return 0;
}
