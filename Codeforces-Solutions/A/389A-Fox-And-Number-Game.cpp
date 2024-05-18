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


int gcd(int a , int b){
	if(b==0)return a;
	else return gcd(b , a%b);
}

int lcm(int a , int b){
	return a*b/gcd(a,b);
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int l;
    cin>>l;
    int arr[l];
    for(int i=0 ; i<l ; i++)cin>>arr[i];
    int res = arr[0]; 
    for(int i=1 ; i<l ; i++){
    	res = gcd(res , arr[i]);
    }
    cout<<res*l<<endl;
    return 0;
}