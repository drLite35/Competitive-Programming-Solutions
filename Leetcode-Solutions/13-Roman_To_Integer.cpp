#include <iostream>
using namespace std;
class Solution {
public:
    int nums(char c){
        if(c=='I')return 1;
        if(c=='V')return 5;
        if(c=='X')return 10;
        if(c=='L')return 50;
        if(c=='C')return 100;
        if(c=='D')return 500;
        return 1000;
    }
    int romanToInt(string s) {
        int ans(0);
        int len = s.size();
        for(int i=0 ; i<len-1; i++){
            if(nums(s[i])<nums(s[i+1]))ans-=nums(s[i]);
            else{
                ans+=nums(s[i]);
            }
        }
        ans+=nums(s[len-1]);
        return ans;
    }
};