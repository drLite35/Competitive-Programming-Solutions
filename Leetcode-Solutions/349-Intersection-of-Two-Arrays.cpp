#include <set>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
    vector<int> ans;
    unordered_set<int> mp;
    unordered_set<int> ms;
    for (auto i : nums1) {
      mp.insert(i);
    }
    for (auto i : nums2) {
      if (mp.count(i))
        ms.insert(i);
    }
    for (auto i : ms)
      ans.push_back(i);
    return ans;
  }
};
