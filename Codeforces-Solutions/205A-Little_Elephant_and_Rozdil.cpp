#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int c;
    cin>>c;
    if(c==1){
        int a;cin>>a;
        cout<<"1";
    }
    else{
        int arr[c];
        int tmp[c];
        for(int i=0 ; i<c ; i++){
            cin>>arr[i];
            tmp[i]=arr[i];
        }
        sort(arr , arr+c);
        if(arr[0]==arr[1])cout<<"Still Rozdil";
        else {
            for(int i=0 ; i<c ; i++){
                if(arr[0]==tmp[i]){
                    cout<<i+1;
                    break;
                }
            }
        }}
        return 0;
}