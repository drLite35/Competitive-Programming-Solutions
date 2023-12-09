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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    ll int l(0) , r(0);
    ll level = s.find('^');
    for(int i=0 ; i<level ; i++){
    	if(s[i]!='='){l+=(level-i)*(s[i]-'0');}
    }
    for(int i=level+1 ; i<s.size() ; i++){
    	if(s[i]!='='){r+=(i-level)*(s[i]-'0');}
    }
    if(r>l)cout<<"right";
    else if(r<l)cout<<"left";
    else cout<<"balance";
    return 0;
}