#include <vector>
using namespace std;
class Solution {
public:
  vector<vector<int>> fourSum(vector<int> &nums, int target) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    if (nums.size() < 4) {
      return ans;
    }
    for (int i = 0; i < nums.size() - 3; i++) {
      int tmp = 0;
      if (i > 0 && nums[i] == nums[i - 1])
        continue;
      for (int j = i + 1; j < nums.size() - 2; j++) {
        if (j > 1 && nums[j] == nums[j - 1] && tmp == 1)
          continue;
        int l = j + 1;
        int r = nums.size() - 1;
        while (l < r) {
          long long sum1 = nums[i] + nums[j];
          long long int sum = sum1 + nums[l] + nums[r];
          if (sum == target) {
            ans.push_back({nums[i], nums[j], nums[l], nums[r]});
            while (l < r && nums[l] == nums[l + 1])
              l++;
            l++;
          } else if (sum < target)
            l++;
          else
            r--;
        }
        tmp = 1;
      }
    }
    return ans;
  }
};
