#include <iostream>
using namespace std;
int minInd(int arr[] , int len){
    int ind= (-1); 
    int min = 99999;
    for(int i=0 ; i<len ; i++){
        if(arr[i]<min){
            min=arr[i];
            ind = i;
        }
    }
    return ind;
}
int main(){
    int s ,n;
    cin>>s>>n;
    int x[n];
    int y[n];
    for(int i=0 ; i<n ; i++){
        cin>>x[i]>>y[i];
    }
    int tmp=1;
    for(int i=0 ; i<n ;i++){
        int num = minInd(x , n);
        if(x[num]>=s){
            cout<<"NO";
            tmp=0;
            break;
        }
        if(x[num]<s){
            s+=y[num];
            x[num] = 100000;
        }
    }
    if(tmp==1)cout<<"YES";
    return 0;
}