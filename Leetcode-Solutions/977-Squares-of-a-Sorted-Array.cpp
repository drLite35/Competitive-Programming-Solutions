#include <vector>
using namespace std;
class Solution {
public:
  vector<int> sortedSquares(vector<int> &nums) {
    for (int &it : nums) {
      if (it < 0)
        it = it * (-1);
      it *= it;
    }
    sort(nums.begin(), nums.end());
    return nums;
  }
};
