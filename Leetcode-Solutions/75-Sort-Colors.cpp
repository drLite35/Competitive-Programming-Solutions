#include <vector>
using namespace std;
class Solution {
public:
  void sortColors(vector<int> &nums) {
    int n1 = 0, n2 = 0, n3 = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == 0)
        n1++;
      else if (nums[i] == 1)
        n2++;
      else
        n3++;
    }
    int a = 0;
    int i = 0;
    int j = n1;
    int k = n2 + n1;
    vector<int> ans(nums.size());
    while (a < nums.size()) {
      if (nums[a] == 0)
        ans[i++] = nums[a++];
      else if (nums[a] == 1)
        ans[j++] = nums[a++];
      else
        ans[k++] = nums[a++];
    }
    nums.assign(ans.begin(), ans.end());
  }
};
