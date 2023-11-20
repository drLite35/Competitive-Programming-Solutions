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
    int l;
    cin>>l;
    int a[l];
    int ans=MAX_N;
    for(int i=0 ; i<l ; i++)cin>>a[i];
    for(int i=1 ; i<l-1 ; i++){
    	int d=0;
    	int t[l-1];
    	int p=0;
    	for(int j=0 ; j<l ; j++){
    		if(j!=i){
    			t[p]=a[j];
    			p++;
    		}
    	}
    	for(int j=0 ; j<l-2 ; j++){
    		if(t[j+1]-t[j]>d)d=t[j+1]-t[j];
    	}
    if(d<ans)ans=d;
    }
    cout<<ans;
    return 0;
}
