#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s ;
        cin>>s;
        if(s%3==0)cout<<s/3<<" "<<s/3<<endl;
        else if(s%3==1)cout<<(s/3)+1<<" "<<s/3<<endl;
        else cout<<s/3<<" "<<(s/3)+1<<endl;
    }
    return 0;
}