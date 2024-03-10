#include <vector>
using namespace std;
class Solution {
public:
  int minimumBoxes(vector<int> &apple, vector<int> &capacity) {
    int tot = 0;
    for (auto i : apple)
      tot += i;
    sort(capacity.begin(), capacity.end(), greater<int>());
    int ans = 0;
    for (auto i : capacity) {
      if (tot <= 0)
        return ans;
      tot -= i;
      ans++;
    }
    return ans;
  }
};
