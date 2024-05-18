#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <bitset>         
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;
#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;

string s(int n){
        if(n==0)return "O-|-OOOO";
        if(n==1)return "O-|O-OOO";
        if(n==2)return "O-|OO-OO";
        if(n==3)return "O-|OOO-O";
        if(n==4)return "O-|OOOO-";
        if(n==5)return "-O|-OOOO";
        if(n==6)return "-O|O-OOO";
        if(n==7)return "-O|OO-OO";
        if(n==8)return "-O|OOO-O";
        if(n==9)return "-O|OOOO-";
}

void solve(int n){
    while(n>0){
        cout<<s(n%10)<<endl;
        n/=10;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    if(n==0)cout<<s(n);
    solve(n);
    return 0;
}