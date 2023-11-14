#include <iostream>
using namespace std;
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int a= -1;
        int len = s.size();
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]=='1')a++;
        }
        string ans = "";
        for(int i=0 ; i<a ; i++){
            ans+='1';
        }
        for(int i=a ; i<len-1 ; i++){
            ans+='0';
        }
        ans+='1';
        return ans;
    }
};