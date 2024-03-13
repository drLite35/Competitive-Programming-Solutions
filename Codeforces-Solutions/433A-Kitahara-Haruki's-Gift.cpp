#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int c1 = 0;
  int c2 = 0;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    sum += a;
    if (a == 100)
      c1++;
    else
      c2++;
  }
  sum /= 2;
  bool f = false;
  while (c2 > 0 && sum > 0) {
    sum -= 200;
    c2--;
    if (sum == 0) {
      f = true;
      break;
    } else if (sum < 0) {
      sum += 200;
      c2++;
      break;
    }
  }
  while (c1 > 0 && sum > 0) {
    sum -= 100;
    c1--;
    if (sum == 0) {
      f = true;
      break;
    } else if (sum < 0) {
      sum += 100;
      c1++;
      break;
    }
  }
  if (f)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
