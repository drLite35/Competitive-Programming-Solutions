#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int c;
        cin>>c;
        char arr[2][c];
        for(int i=0 ; i<2 ; i++){
            for(int j=0 ; j<c ; j++){
                cin>>arr[i][j];
                
            }
        }
        for(int i=0 ; i<2 ; i++){
            for(int j=0 ; j<c ; j++){
                if(arr[i][j]=='G')arr[i][j]='B';
            }
        }
        int tmp=0;
        for(int j=0 ; j<c ; j++){
            if(arr[0][j]!=arr[1][j])tmp=1;
        }
        if(tmp==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }
    return 0;
}