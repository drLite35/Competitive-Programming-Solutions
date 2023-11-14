#include <iostream>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int len = t.size();
        int ans = s.size();
        int tmp = 0;
        for(int i=0 ; i<len ; i++){
            if(s[tmp]==t[i]){
                tmp++;
            }
        }
        if(tmp==(ans))return true;
        else return false;
    }
};