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
    int t;
    cin>>t;
    while(t--){
    	ll int n , k, q;
    	cin>>n>>k>>q;
    	ll int arr[n];
    	ll int ans=0;
    	for(ll int i=0 ; i<n ; i++)cin>>arr[i];
    	ll int count = 0;
    	for(ll int i=0 ; i<n ; i++){
    		if(arr[i]<=q){
    			count++;
    			continue;
    		}
    		else if(arr[i]>q){
    			if(count>=k){
    				ans+=((count-k+1)*(count-k+2))/2;
    			}
    			count=0;
    		}
    	}
    	if(count>=k){ans+=((count-k+1)*(count-k+2))/2;}
    	cout<<ans<<endl;
    }
    return 0;

}