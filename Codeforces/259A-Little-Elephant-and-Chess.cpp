#include <iostream>
using namespace std;
int main(){
    char arr[8][8];
    for(int i=0 ; i<8 ; i++){
        for(int j=0 ; j<8 ; j++){
            cin>>arr[i][j];
        }
    }
    int tmp=0;
    for(int i=0 ; i<8 ; i++){
        for(int j=1 ; j<8 ; j++){
            if(arr[i][j]==arr[i][j-1])tmp=1;
        }
        if(tmp==1)break;
    }
    if(tmp==1)cout<<"NO";
    else cout<<"YES";
    return 0;
}