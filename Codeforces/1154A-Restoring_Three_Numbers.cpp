
#include <iostream>
using namespace std;
int main(){
    int arr[4];
    int max=0;
    int tmp=0;
   for(int i=0 ; i<4 ; i++){
       cin>>arr[i];
       if(arr[i]>max){
           max=arr[i];
       tmp=i;}
   }
    
    for(int i=0 ; i<4 ; i++){
        if(i!=tmp)cout<<(max-arr[i])<<" ";
    }
    
    return 0;
}