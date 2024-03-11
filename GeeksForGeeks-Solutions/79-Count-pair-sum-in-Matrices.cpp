#include <vector>
using namespace std;
class Solution {
public:
  int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n,
                 int x) {
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        a.push_back(mat1[i][j]);
        b.push_back(mat2[i][j]);
      }
    }
    int pairs = 0;
    int i = 0;
    int j = n * n - 1;
    while (i < n * n && j >= 0) {
      int sum = a[i] + b[j];
      if (sum == x) {
        pairs++;
        i++;
        j--;
      } else if (sum > x)
        j--;
      else
        i++;
    }
    return pairs;
  }
};
