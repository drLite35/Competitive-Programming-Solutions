#include <queue>
using namespace std;
class Solution {
public:
  int lastStoneWeight(vector<int> &stones) {
    priority_queue<int> pq;
    for (auto x : stones) {
      pq.push(x);
    }
    int n = stones.size();
    while (pq.size() > 1) {
      int f = pq.top();
      pq.pop();
      int s = pq.top();
      pq.pop();
      if (f - s > 0)
        pq.push(f - s);
    }
    if (pq.size() == 1)
      return pq.top();
    return 0;
  }
};
