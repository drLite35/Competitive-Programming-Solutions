#include <iostream>
using namespace std;
class Solution {
public:
  int minSubArrayLen(int target, vector<int> &nums) {
    int win = INT_MAX;
    int tot = 0;
    int l = 0;
    for (int i = 0; i < nums.size(); i++) {
      tot += nums[i];
      int tmp = win;
      while (l <= i && tot >= target) {
        tmp = i - l + 1;
        win = min(win, tmp);
        tot -= nums[l++];
      }
    }
    if (win == INT_MAX)
      return 0;
    else
      return win;
  }
};
