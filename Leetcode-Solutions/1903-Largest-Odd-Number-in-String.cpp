#include <iostream>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
        string cnt = "";
        for(int i=num.size()-1 ; i>=0 ; i--){
            int t = num[i]-'0';
            if(t%2==1){
                cnt = num.substr(0, i + 1);
                break;
            }
        }
        return cnt;
    }
};