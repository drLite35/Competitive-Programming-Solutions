#include <iostream>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int a , b;
        cin>>a>>b;
        int min = (a<b) ? a : b;
        int max = (a>b) ? a : b;
        if(max > (2*min))cout<<max*max<<endl;
        else{
            int tmp = 2*min;
            cout << tmp*tmp<<endl;
        }
    }
    return 0;
}