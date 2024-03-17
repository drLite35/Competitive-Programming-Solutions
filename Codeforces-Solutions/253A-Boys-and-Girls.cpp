#include <iostream>
using namespace std;
int main() {
  int b;
  int g;
  cin >> b >> g;
  string s;
  if (b == g) {
    while (b > 0) {
      s += "BG";
      b--;
    }
  } else if (b > g) {
    while (g > 0) {
      s += "BG";
      g--;
      b--;
    }
    while (b > 0) {
      s += "B";
      b--;
    }
  } else if (b < g) {
    while (b > 0) {
      s += "GB";
      g--;
      b--;
    }
    while (g > 0) {
      s += "G";
      g--;
    }
  }
  cout << s;
  return 0;
}
