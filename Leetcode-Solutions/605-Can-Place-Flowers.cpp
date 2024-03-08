#include <vector>
using namespace std;
class Solution {
public:
  bool canPlaceFlowers(vector<int> &flowerbed, int n) {
    if (flowerbed.size() == 1) {
      if ((flowerbed[0] == 0 && (n == 1 || n == 0)) ||
          (flowerbed[0] == 1 && n == 0))
        return true;
      else
        return false;
    }
    for (int i = 0; i < flowerbed.size(); i++) {
      if ((i == 0 || flowerbed[i - 1] == 0) && flowerbed[i] == 0 &&
          (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {
        flowerbed[i] = 1;
        n--;
      }
    }
    return n <= 0;
  }
};
