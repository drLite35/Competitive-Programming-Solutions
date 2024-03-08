class Solution {
public:
  int arrangeCoins(int n) {
    int l = 1;
    int r = n;
    int mid;
    int ans = 0;
    while (l <= r) {
      mid = l + (r - l) / 2;
      double c = (mid / 2.0) * (mid + 1);
      if (c == n)
        return mid;
      else if (c > n)
        r = mid - 1;
      else {
        ans = mid;
        l = mid + 1;
      }
    }
    return ans;
  }
};
