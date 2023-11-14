#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int ans = 0;
    char a[n][m];
    for(int i=0 ; i<n ;i++){
        for(int j=0 ; j<m ;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0 ; i<n ;i++){
        int tmp = 0;
        for(int j=0 ; j<m ; j++){
            if(a[i][j]=='S'){
                tmp=0;
               break;
            }
            else tmp=1;
        }
        if(tmp==1){
            for(int k=0 ; k<m ;k++){
                a[i][k]='1';
                ans++;
            }
        }
    }
   
   for(int i=0 ; i<m ;i++){
        int tmp = 0;
        for(int j=0 ; j<n ; j++){
            if(a[j][i]=='S'){
                tmp=0;
               break;
            }
            else tmp=1;
        }
        if(tmp==1){
            for(int k=0 ; k<n ;k++){
                if(a[k][i]=='.'){
                a[k][i]='1';
                ans++;
                }
            }
        }
    }
    
    cout << ans;
    return 0;
}