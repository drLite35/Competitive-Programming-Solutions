#include <iostream>
using namespace std;
int main(){
    int n , m;
    cin>>n>>m;
    int arr[m];
    for(int i=0 ; i<m ; i++){
        cin>>arr[i];
    }
    int ans=arr[0]-1;
    for(int i=1 ; i<m ; i++){
        if(arr[i]-arr[i-1]<0){
            int tmp=n-arr[i-1];
            tmp+=arr[i];
            ans+=tmp;
        }
        else ans+=arr[i]-arr[i-1];
    }
    cout<<ans;
    return 0;
}