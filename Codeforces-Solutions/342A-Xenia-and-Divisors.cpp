#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int arr[8] = {0};
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    arr[a]++;
  }
  int tmp = 0;
  int ans[4] = {0};
  for (int i = 0; i < n / 3; i++) {
    if (arr[1] > 0 && arr[2] > 0 && arr[4] > 0) {
      ans[0]++;
      arr[1]--;
      arr[2]--;
      arr[4]--;
      continue;
    }
    if (arr[1] > 0 && arr[2] > 0 && arr[6] > 0) {
      ans[1]++;
      arr[1]--;
      arr[2]--;
      arr[6]--;
      continue;
    }
    if (arr[1] > 0 && arr[3] > 0 && arr[6] > 0) {
      ans[2]++;
      arr[1]--;
      arr[3]--;
      arr[6]--;
      continue;
    }
    tmp = 1;
    break;
  }
  if (tmp == 1)
    cout << -1;
  else {
    for (int i = 0; i < ans[0]; i++)
      cout << 1 << " " << 2 << " " << 4 << endl;
    for (int i = 0; i < ans[1]; i++)
      cout << 1 << " " << 2 << " " << 6 << endl;
    for (int i = 0; i < ans[2]; i++)
      cout << 1 << " " << 3 << " " << 6 << endl;
  }
  return 0;
}
