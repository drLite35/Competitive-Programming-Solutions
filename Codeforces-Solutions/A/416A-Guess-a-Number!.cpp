#include <iostream>
using namespace std;
int main() {
  int l = -2000000000;
  int r = 2000000000;
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    int a;
    cin >> a;
    char ch;
    cin >> ch;
    if (s == ">=" && ch == 'Y')
      l = max(a, l);
    if (s == ">=" && ch == 'N')
      r = min(a - 1, r);
    if (s == "<=" && ch == 'Y')
      r = min(a, r);
    if (s == "<=" && ch == 'N')
      l = max(a + 1, l);
    if (s == ">" && ch == 'Y')
      l = max(a + 1, l);
    if (s == ">" && ch == 'N')
      r = min(a, r);
    if (s == "<" && ch == 'Y')
      r = min(a - 1, r);
    if (s == "<" && ch == 'N')
      l = max(a, l);
  }

  if (l > r) {
    cout << "Impossible" << endl;
  } else if (l == r) {
    cout << l << endl;
  } else {
    cout << l + 1 << endl;
  }

  return 0;
}
