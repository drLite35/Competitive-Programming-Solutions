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
    ll int t;
    cin>>t;
    ll int l;
    cin>>l;
    int count =0;
    if(l==t){
    	cout<<"YES"<<endl;
    	cout<<0;
    }
    else{
    while(true){
    	if(l%t!=0){
    		cout<<"NO";
    		break;
    	}
    	count++;
    	l/=t;
    	if(l==t){
    		cout<<"YES"<<endl;
    		cout<<count;
    		break;
    	}
    	if(l<t){
    		cout<<"NO";
    		break;
    	}
    }}
return 0;
}