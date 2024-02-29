#include <queue>
#include <set>
#include <vector>
using namespace std;
class Solution {
public:
  vector<vector<int>> kClosest(vector<vector<int>> &points, int k) {
    priority_queue<int> pq;
    for (int i = 0; i < points.size(); i++) {
      int l = (points[i][0] * points[i][0]) + (points[i][1] * points[i][1]);
      pq.push(l);
      if (pq.size() > k)
        pq.pop();
    }
    unordered_set<int> s;
    for (int i = 0; i < k; i++) {
      s.insert(pq.top());
      pq.pop();
    }
    vector<vector<int>> ans;
    for (int i = 0; i < points.size(); i++) {
      int l = (points[i][0] * points[i][0]) + (points[i][1] * points[i][1]);
      if (s.find(l) != s.end()) {
        ans.push_back({points[i][0], points[i][1]});
        pq.pop();
      }
    }
    return ans;
  }
};
