#include <queue>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> findClosestElements(vector<int> &arr, int k, int x) {
    priority_queue<pair<int, int>> pq;
    vector<int> v;
    for (int i = 0; i < arr.size(); i++) {
      pq.push({abs(arr[i] - x), arr[i]});
      if (pq.size() > k)
        pq.pop();
    }
    priority_queue<int, vector<int>, greater<int>> q;
    while (!pq.empty()) {
      q.push(pq.top().second);
      pq.pop();
    }
    while (!q.empty()) {
      v.push_back(q.top());
      q.pop();
    }
    return v;
  }
};
