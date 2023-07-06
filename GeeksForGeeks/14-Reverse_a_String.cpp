#include <iostream>
using namespace std;
class Solution
{
    public:
    string reverseWord(string str)
    {
        string ans = str;
        int len = str.size();;\
        for(int i=0 ; i<len ; i++){
            ans[len-1-i]=str[i];
        }
        return ans;
    }
};