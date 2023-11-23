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
    int n , x;
    cin>>n>>x;
    int arr[n][2];
    for(int i=0 ; i<n ; i++){
    	cin>>arr[i][0]>>arr[i][1];
    }
    int ans=n;
    ans+=(arr[0][0]-1)%x;
    ans+=arr[0][1]-arr[0][0];
    for(int i=1 ; i<n ; i++){
    	ans+=((arr[i][0]-arr[i-1][1]-1)%x);
    	ans+=arr[i][1]-arr[i][0];
    }
    cout<<ans;
    return 0;

}