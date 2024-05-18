#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  string a = s.substr(0, n);
  string b = s.substr(n);
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  bool flag = true;
  if (n == 1) {
    if (a[0] == b[0])
      flag = false;
  }
  for (int i = 0; i < (n)-1; i++) {
    if (a[i] == b[i]) {
      flag = false;
      break;
    }
    if ((a[i] > b[i] && a[i + 1] <= b[i + 1]) ||
        (a[i] < b[i] && a[i + 1] >= b[i + 1])) {
      flag = false;
      break;
    }
  }
  if (flag)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
