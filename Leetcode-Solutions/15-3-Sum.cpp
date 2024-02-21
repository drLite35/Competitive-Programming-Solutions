#include <vector>
using namespace std;
class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < nums.size() - 2; i++) {
      if (i > 0 && nums[i] == nums[i - 1])
        continue;
      int l = i + 1;
      int r = nums.size() - 1;
      while (l < r) {
        int sum = nums[l] + nums[i] + nums[r];
        if (sum == 0) {
          ans.push_back({nums[i], nums[l], nums[r]});
          while (l < r && nums[l] == nums[l + 1])
            l++;
          l++;
        } else if (nums[l] + nums[i] + nums[r] < 0)
          l++;
        else
          r--;
      }
    }
    return ans;
  }
};
