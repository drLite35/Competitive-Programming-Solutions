#include <iostream>
using namespace std;
class Solution {
public:
  int subarraySum(vector<int> &nums, int k) {
    unordered_map<int, int> mp = {{0, 1}};
    int ans = 0;
    int tot = 0;
    for (int i = 0; i < nums.size(); i++) {
      tot += nums[i];
      int tmp = tot - k;
      ans += mp[tmp];
      mp[tot]++;
    }
    return ans;
  }
};
