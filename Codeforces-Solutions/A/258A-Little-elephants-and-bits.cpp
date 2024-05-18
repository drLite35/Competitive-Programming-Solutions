#include <iostream>
using namespace std;
int main() {
  string s;
  cin >> s;
  int tmp = s.size() - 1;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '0') {
      tmp = i;
      break;
    }
  }
  string a;
  for (int i = 0; i < s.size(); i++) {
    if (i == tmp)
      continue;
    a += s[i];
  }
  cout << a;
  return 0;
}
