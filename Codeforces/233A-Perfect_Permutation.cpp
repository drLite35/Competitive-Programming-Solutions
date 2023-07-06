
#include <iostream>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    if(tt%2==1)cout<<-1<<endl;
    else{
        int arr[tt];
        for(int i=0 ; i<tt ; i++){
            arr[i]=i+1;
        }
        for(int i=0 ; i<tt ; i++){
            swap(arr[i] , arr[i+1]);
            i++;
        }
        for(int i=0 ; i<tt ; i++){
            cout << arr[i]<<" ";
        }
        
    }
     return 0;
}