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
    string a;
    cin>>a;
    int h[26];
    for(int i=0 ; i<26 ; i++)h[i]=0;
    for(int i=0 ; i<a.size() ; i++){
    	h[a[i]-97]++;
    }
    int e(0) , o(0);
    int s =0;
    for(int i=0 ; i<26 ; i++){
    	if(h[i]%2==0 && h[i]!=0)e++;
    	else if (h[i]%2!=0)o++;
    }
    if(o==0)cout<<"First";
    else{
    	s=o-1;
    	if(s%2==0)cout<<"First";
    	else cout<<"Second";
    }
    return 0;
}
