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
    int n , x;
    cin>>n;
    map<int , vector<int>> mp;
    for(int i=0 ; i<n ; i++){
        cin>>x;
        mp[x].push_back(i);
    }

    vector<pair<int , int>>ans;
    map<int , vector<int>>::iterator p = mp.begin();

    while(p!=mp.end()){
        int k = p->first;
        if(mp[k].size()==1)ans.push_back({k , 0});
        else{
            set<int>s;
            for(int i=1 ; i<mp[k].size(); i++ ){
                s.insert(abs(mp[k][i]-mp[k][i-1]));}
            if(s.size()==1){
                set<int>::iterator q=s.begin();
                ans.push_back({k , *q});
            }
        }
        p++;
    }
    cout<<ans.size()<<endl;
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    return 0;
}