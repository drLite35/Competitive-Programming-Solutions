#include <iostream>
using namespace std;
class Solution {
public:
  int numSubarrayProductLessThanK(vector<int> &nums, int k) {
    int i = 0;
    int j = 0;
    int ans = 0;
    int pr = nums[j++];
    while (j < nums.size() || i < nums.size()) {
      if (pr >= k) {
        pr /= nums[i];
        ans += j - i - 1;
        i++;
        if (i >= j && j < nums.size())
          pr *= nums[j++];
      } else if (j < nums.size())
        pr *= nums[j++];
      else
        break;
    }
    ans += ((j - i + 1) * (j - i)) / 2;
    return ans;
  }
};
