#include <iostream>
using namespace std;
int main(){
    int k ,r;
    cin >> k>>r;
    int a = 1;
    while(true){
        if(((a*k)%10==0) || ((a*k)%10==r))break;
        a++;
    }
    cout << a;
    return 0;
}