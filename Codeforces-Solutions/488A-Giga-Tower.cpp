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

bool iseight(int t){
	bool flag = false;
	while(!flag && abs(t)>0){
		int cnt = t%10;
		if(cnt==-8 || cnt == 8)flag=true;
		else t/=10;
	}
	return flag;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    int ans=1;
    t+=1;
    while(!iseight(t)){
    	t++;
    	ans++;
    }
    cout<<ans;
    return 0;

}