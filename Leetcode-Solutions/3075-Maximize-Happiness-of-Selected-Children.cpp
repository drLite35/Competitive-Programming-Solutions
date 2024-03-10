#include <queue>
#include <vector>
using namespace std;
class Solution {
public:
  long long maximumHappinessSum(vector<int> &happiness, int k) {
    long long ans = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (auto i : happiness) {
      pq.push(i);
      if (pq.size() > k)
        pq.pop();
    }
    k--;
    while (!pq.empty()) {
      ans += pq.top() - k > 0 ? pq.top() - k : 0;
      pq.pop();
      k--;
    }
    return ans;
  }
};
