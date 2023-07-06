#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[7];
    for(int i=0 ; i<7 ;i++){
        cin>>arr[i];
    }
    int i=0;
    while(t>0){
        t-=arr[i%7];
        i++;
    }
    if((i%7)==0)cout<<7;
    else cout<<(i)%7;
    
    return 0;
}