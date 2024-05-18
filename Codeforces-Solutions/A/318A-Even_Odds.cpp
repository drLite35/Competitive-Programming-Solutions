#include <iostream>
using namespace std;

int main() {
    long long int n, k;
    cin >> n >> k;
    long long mid ;
    
    if(n%2==0){
        mid=n/2;
    }
    else{
        mid = (n+1)/2;
    } 
    
    if(k<=mid) cout<<(k*2-1);
    else cout << (k-mid)*2;
    
    return 0;
}