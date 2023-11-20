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
    int arr[n][2];
    for(int i=0 ; i<n ; i++){
    	cin>>arr[i][0]>>arr[i][1];
    }
    bool a(false) , b(false);
    for(int i=0 ; i<n ; i++){
    	if(arr[i][0]>arr[i][1])a=true;
    	if(arr[i][0]<arr[i][1])b=true;
    	if(a && b)break;
    }
    if(a && b)cout<<"Happy Alex";
    else cout<<"Poor Alex";
    return 0;
}
