#include <iostream>
using namespace std;
int main(){
    int tt;
    cin >>tt;
    while(tt--){
        int a;
        cin>>a;
        int arr[6];
        for(int i=0 ; i<6 ; i++){
            arr[i] = a%10;
            a/=10;
        }
        if((arr[0]+arr[1]+arr[2]) == (arr[3]+arr[4]+arr[5]))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}