#include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    
    int x[n] , y[n];
    
    int ans = 0;
    
    for(int i=0 ; i<n ; i++){
        cin >> x[i] >> y[i];
    }
    
    for(int i=0 ; i<n ; i++){
        bool r = false;
        bool l = false;
        bool u = false;
        bool d = false;
        
        for(int j=0 ; j<n ; j++){
            if(x[j]>x[i] && y[j]==y[i])r=true;
            if(x[j]<x[i] && y[j]==y[i])l=true;
            if(x[j]==x[i] && y[j]>y[i])u=true;
            if(x[j]==x[i] && y[j]<y[i])d=true;
        }
        if(r && l && u && d)ans++;
        
    }
    cout << ans;
    return 0;
}