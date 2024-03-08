#include <iostream>
using namespace std;
class Solution {
public:
  int mySqrt(int x) {
    if (x == 0 || x == 1)
      return x;
    int l = 1;
    int r = x;
    int mid;
    while (l <= r) {
      mid = l + (r - l) / 2;
      cout << l << " " << r << " " << mid << endl;
      long long square = static_cast<long long>(mid) * mid;
      if (square > x)
        r = mid - 1;
      else if (square == x)
        return mid;
      else
        l = mid + 1;
    }
    return round(r);
  }
};
