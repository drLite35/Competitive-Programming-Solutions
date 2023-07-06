#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int k;
    cin>>k;
    int h[26];
    for(int i=0 ; i<26; i++){
        h[i]=0;
    }
    string s;
    cin>>s;
    int min=10000;
    for(int i=0 ; i<s.size() ; i++){
        h[s[i]-97]++;
    }
    int tmp=0;
    for(int i=0 ; i<26 ; i++){
        if(h[i]%k!=0){
            tmp=1;
            break;
        }
    }
    if(tmp==1)cout<<-1;
    else{
        string a;
        for(int i=0 ; i<26 ; i++){
            if(h[i]!=0){
                h[i]/=k;
                for(int j=0;  j<h[i] ; j++){
                char c = i +'a';
                a+=c;}
            } 
        }
        string ans = a;
        for(int i=1 ; i<k ; i++){
            ans+=a;
        }
        cout<<ans;
    }
    return 0;
}