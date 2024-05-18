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
     ll int y  , k , n;
     cin>>y>>k>>n;
     ll int x = k-y%k;
     if(x+y>n)cout<<-1;
     else{
     	cout<<x<<" ";
     	x+=k;
     	while(x+y<=n){
     		cout<<x<<" ";
     		x+=k;
     	}
     } 
     return 0;
 }