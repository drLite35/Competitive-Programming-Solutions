#include <vector>
using namespace std;
class Solution {
public:
  int findDuplicate(vector<int> &nums) {
    vector<bool> flag(nums.size(), false);
    int ans = -1;
    for (int i = 0; i < nums.size(); i++) {
      if (flag[nums[i]]) {
        ans = nums[i];
        break;
      }
      flag[nums[i]] = true;
    }
    return ans;
  }
};
