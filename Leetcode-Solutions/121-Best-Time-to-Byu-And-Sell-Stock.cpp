#include <vector>
using namespace std;
class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int max = 0;
    int f = prices[0];
    for (const auto &i : prices) {
      if (i < f)
        f = i;
      else {
        if (max < (i - f))
          max = i - f;
      }
    }
    return max;
  }
};
