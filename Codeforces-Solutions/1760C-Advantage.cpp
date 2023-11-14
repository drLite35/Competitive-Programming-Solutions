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
        int s[len];
        for(int i=0 ; i<len ; i++){
            cin>>arr[i];
            s[i]=arr[i];
        }
        sort(s , s+len);
        int max = s[len-1];
        int smax = s[len-2];
        for(int i=0 ; i<len ; i++){
            if(arr[i]!=max)cout<<arr[i]-max<<" ";
            else cout<<arr[i]-smax<<" ";
        }
        cout<<endl;
    }
    return 0;
}