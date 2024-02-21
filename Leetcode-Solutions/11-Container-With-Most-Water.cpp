#include <vector>
using namespace std;
class Solution {
public:
  int maxArea(vector<int> &height) {
    int i = 0;
    int j = height.size() - 1;
    int ans = min(height[i], height[j]) * (j - i);
    while (i < j) {
      if (height[i] < height[j])
        i++;
      else
        j--;
      ans = ans < min(height[i], height[j]) * (j - i)
                ? min(height[i], height[j]) * (j - i)
                : ans;
    }
    return ans;
  }
};
