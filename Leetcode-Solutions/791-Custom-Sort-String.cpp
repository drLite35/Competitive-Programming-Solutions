#include <iostream>
using namespace std;
class Solution {
public:
  string customSortString(string order, string s) {
    unordered_map<char, int> mp;
    for (auto i : s) {
      mp[i]++;
    }
    string ans;
    for (auto i : order) {
      if (mp.count(i)) {
        while (mp[i]--) {
          ans += i;
        }
        mp.erase(i);
      }
    }
    for (const auto &p : mp) {
      auto tmp = p;
      while (tmp.second > 0) {
        ans += tmp.first;
        tmp.second--;
      }
    }
    return ans;
  }
};
