#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int h , m;
        cin>>h>>m;
        int ans=0;
        ans+=(23-h)*60;
        ans+=60-m;
        cout<<ans<<endl;
    }
    return 0;
}