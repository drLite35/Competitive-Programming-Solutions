#include <iostream>
#include <algorithm>
using namespace std;
bool solve(string s){
    int len = s.size();
    if(s[0]!='1')return 0;
    else if(s[len-1]!='1' && s[len-1]!='4' )return 0;
    else{
        for(int i=1 ; i<len-1 ; i++){
            if(s[i]!='1' && s[i]!='4')return 0;
            else if(s[i]=='4'){
                if(s[i-1]=='4' && s[i+1]=='4')return 0;
            }
        }
    }
    return 1;
}
int main(){
    string s;
    cin>>s;
    bool l = solve(s);
    if(l)cout<<"YES";
    else cout<<"NO";
    return 0;
}
//or and condiitions