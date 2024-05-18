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
    bool flag = false;
    int m , n;
    cin>>m>>n;
    for(int i=0 ; i<m ; i++){
    	for(int j=0 ; j<n ; j++){
    		int a;
    		cin>>a;
    		if(a==1 && (i==m-1 || j==n-1 || i==0 || j==0))flag=true;
    	}
    }
    int ans=4;
    if(flag)cout<<ans/2;
    else cout<<ans;
    return 0;

}
