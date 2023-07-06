#include <iostream>
using namespace std;
int main(){
    int t;
    cin >>t;
    int c(0) , m(0);
    while(t--){
        int a , b;
        cin>>a>>b;
        if(a>b)m++;
        else if(b>a)c++;
    }
    if(m>c)cout<<"Mishka";
    else if(c>m)cout<<"Chris";
    else cout<<"Friendship is magic!^^";
    return 0;
}