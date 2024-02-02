#include <iostream>
#include <string>
using namespace std;
class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        bool f = false;
        if(s[0]=='-')f=true;
        int i = 0;
        if(f)i=1;
        int ans = 0;
        for(int j=i ; j<s.length() ; j++){
            int val = s[j]-'0';
            if(val>=0 && val<=9){
                ans = ans*10 + val;
            }
            else return -1;
        }
        if(f)return -ans;
        else return ans;
    }
};