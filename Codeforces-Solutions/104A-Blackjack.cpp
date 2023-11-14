#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int num = t-10;
    if(num<=0 || num>11)cout<<0;
    else if(num<=9 || num==11)cout << 4;
    else{
        cout << 15;
    }
    return 0;
}