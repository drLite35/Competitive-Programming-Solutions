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
    vector<int>p(5);
    p[0]=1;p[1]=2;p[2]=3;p[3]=4;p[4]=5;
    int g[5][5];
    for(int i=0 ;  i<5 ; i++){
    	for(int j=0 ; j<5 ; j++){
    		cin>>g[i][j];
    	}
    }
    long long int ans=0;
    do{
    	ll int tmp=0;
    	tmp += g[p[0]-1][p[1]-1] + g[p[1]-1][p[0]-1] + g[p[2]-1][p[3]-1] + g[p[3]-1][p[2]-1]
            + g[p[1]-1][p[2]-1] + g[p[2]-1][p[1]-1] + g[p[3]-1][p[4]-1] + g[p[4]-1][p[3]-1]
            + g[p[2]-1][p[3]-1] + g[p[3]-1][p[2]-1] + g[p[3]-1][p[4]-1] + g[p[4]-1][p[3]-1];

       if(tmp>ans)ans=tmp;
       
    }while(next_permutation(p.begin() , p.end()));
    cout<<ans;
    return 0;
}