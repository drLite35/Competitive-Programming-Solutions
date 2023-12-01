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
    int ct = n%2==0 ? n/2 : (n/2)+1;
    bool flag = false;
    int h[1001];
    for(int i=0 ; i<1001 ; i++)h[i]=0;
    for(int i=0 ; i<n ; i++){
    	int a;
    	cin>>a;
    	h[a]++;
    }
    for(int i=0 ; i<1001 ; i++){
    	if(h[i]>ct){
    		flag = true;
    		break;
    	}
    }
    if(flag)cout<<"NO";
    else cout<<"YES";
    return 0;
}