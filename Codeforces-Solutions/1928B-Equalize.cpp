#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    set<int> s;
    vector<int> v;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      s.insert(a);
    }
    for (const auto &e : s) {
      v.push_back(e);
    }
    int ans = 0;
    for (int i = 0; i < v.size(); i++) {
      int a = (lower_bound(v.begin(), v.end(), v[i] + n) - v.begin()) - i;
      ans = max(ans, a);
    }
    cout << ans << endl;
  }
}
