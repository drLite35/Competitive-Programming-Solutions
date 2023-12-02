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
    int n;
    cin>>n;
    n*=2;
    bool flag = true;
    int h[127];
    for(int i=0 ; i<127 ; i++)h[i]=0;
    char mat[4][4];
    for(int i=0 ; i<4 ; i++){
    	for(int j=0 ; j<4 ; j++){
    		char c;
    		cin>>c;
    		if(c=='.')continue;
    		else h[c]++;
    	}
    }
    for(int i=0 ; i<127 ; i++){
    	if(h[i]>n)flag = false;
    }
    if(flag)cout<<"YES";
    else cout<<"NO";
return 0;
}