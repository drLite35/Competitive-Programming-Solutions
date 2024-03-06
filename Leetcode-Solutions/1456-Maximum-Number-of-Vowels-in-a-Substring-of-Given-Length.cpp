#include <set>
using namespace std;
class Solution {
public:
  int maxVowels(string s, int k) {
    set<char> ch = {'a', 'e', 'i', 'o', 'u'};
    int cnt = 0;
    int l = 0;
    int res = 0;
    for (int i = 0; i < s.size(); i++) {
      if (i - l + 1 > k) {
        if (ch.count(s[l])) {
          cnt--;
        }
        l++;
      }
      if (ch.count(s[i]))
        cnt++;
      res = max(res, cnt);
    }
    return res;
  }
};
