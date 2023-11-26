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
    int odd = 0;
    if(n==1){
    	int a , b;
    	cin>>a>>b;
    	if(a%2==1 || b%2==1)cout<<-1;
    	else cout<<0;
    }
    else{
    	int sumu=0;
    	int sumd=0;
    for(int i=0 ; i<n ; i++){
    	int a , b;
    	cin>>a>>b;
    	sumu+=a;
    	sumd+=b;
    	int sum = a+b;
    	if(sum%2==1)odd++;
    }
    if(sumu%2==0 && sumd%2==0)cout<<0;
    else if(odd%2==1 || (odd==0 && (sumu%2==1 || sumd%2==1)))cout<<-1;
    else cout<<1;}
    return 0;
}