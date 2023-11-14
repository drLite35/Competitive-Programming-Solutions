#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    int sum=0;
    int ans=0;
    int sum2=0;
    for(int i=0 ; i<t;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr , arr+t);
    for(int i=t-1 ; i>=0 ; i--){
        sum2+=arr[i];
        sum-=arr[i];
        ans++;
        if(sum2>sum)break;
    }
    cout <<ans;
    return 0;
    
}