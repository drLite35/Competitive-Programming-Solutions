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
    int n , a, b, c;
    cin>>n>>a>>b>>c;
    int ans=0;
    for(int x=0; x<=4000 ; x++){
    	for(int y=0 ; y<=4000 ; y++){
    		int zc = n - (x*a + y*b);
    		// if(zc<0)break;
    		int z = zc/c;
    		if (zc%c==0 && zc>=0) {ans = max(ans, (x + y + z));}
    	}
    }
    cout<<ans;
    return 0;
}
