#include <iostream>
using namespace std;

int main() {
  string a, b;
  getline(cin, a);
  getline(cin, b);
  int cnt = 0;
  if (a.size() != b.size()) {
    cout << "NO";
  } else {
    for (int i = 0; i < a.size(); i++) {
      if (a[i] != b[i]) {
        cnt++;
      }
    }
    if (cnt != 2) {
      cout << "NO";
    } else {
      sort(a.begin(), a.end());
      sort(b.begin(), b.end());
      if (a != b) {
        cout << "NO";
      } else {
        cout << "YES";
      }
    }
  }
  return 0;
}
