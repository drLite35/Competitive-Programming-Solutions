class Solution {
public:
  int pivotInteger(int n) {
    if (n == 1)
      return 1;
    if (n == 2)
      return -1;
    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += i + 1;
    }
    int cur = 0;
    for (int i = 1; i <= n; i++) {
      cur += i;
      sum -= i - 1;
      if (cur == sum)
        return i;
    }
    return -1;
  }
};
