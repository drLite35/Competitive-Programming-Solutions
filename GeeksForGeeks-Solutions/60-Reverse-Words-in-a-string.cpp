#include <iostream>
using namespace std;
class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string ans="";
        string tmp="";
        for(int i=S.size()-1 ; i>=0 ; i--){
            if(S[i]!='.')tmp+=S[i];
            if(S[i]=='.'|| i==0){
                reverse(tmp.begin(), tmp.end());
                ans+=tmp;
                if(i!=0)ans+='.';
                tmp="";
            }
        }
        if(S[0]=='.')ans+='.';
        return ans;
    } 
};