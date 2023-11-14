#include <iostream>
using namespace std;  
int main(){
    int t;
    cin>>t;
    while(t--){
        int len ;
        cin >> len;
        string s;
        cin >> s;
        int tmp=50;
        for(int i=0 ; i<len ; i++){
            tmp=50;
            for(int j=i ; j<len ; j++){
                if(s[i]!=s[j])tmp=0;
                if(tmp==0 && s[i]==s[j]){
                    tmp=2;
                    break;
                }
            }
            if(tmp==2)break;
        }
        if(tmp==2)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}