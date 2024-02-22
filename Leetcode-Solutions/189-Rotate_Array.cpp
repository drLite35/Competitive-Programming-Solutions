#include <vector>
using namespace std;
class Solution {
public:
  void rotate(vector<int> &nums, int k) {
    k = k % nums.size();
    if (k == 0)
      return;
    else {
      int i = 0;
      int r = nums.size() - 1;
      while (i < r) {
        swap(nums[i], nums[r]);
        i++;
        r--;
      }
      i = 0;
      int j = k - 1;
      r = k;
      int l = nums.size() - 1;
      while (i < j) {
        swap(nums[i], nums[j]);
        i++;
        j--;
      }
      while (r < l) {
        swap(nums[r], nums[l]);
        r++;
        l--;
      }
    }
  }
};
