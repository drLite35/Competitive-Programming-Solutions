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
    int l , d;
    cin>>l>>d;
    int arr[l];
    int sum=0;
    for(int i=0 ;i<l ; i++){
    	cin>>arr[i];
    	sum+=arr[i];
    }
    int les = (l-1)*10+sum;
    if(les>d){cout<<-1;}
    else{
    	cout<<((d-sum)/5);
    }
    return 0;
}