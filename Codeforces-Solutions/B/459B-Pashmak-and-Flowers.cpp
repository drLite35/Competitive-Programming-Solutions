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
    long long int n;
    cin>>n;
    ll int arr[n];
    for(ll int i=0 ; i<n ; i++){
    	cin>>arr[i];
    }
    sort(arr , arr+n);
    ll int ans = arr[n-1]-arr[0];
    if(ans==0){
    	cout<<ans<<" "<<(n*(n-1))/2;
    }
    else{
    	ll int max=0;
    	ll int min=0;
    	for(int i=0 ; i<n ; i++){
    		if(arr[i]==arr[0])min++;
    		if(arr[i]==arr[n-1])max++;
    	}
    	ll an = min*max;
    	cout<<ans<<" "<<an;
    }
    return 0;
}
