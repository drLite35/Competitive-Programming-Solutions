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
    int n,m;
    cin>>n>>m;
    string brr[n];
    for(int i=0 ; i<n ; i++)cin>>brr[i];
    bool arr[n];
    for(int i=0 ; i<n ; i++)arr[i]=false;
    for(int i=0 ; i<m ; i++){
    	int max=0;
    	char ch;
    	for(int j=0 ; j<n ; j++){
    		int c = brr[j][i]-'0';
    		if(max<=c){
    			max=c;
    			ch = brr[j][i];
    		}
    	}
    	for(int j=0 ; j<n ; j++){
    	    if(brr[j][i]==ch)arr[j]=true;
    	}
    	
    }
    int ans=0;
    for(int i=0 ; i<n ; i++){
    	if(arr[i])ans++;
    }
    cout<<ans;
    return 0;
}