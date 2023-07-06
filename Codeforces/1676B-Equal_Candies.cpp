#include <iostream>
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int len;
        cin>>len;
        int arr[len];
        int min = 100000000;
        for(int i=0 ; i<len ; i++){
            cin>>arr[i];
            if(arr[i]<min)min=arr[i];
        }
        int ans(0);
        for(int i=0 ; i<len ; i++){
            ans+=arr[i]-min;
        }
        cout<<ans<<endl;
    }
    return 0;
}