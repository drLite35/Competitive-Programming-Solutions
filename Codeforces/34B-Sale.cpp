#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int len  , m;
    cin>>len>>m;
    int arr[len];
    for(int i= 0 ; i<len ; i++){
        cin>>arr[i];
    }
    sort(arr , arr+len);
    int ans(0);
    for(int i=0 ; i<m ; i++){
        if(arr[i]>0)break;
        ans-=arr[i];
    }
    cout<<ans;
    return 0;
}