#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a , b, c;
        cin >> a >> b >>c ;
        if(a+b==c)cout<<"YES"<<endl;
        else if(a+c==b)cout<<"YES"<<endl;
        else if(c+b==a)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}