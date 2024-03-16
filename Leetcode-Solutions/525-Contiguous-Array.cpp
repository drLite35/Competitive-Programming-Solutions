#include <iostream>
using namespace std;
class Solution {
public:
  int findMaxLength(vector<int> &nums) {
    unordered_map<int, int> mp;
    int ans = 0;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == 0)
        sum -= 1;
      else
        sum += 1;

      if (sum == 0)
        ans = i + 1;
      else if (mp.count(sum)) {
        ans = max(ans, i - mp[sum]);
      } else
        mp[sum] = i;
    }
    return ans;
  }
};
