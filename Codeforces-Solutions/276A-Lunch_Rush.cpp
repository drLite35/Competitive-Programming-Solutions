#include <iostream>
using namespace std ;
int main(){
    int len, k;
    long long int max = -10000000009;
    cin >> len >>k;
    while(len-->0){
        int tmp;
        int f,t;
        cin >> f >>t;
        if(t > k){
            tmp = f-(t-k);
        }
        else{
            tmp = f;
        }
        if(tmp>max)max=tmp;
    }
    cout << max;
}