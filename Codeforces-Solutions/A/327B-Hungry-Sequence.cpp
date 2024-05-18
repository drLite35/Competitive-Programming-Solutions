
#include <iostream>
using namespace std;

bool isprime(int n) {
  if (n <= 1)
    return false;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main() {
  int a;
  cin >> a;
  int cnt = 0;
  int i = 2;
  while (cnt < a) {
    if (isprime(i)) {
      cout << i << " ";
      cnt++;
    }
    i++;
  }
  return 0;
}
