#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
  int numSubseq(vector<int> &nums, int target) {
    sort(nums.begin(), nums.end());
    long long int res = 0;
    int r = nums.size() - 1;
    int mod = 1e9 + 7;
    vector<long long> powers(r + 1);
    powers[0] = 1;
    for (int i = 1; i <= r; i++) {
      powers[i] = (powers[i - 1] * 2) % mod;
    }
    for (int i = 0; i <= r; i++) {
      while (r >= i && nums[i] + nums[r] > target)
        r--;
      if (r < i)
        break;
      res += powers[r - i];
      res %= mod;
    }
    return res;
  }
};
