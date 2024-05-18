#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int p;
        cin>>p;
        int arr[4];
        int tmp = 1000;
        for(int i=0 ; i<4 ; i++){
            arr[i] = p/tmp;
            p%=tmp;
            tmp = tmp/10;
        }
        int sum(0);
        if(arr[0]==0)sum+=10;
        else sum+=arr[0];
        for(int i=1 ; i<4 ; i++){
            if(arr[i-1]==arr[i]){
                sum+=1;
            }
            else if(arr[i-1]==0){
                sum+=abs(10-arr[i]);
                sum++;
            }
            else if(arr[i]==0){
                sum+=abs(10-arr[i-1]);
                sum++;
            }
            else {
                sum+=abs(arr[i-1]-arr[i]);
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}