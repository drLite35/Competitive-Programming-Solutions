#include <queue>
#include <string>
using namespace std;
class comp {
public:
  bool operator()(string &b, string &a) {
    if (a.size() != b.size())
      return a.size() < b.size();
    return a < b;
  }
};
class Solution {
public:
  string kthLargestNumber(vector<string> &nums, int k) {
    priority_queue<string, vector<string>, comp> pq;
    for (int i = 0; i < nums.size(); i++) {
      pq.push(nums[i]);
      if (pq.size() > k)
        pq.pop();
    }
    return pq.top();
  }
};
