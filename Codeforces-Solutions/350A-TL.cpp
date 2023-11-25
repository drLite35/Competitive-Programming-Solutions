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
    int arr[n];
    int brr[m];
    for(int i=0 ; i<n ; i++){
    	cin>>arr[i];
    }
    sort(arr , arr+n);
    for(int i=0 ; i<m ; i++){
    	cin>>brr[i];
    }
    sort(brr , brr+m);
    int m1 = 2*arr[0];
    int m2 = brr[0];
    int m3 = arr[n-1];
    if(m1>=m2 || m3>=m2)cout<<-1;
    else cout<<max(m1,m3);
    return 0;

}
