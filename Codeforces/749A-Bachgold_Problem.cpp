#include <iostream>
using namespace std; 
int main(){
    int t;
    cin >> t;
    int ans = (t/2) ;
    cout<<ans<<endl;
    for(int i=1 ; i<=ans-1 ; i++){
        cout<<2<<" ";
    }
    int tmp = (t%2) ? 3 : 2;
    cout<<tmp;
    return 0;
}