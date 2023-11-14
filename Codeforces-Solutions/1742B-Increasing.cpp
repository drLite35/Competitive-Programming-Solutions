#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int len;
        cin>>len;
        int arr[len];
        for(int i=0 ; i<len ; i++){
            cin>>arr[i];
        }
        sort(arr , arr+len);
        int a=0;
        for(int i=0 ; i<len-1 ; i++){
            if(arr[i]==arr[i+1])a=1;
        }
        if(a==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}