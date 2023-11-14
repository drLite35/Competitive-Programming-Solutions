#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int a[t];
    int max = 0;
    for(int i=0 ; i<t ; i++){
        cin>>a[i];
        if(a[i]>max)max=a[i];
    }
    int ans= 0;
    for(int i=0 ; i<t ; i++){
        ans+=max-a[i];
    }
    cout<<ans;
    return 0;
}