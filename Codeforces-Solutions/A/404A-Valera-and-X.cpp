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
    bool f = true;
    char a , b;
    cin>>a>>b;
    if(a==b)cout<<"NO";
    else{
    	for(int i=0 ; i<n ; i++){
    		for(int j=0 ; j<n ; j++){
    			if(i==0 && (j==0 || j==1))continue;
    			char x;
    			cin>>x;
    			if(i==j || (i+j==n-1)){
    				if(x!=a){f=false;
    				break;}
    			}
    			else{
    				if(x!=b){f=false;
    				break;}
    			}
    		}
    		if(!f)break;
    	}
    	if(f)cout<<"YES";
    	else cout<<"NO";
    }
return 0;
}