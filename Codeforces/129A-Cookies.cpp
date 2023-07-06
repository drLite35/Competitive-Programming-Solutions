#include <iostream>
using namespace std;
int main(){
    int len ;
    cin >> len ;
    int arr[len];
    for(int i=0 ; i<len ;i++)cin >> arr[i];
    if(len ==1)cout << 1;
    else{
        int odd = 0;
        int ev = 0;
        for(int i=0 ; i<len ;i++){
            if(arr[i]%2==1)odd++;
            else ev++;
        }
        if(odd%2==0)cout<<ev;
        else cout<<odd;
    }
    return 0;
}