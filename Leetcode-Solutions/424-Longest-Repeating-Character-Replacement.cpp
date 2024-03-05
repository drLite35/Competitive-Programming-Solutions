#include <map>
using namespace std;
class Solution {
public:
  int characterReplacement(string s, int k) {
    unordered_map<char, int> ch;
    int l = 0;
    int res = 0;
    int mf = 0;
    for (int i = 0; i < s.size(); i++) {
      ch[s[i]]++;
      mf = max(mf, ch[s[i]]);
      if (i - l + 1 - mf > k) {
        ch[s[l++]]--;
      }
      res = max(res, i - l + 1);
    }
    return res;
  }
};
