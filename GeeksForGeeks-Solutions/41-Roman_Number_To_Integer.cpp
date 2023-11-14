#include <iostream>
using namespace std;
class Solution {
  public:
     int val(char c){
            if(c=='I')return 1;
            if(c=='V')return 5;
            if(c=='X')return 10;
            if(c=='L')return 50;
            if(c=='C')return 100;
            if(c=='D')return 500;
            if(c=='M')return 1000;
        }
    int romanToDecimal(string &str) {
        int n = str.size();
        int ans=0;
        if(str.size()==1)return val(str[0]);
        else{
            for(int i=0 ; i<str.size()-1 ; i++){
                if(val(str[i])>=val(str[i+1]))ans+=val(str[i]);
                else ans-=val(str[i]);
            }
            ans+=val(str[n-1]);
        }
        return ans;
    }
};
