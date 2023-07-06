#include <iostream>
using namespace std;
int main(){
    int r , c;
    cin>>r>>c;
    char a[r][c];
    int tmp=0;
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            if(a[i][j]=='C' || a[i][j]=='M' || a[i][j]=='Y'){
                tmp=1;
                break;
            }
        }
        if(tmp==1)break;
    }
    if(tmp==1)cout<<"#Color";
    else cout<<"#Black&White";
    return 0;
}