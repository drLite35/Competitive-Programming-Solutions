#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    int arr[t+1];
    int k;
    for(int i=1 ; i<=t ; i++){
        cin >> k;
        arr[k] = i;
    }
    for(int j=1 ; j<=t ; j++)cout <<arr[j]<<" ";
    return 0;
}