#include <iostream>
#include <utility>

typedef long long ll;
using namespace std;

std::pair<ll, ll> fibonacci(int n) {
    if (n == 1) return {1, 0};
    if (n == 2) return {0, 1};

    ll p0 = 0, p1 = 1;
    for (int i = 3; i <= n; ++i) {
        ll temp = p0;
        p0 = p1;
        p1 = temp + p1;
    }
    return {p0, p1};
}

int countPairsWithCondition(int n, int k, const std::pair<ll, ll>& val) {
    int res = 0;
    for (int i = 0; i <= n; ++i) {
        int temp = (n - val.first * i);
        if (temp % val.second == 0 && temp / val.second >= i) {
            ++res;
        }
    }
    return res;
}

int handleTestCase(int n, int k) {
    if (k >= 901) {
        return 0;
    }

    std::pair<ll, ll> val = fibonacci(k);
    return countPairsWithCondition(n, k, val);
}

void solveTestCases() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int result = handleTestCase(n, k);
        cout << result << endl;
    }
}

int main() {
    solveTestCases();
    return 0;
}