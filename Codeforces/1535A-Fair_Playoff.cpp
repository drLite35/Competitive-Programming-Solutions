#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[4];
        for(int i=0 ; i<4 ; i++){
            cin>>arr[i];
        }
        if(max(arr[0],arr[1])<min(arr[2],arr[3]))cout<<"NO"<<endl;
        else if(min(arr[0],arr[1])>max(arr[2],arr[3]))cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}