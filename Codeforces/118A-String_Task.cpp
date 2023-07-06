#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string a;
    a+='.';
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]<95){
            s[i]+=32;
        }
    }
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')continue;
        else{
            a+=s[i];
            a+='.';
        }
    }
    a[a.size()-1]=' ';
    
    cout<<a;
    return 0;
}