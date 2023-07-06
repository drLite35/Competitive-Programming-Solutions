#include <iostream>
using namespace std;
void fibo(int i){
    if(i==0)cout<<0<<" "<<0<<" "<<0;
    else if(i==1)cout<<0<<" "<<0<<" "<<1;
    else if(i==2)cout<<0<<" "<<1<<" "<<1;
    else{
    int f0 = 0;
    int f1 = 1;
    while (true){
        int f2 = f1 + f0;
        int f3 = f2 + f1;
        int f4 = f3 + f2;
        if(f4==i){
            cout<<f0<<" "<<f1<<" "<<f3;
            break;
        }
        else{
            f0 = f1;
            f1 = f2;
        }
    }
    }
}
int main(){
    int t;
    cin>>t;
    fibo(t);
    return 0;
}