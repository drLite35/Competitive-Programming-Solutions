#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s1;
    cin>>s1;
    string s2;
    int t1=1;
    int t2=0;
    for(int i=1 ; i<t ; i++){
        string s;
        cin>>s;
        if(s==s1)t1++;
        else{
            s2=s;
            t2++;
        }
    }
    if(t1>t2)cout<<s1;
    else cout<<s2;
    return 0;
}