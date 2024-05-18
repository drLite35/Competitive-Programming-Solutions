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

ll int func(string s ,char c1 , char c2 , ll int xd , ll int yd){
	int count = 0;
	for(int i=0 ; i<s.size() ;i++){
		if(xd<=0 && yd<=0)return count;
		else{
			count++;
			if(s[i]==c1){
				xd--;
			
			}
			else if(s[i]==c2){
				yd--;
			}
		}
	}
	if(xd<=0 && yd<=0)return count;
	return -1;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll int t;
    cin>>t;
    ll int x1 , y1 , x2 , y2;
    cin>>x1>>y1>>x2>>y2;
    string s;
    cin>>s;
    ll int xd = x2 - x1;
    ll int yd = y2 - y1;
    char c1 = xd>0?'E' : 'W';
    char c2 = yd>0?'N' : 'S';
    cout<<func(s , c1 , c2 , abs(xd) , abs(yd));
    return 0;
}