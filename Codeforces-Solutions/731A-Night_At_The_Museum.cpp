#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ans =  (s[0]-'a')<=13 ? (s[0]-'a') : 26-(s[0]-'a');
    for(int i=1 ; i<s.size() ; i++){
        if(abs(s[i]-s[i-1])>13)ans+= 26- abs(s[i]-s[i-1]);
        else ans+=abs(s[i]-s[i-1]);
    }
    cout<<ans;
    return 0;
}