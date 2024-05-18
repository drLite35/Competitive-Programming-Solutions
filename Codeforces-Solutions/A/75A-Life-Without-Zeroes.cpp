#include <iostream>
#include <math.h>
using namespace std;
int solve(int a){
    int num=0;
    int x=-1;
    while(a>0){
        if(a%10==0){
            a/=10;
            continue;
        }
        x++;
        int tmp=(a%10)*(pow(10 , x));
        num+=tmp;
        a/=10;
    }
    return num;
}
int main(){
    int a;
    int b;
    cin>>a>>b;
    int t=a+b;
    int na = solve(a);
    int nb = solve(b);
    int nt = solve(t);
    if(nt==(na+nb))cout<<"YES";
    else cout<<"NO";
    return 0;
    
}