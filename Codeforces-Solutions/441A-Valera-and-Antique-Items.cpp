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
    int n , mon;
    cin>>n>>mon;
    int len=0;
    int ans[n+1];
    for(int i=0 ; i<n+1 ; i++)ans[i]=0;
    for(int i=1 ; i<=n ; i++){
    	int l;
    	cin>>l;
    	while(l--){
    		int num;
    		cin>>num;
    		if(num<mon && ans[i]==0){
    			ans[i]=1;
    			len++;
    		}
    	}
    }
    cout<<len<<endl;
    for(int i=1 ; i<=n ; i++){
    	if(ans[i]==1)cout<<i<<" ";
    }
    return 0;

}