#include <iostream>
using namespace std;
int main(){
    long long int t;
    cin >> t;
    if(t%2==0)cout<<t/2;
    else{
       t=t+1;
        t*=(-1);
        cout<<t/2;
    }
    return 0;
}