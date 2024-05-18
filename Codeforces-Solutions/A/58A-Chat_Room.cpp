 #include <iostream>
using namespace std;
int main(){
 string s;
 cin>>s;
 string n = "hello";
 int j=0;
 for(int i=0 ; i<s.size() ;i++){
     if(s[i]==n[j])j++; 
 }
 if(j>=5)cout <<"YES";
 else cout <<"NO";
 return 0;
}