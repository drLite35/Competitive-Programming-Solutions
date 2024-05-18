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
    int n , m;
    cin>>n>>m;
    char mp[n][m];
    for(int i=0; i<n ; i++){
    	for(int j=0 ; j<m ;j++){
    		cin>>mp[i][j];
    		if((i+j)%2==0 && mp[i][j]=='.')mp[i][j]='W';
    		else if((i+j)%2==1 && mp[i][j]=='.')mp[i][j]='B';
    	}
    }
    for(int i=0 ; i<n ; i++){
    	for(int j=0 ; j<m ; j++){
    		cout<<mp[i][j];
    	}
    	cout<<endl;
    }
return 0;
}