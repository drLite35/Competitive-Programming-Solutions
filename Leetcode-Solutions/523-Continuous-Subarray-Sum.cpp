#include <iostream>
using namespace std;
class Solution {
public:
  bool checkSubarraySum(vector<int> &nums, int k) {
    unordered_map<int, int> mp = {{0, -1}};
    int tot = 0;
    for (int i = 0; i < nums.size(); i++) {
      tot += nums[i];
      int r = tot % k;
      if (mp.count(r) == 0) {
        mp[r] = i;
      } else if (i - mp[r] > 1)
        return true;
    }
    return false;
  }
};
