class Solution {
public:
  int numSubarraysWithSum(vector<int> &nums, int goal) {
    unordered_map<int, int> mp = {{0, 1}};
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < nums.size(); i++) {
      sum += nums[i];
      if (mp.count(sum - goal)) {
        cnt += mp[sum - goal];
      }
      mp[sum]++;
    }
    return cnt;
  }
};
