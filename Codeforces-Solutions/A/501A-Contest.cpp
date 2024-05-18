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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int v = max((3*a/10) , a-((a/250)*c));
    int m = max((3*b/10) , b-((b/250)*d));
    if(v==m)cout<<"Tie";
    else if(v>m)cout<<"Misha";
    else cout<<"Vasya";
    return 0;
}