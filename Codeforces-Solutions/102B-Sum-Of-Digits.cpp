#include <iostream>
using namespace std;

long long int solve(long long int a){
    int sum=0;
    while(a>0){
     sum+=a%10;
     a/=10;
    }
    return sum;
}

int main(){
    string s;
    cin>>s;
    int sum(0) , ans(1);
    for(int i=0 ; i<s.size() ; i++)sum+=s[i]-'0';
    while(sum>9){
        ans++;
        sum = solve(sum);
    }
    if(s.size()==1)cout<<0;
    else cout<<ans;
    return 0;
}