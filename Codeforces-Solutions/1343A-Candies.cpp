#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int g=3;
        int x=2;
        while(1){
         if(n%g==0)break;
         g+=2*x;
         x*=2;
        }
        cout<<n/g<<endl;
    }
    return 0;
}