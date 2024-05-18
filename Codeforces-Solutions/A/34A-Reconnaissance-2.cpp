#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0 ; i<t ; i++){
        cin>>arr[i];
        
    }
    int min = abs(arr[0]-arr[t-1]);
    int a=1;
    int b=t;
    for(int i=0 ; i<t-1 ; i++){
        if((abs(arr[i]-arr[i+1])<min)){
            min=abs(arr[i]-arr[i+1]);
            a=i+1;
            b=a+1;
        }
    }
    cout<<a<<" "<<b;
    return 0;
}