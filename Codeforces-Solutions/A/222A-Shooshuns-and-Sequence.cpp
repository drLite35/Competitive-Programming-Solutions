#include <iostream>
using namespace std;
int main() {
  int n, k;
  cin >> n >> k;
  int tmp = 0;
  int count = 0;
  int a;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a == tmp) {
      count++;
    } else {
      count = 1;
    }
    tmp = a;
  }
  if (count + k > n)
    cout << n - count;
  else
    cout << -1;
  return 0;
}
