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
    long long int l , r;
    cin>>l>>r;
    int rn = r-l+1;
    if(rn<3 || (l%2==1 && rn<4))cout<<-1;
    else{
    	if(l%2==0)cout<<l<<" "<<l+1<<" "<<l+2;
    	else cout<<l+1<<" "<<l+2<<" "<<l+3;
    }
return 0;
}
