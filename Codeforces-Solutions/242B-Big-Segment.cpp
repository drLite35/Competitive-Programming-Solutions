#include <climits>
#include <iostream>
using namespace std;
int main() {
  vector<pair<int, int>> v;
  int max = 0;
  int min = INT_MAX;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    int b;
    cin >> a >> b;
    if (min > a)
      min = a;
    if (max < b)
      max = b;
    v.push_back(make_pair(a, b));
  }
  int ans = -1;
  for (int i = 0; i < n; i++) {
    if (v[i].first == min && v[i].second == max) {
      ans = i + 1;
      break;
    }
  }
  cout << ans;
  return 0;
}
