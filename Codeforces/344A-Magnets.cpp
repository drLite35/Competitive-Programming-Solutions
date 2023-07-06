#include <iostream>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    int ans=0;
    string s[tt];
    for(int i=0 ; i<tt ;i++){
        cin>>s[i];
    }
    for(int i=0 ; i<tt-1 ;i++){
        if(s[i]!=s[i+1])ans++;
    }
    cout << ans;
    return 0;
    
}