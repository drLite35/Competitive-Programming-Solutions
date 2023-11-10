#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n , k;
    cin>>n>>k;
    int arr[n*k];
    for(int i=0 ; i<n*k ; i++)arr[i]=i+1;
    int brr[k];
    for(int i=0 ; i<k ; i++){
        cin>>brr[i];
        arr[brr[i]-1]=-1;
    }
    sort(arr , arr+(n*k));
    int l=k;
    for(int i=0 ; i<k; i++){
        cout<<brr[i]<<" ";
        for(int j=1 ; j<n ; j++){
            cout<<arr[l]<<" ";
            l++;
        }
        cout<<endl;
    }
    return 0;
}