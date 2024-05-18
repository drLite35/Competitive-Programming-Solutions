#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string ans = "";
        ans+=s[0];
        int len = s.size();
        for(int i=1 ; i<len-2 ;i++){
            if(i%2==1)ans+= s[i];
        }
        ans+=s[len-1];
        cout<<ans<<endl;
    }
    return 0;
}