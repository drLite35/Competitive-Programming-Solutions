
#include <iostream>
using namespace std;
int main() {
  string s1, s2;
  bool flag = true;
  map<char, int> mp;
  getline(cin, s1);
  getline(cin, s2);

  for (char ch : s1)
    mp[ch]++;
  for (char ch : s2) {
    if (ch == ' ' || mp[ch] > 0) {
      mp[ch]--;
      continue;
    }
    flag = false;
    break;
  }

  if (flag)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
