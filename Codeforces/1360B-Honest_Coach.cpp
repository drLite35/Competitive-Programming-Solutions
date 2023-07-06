#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int len ; 
        cin >>len; 
        int arr[len];
        for(int i=0; i<len ; i++){
            cin>> arr[i];
        }
        sort(arr , arr+len);
        int ans=10000;
        for(int i=0 ; i<len-1 ; i++){
            if(arr[i+1]-arr[i] < ans)ans=arr[i+1]-arr[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}