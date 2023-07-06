#include <iostream>
using namespace std;
int main(){
    int a , b ;
    cin >> a >> b;
    int m , n;
    if(a>=b){
        m=b;
        a=a-b;
        n=a/2;
        cout << m << " "<< n;
    }
    else{
        m=a;
        b=b-a;
        n=b/2;
        cout << m << " "<< n;
    }
    return 0;
}