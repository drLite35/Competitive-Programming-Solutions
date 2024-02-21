#include <vector>
using namespace std;
class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    int i = 0;
    int j = numbers.size() - 1;
    vector<int> ans;
    while (true) {
      int sum = numbers[i] + numbers[j];
      if (sum == target) {
        ans.push_back(i + 1);
        ans.push_back(j + 1);
        break;
      }
      if (sum > target) {
        j--;
      } else
        i++;
    }
    return ans;
  }
};
