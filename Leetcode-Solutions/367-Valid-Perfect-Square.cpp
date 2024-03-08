class Solution {
public:
  bool isPerfectSquare(int num) {
    if (num == 0 || num == 1)
      return true;
    int i = 1;
    int j = num;
    long long int mid;
    while (i <= j) {
      mid = i + (j - i) / 2;
      long long sq = mid * mid;
      if (sq == num)
        return true;
      else if (sq > num)
        j = mid - 1;
      else
        i = mid + 1;
    }
    return false;
  }
};
