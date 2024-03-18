#include <iostream>
using namespace std;
class Solution {
public:
  int findMinArrowShots(vector<vector<int>> &points) {
    sort(points.begin(), points.end());
    int ans = 1;
    int flag = points[0][1];
    for (int i = 1; i < points.size(); i++) {
      if (points[i][0] > flag) {
        ans++;
        flag = points[i][1];
      } else {
        flag = min(flag, points[i][1]);
      }
    }
    return ans;
  }
};
