#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    int n=0;
    int p=0;
    for(int i=0 ; i<t ; i++){
        cin>>arr[i];
        if(arr[i]<0)n++;
        if(arr[i]>0)p++;
    }
    sort(arr , arr+t);
    if(p>0){
        cout<<1<<" "<<arr[0]<<endl;
        cout<<1<<" "<<arr[t-1]<<endl;
        cout<<t-2<<" ";
        for(int i=1 ; i<t-1 ; i++)cout<<arr[i]<<" ";
    }
    if(p==0){
        cout<<1<<" "<<arr[0]<<endl;
        cout<<2<<" "<<arr[1]<<" "<<arr[2]<<endl;
        cout<<t-3<<" ";
        for(int i=3 ; i<t ; i++)cout<<arr[i]<<" ";
    }
    return 0;
    
}