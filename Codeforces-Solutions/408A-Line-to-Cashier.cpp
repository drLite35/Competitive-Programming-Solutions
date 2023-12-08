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
    int ans = MAX_N;
    int arr[n];
    for(int i=0 ; i<n ; i++)cin>>arr[i];
    for(int i=0 ; i<n ; i++){
    	int tmp=0;
    	for(int j=0 ; j<arr[i] ; j++){
    		int k;
    		cin>>k;
    		tmp+=(k*5);
    		tmp+=15;
    	}
    	if(tmp<ans)ans=tmp;
    }
    cout<<ans;
    return 0;
}