#include <vector>
using namespace std;
class Solution {
public:
  // Function to find the days of buying and selling stock for max profit.
  vector<vector<int>> stockBuySell(vector<int> A, int n) {
    vector<vector<int>> ans;
    map<int, int> mp;
    for (int i = 0; i < n - 1; i++) {
      if (A[i + 1] - A[i] > 0) {
        mp[i]++;
        mp[i + 1]++;
      }
    }
    vector<int> a;
    for (const auto &p : mp) {
      if (p.second == 1)
        a.push_back(p.first);
    }
    for (int i = 0; i < a.size(); i++) {
      vector<int> tmp;
      tmp.push_back(a[i++]);
      tmp.push_back(a[i]);
      ans.push_back(tmp);
    }
    return ans;
  }
};
