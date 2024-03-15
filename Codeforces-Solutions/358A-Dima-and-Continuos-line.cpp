#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  bool flag = false;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1; j++) {
      int a = min(v[i], v[i + 1]);
      int b = max(v[i], v[i + 1]);
      int c = min(v[j], v[j + 1]);
      int d = max(v[j], v[j + 1]);
      if (a < c && c < b && b < d) {
        flag = true;
      }
    }
  }
  if (flag)
    cout << "yes";
  else
    cout << "no";
  return 0;
}
