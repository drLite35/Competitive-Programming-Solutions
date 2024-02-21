#include <iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool is(string s , int a , int b){
        while(a<b){
            if(s[a]!=s[b])return false;
            a++;b--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return is(s , i+1 , j) || is(s , i , j-1);
            }
            else{
                i++;j--;
            }
        }
        return true;
    }
};