#include <iostream>
using namespace std;
class Solution {
public:
  vector<vector<int>> insert(vector<vector<int>> &intervals,
                             vector<int> &newInterval) {
    int i = 0;
    int l = intervals.size();
    vector<vector<int>> ans;
    if (l == 0) {
      ans.push_back(newInterval);
      return ans;
    }
    if (newInterval[0] > intervals[l - 1][1]) {
      intervals.push_back(newInterval);
      return intervals;
    }
    for (; i < l; i++) {
      if (newInterval[1] < intervals[i][0]) {
        ans.push_back(newInterval);
        newInterval.clear();
        break;
      } else if (newInterval[0] > intervals[i][1]) {
        ans.push_back(intervals[i]);
      } else {
        newInterval[0] = min(newInterval[0], intervals[i][0]);
        newInterval[1] = max(newInterval[1], intervals[i][1]);
      }
    }
    if (ans.empty() || !(newInterval.empty())) {
      ans.push_back(newInterval);
    }
    while (i < l) {
      ans.push_back(intervals[i++]);
    }
    return ans;
  }
};
