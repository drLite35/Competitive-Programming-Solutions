
#include <iostream>
using namespace std;
int main(){
    int n , p;
    cin >> n >> p;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        arr[i] = i+1;
    }
    for(int i=0 ; i<(2*n) ; i++){
        int a;
        cin >> a;
        for(int j=0 ; j<n ; j++ ){
            if(arr[j]==a)arr[j]=0;
        }
    }
    int tmp = 0;
    for(int j=0 ; j<n ; j++){
        if(arr[j]!=(0)){
            cout<<"Oh, my keyboard!";
            tmp=1;
            break;}
    }
    if(tmp==0)cout<<"I become the guy.";
    return 0;
    
}