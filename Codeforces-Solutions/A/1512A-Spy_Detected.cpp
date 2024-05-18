#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l;
        cin>>l;
        int a[l];
        for(int i=0 ; i<l ; i++)cin>>a[i];
        for(int i=1 ; i<l-1 ; i++){
            if(a[i]!=a[i-1] && a[i]!=a[i+1]){
                cout<<i+1<<endl;
                break;
            }
            if(a[i]==a[i-1] && a[i]!=a[i+1]){
                cout<<i+2<<endl;
                break;
            }
            if(a[i]!=a[i-1] && a[i]==a[i+1]){
                cout<<i<<endl;
                break;
            }
            
        }
        
    }
    return 0;
}