#include<algorithm>
class Solution {
public:
    string sortVowels(string s) {
        string str;
        string ans;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                str += s[i];
            }
        }

        
        std::sort(str.begin(), str.end());

        int tmp = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                ans += str[tmp];
                tmp++;
            }
            else {
                ans += s[i];
            }
        }

        return ans;
    }
};