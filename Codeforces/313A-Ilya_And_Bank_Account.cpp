#include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    if(n>=0)cout<<n;
    else{
        n = -n; 
        int n1; 
        int n2;
        int tmp;
        n1 = n/10;
        n2 = n/100;
        tmp =  n%100;
        tmp = tmp%10;
        n2 = n2*10 + tmp;
        if(n2>=n1)cout<<-n1;
        else cout<<-n2;
    }
    return 0;
}