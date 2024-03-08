#include <map>
using namespace std;
class Solution {
public:
  int maxFrequencyElements(vector<int> &nums) {
    unordered_map<int, int> mp;
    for (auto it : nums) {
      mp[it]++;
    }
    int max = 0;
    for (const auto &p : mp) {
      if (p.second > max)
        max = p.second;
    }
    int ans = 0;
    for (const auto &p : mp) {
      if (p.second == max)
        ans += max;
    }
    return ans;
  }
};
