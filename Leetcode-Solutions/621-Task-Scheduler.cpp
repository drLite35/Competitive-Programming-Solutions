#include <iostream>
#include <queue>
using namespace std;
class Solution {
public:
  int leastInterval(vector<char> &tasks, int n) {
    unordered_map<char, int> mp;
    priority_queue<int> pq;
    deque<pair<int, int>> dq;
    for (auto ch : tasks) {
      mp[ch]++;
    }
    for (const auto &p : mp) {
      pq.push(p.second);
    }
    int ans = 0;
    while (!dq.empty() || !pq.empty()) {
      ans++;
      if (!pq.empty()) {
        int x = pq.top();
        x--;
        pq.pop();
        int y = ans + n;
        if (x != 0)
          dq.push_back(make_pair(x, y));
      }
      if (!dq.empty() && dq.front().second == ans) {
        pq.push(dq.front().first);
        dq.pop_front();
      }
    }
    return ans;
  }
};
