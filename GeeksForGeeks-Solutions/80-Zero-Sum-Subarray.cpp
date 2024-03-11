#include <map>
using namespace std;
class Solution {
public:
  // Function to count subarrays with sum equal to 0.
  long long int findSubarray(vector<long long int> &arr, int n) {
    unordered_map<long long int, long long int> s = {{0, 1}};
    long long int ans = 0;
    long long int tmp = 0;
    long long int tot = 0;
    for (int i = 0; i < n; i++) {
      tot += arr[i];
      if (s.count(tot)) {
        ans += s[tot];
      }
      s[tot]++;
    }
    return ans;
  }
};
