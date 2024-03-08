#include <iostream>
using namespace std;
class Solution {
public:
  int numUniqueEmails(vector<string> &emails) {
    unordered_map<string, int> mp;
    for (auto &em : emails) {
      string c;
      for (auto ch : em) {
        if (ch == '+' || ch == '@')
          break;
        if (ch == '.')
          continue;
        c += ch;
      }
      c += em.substr(em.find('@'));
      mp[c]++;
    }
    return mp.size();
  }
};
