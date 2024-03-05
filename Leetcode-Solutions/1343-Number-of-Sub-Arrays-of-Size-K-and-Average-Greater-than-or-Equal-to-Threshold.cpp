#include <vector>
using namespace std;
class Solution {
public:
  int numOfSubarrays(vector<int> &arr, int k, int threshold) {
    int t = threshold * k;
    int w = 0;
    int ans = 0;
    for (int i = 0; i < k; i++) {
      w += arr[i];
    }
    if (w >= t)
      ans++;
    for (int i = k; i < arr.size(); i++) {
      w = w - arr[i - k] + arr[i];
      if (w >= t)
        ans++;
    }
    return ans;
  }
};
