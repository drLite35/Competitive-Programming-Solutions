
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    int arr[t];
    for(int i=0 ; i<t ; i++){
        cin>>arr[i];
    }
    int s(0) , d(0);
    int i=0 ; 
    int j=t-1;
    int tmp=1;
    while(tmp<=(t)){
        if(arr[i]>=arr[j] && tmp%2==1){
            s+=arr[i];
            i++;
        }
        else if(arr[i]<=arr[j] && tmp%2==1){
            s+=arr[j];
            j--;
        }
        else if(arr[i]>=arr[j] && tmp%2==0){
            d+=arr[i];
            i++;
        }
        else if(arr[i]<=arr[j] && tmp%2==0){
            d+=arr[j];
            j--;
        }
        tmp++;
    }
    cout<<s<<" "<<d<<endl;
    return 0;
    }