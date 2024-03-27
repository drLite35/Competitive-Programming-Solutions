#include <iostream>
using namespace std;
class Solution {
public:
  int maxSubarrayLength(vector<int> &nums, int k) {
    unordered_map<int, int> mp;
    int ans = 0;
    int l = 0;
    for (int i = 0; i < nums.size(); i++) {
      mp[nums[i]]++;
      if (mp[nums[i]] > k) {
        while (nums[l] != nums[i]) {
          mp[nums[l++]]--;
        }
        mp[nums[l++]]--;
      }
      ans = max(ans, i - l + 1);
    }
    return ans;
  }
};
