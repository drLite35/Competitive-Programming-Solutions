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
    int k , n;
    cin>>k>>n;
    if(n==0 && k>1)cout<<"No solution";
    else {
    	string s= to_string(n);
    	k--;
    	while(k--){
    		s+='0';
    	}
    	cout<<s;
    }
    return 0;
}
