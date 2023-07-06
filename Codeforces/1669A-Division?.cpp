
#include <iostream>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int a;
        cin >>a;
        if(a<1400)cout<<"Division 4"<<endl;
        else if(a>1399 && a<1600)cout<<"Division 3"<<endl;
        else if(a>1599 && a<1900)cout<<"Division 2"<<endl;
        else cout<<"Division 1"<<endl;
    }
    return 0;
}
