#include <iostream>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        string s;
        cin >> s;
        int len = s.size();
        if(len%2==1)cout<<"NO"<<endl;
        else{
            int tmp = 0;
            for(int i=0 ; i<len/2 ; i++){
                if(s[i]!=s[(len/2)+i]){
                    tmp=1;
                    break;
                }
            }
           if(tmp==1)cout<<"NO"<<endl;
           else cout<<"YES"<<endl;
        }
    }
    return 0;
}