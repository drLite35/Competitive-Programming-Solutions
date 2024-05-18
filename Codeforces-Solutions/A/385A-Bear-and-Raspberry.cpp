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
    ll int l , n;
    cin>>l>>n;
    ll int arr[l];
    for(ll int i=0 ; i<l ; i++){
    	cin>>arr[i];
    }
    int max=0;
    for(ll int i=0; i<l-1 ; i++){
    	if(arr[i]-arr[i+1]-n>max)max=arr[i]-arr[i+1]-n;
    } 
    cout<<max;
    return 0;
}