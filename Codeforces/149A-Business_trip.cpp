#include <iostream>
#include <algorithm>
using namespace std;
int solve(int *arr , int k){
    int sum=0;
    for(int i=0 ;i<12 ; i++){
        sum+=arr[11-i];
        if(sum>=k)return i+1;
    }
    return -1;
}
//here we are directly using brute force 
int main(){
    int n;
    cin>>n;
    int arr[12];
    for(int i=0 ; i<12 ; i++)cin>>arr[i];
    sort(arr , arr+12);
    if(n==0)cout<<0;
    else{
    cout<<solve(arr , n);}
    return 0;
}