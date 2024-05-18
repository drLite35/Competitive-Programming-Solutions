#include <iostream>
using namespace std;
int main(){
    int c;
    cin>>c;
    while(c--){
    int t;
    cin>>t;
    int a[t];
    int o(0) , e(0);
    for(int i=0 ; i<t ; i++){
        cin>>a[i];
        if(a[i]%2==0)e++;
        else o++;
    }
    if(e==o)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }
    return 0;
}