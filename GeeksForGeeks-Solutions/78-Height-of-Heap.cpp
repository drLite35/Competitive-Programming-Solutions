#include <cmath>
class Solution {
public:
  int heapHeight(int N, int arr[]) {
    double s = log2(N);
    return floor(s);
  }
};
