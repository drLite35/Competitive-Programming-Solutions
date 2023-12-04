#include <iostream>
using namespace std;
class Solution {
public:
    string largestGoodInteger(string num) {
        int ans = -1;
        for (int i = 1; i < num.size() - 1; i++) {
            if (num[i] == num[i - 1] && num[i] == num[i + 1]) {
                int n = stoi(num.substr(i, 1));
                if (n > ans) ans = n;
            }
        }
        if (ans == -1) return "";
        string s = to_string(ans);
        s += to_string(ans);
        s += to_string(ans);
        return s;
    }
};