#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    int h[5000];
    for(int i=0 ; i<5000 ; i++)h[i]=0;
    for(int i=0 ; i<t ; i++){
        cin>>arr[i];
        h[arr[i]-1]++;
    }
    int ans=0;
    for(int i=0 ; i<t ; i++){
        if(h[i]==0)ans++;
    }
    cout<<ans;
    return 0;
}