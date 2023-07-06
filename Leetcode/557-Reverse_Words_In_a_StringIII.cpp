#include <iostream>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int len = s.size();
        string ans;
        string temp=" ";
        int tmp(0);
        for(int i=0 ; i<len ; i++){
            if(s[i]==' ' || i==len-1){
                if(i==len-1){
                    temp+=s[i];
                    tmp++;
                }
                for(int j=tmp ; j>=0 ; j--){
                    ans+=temp[j];
                }
                tmp=0;
                temp =' ';
            }
            else{
                tmp++;
                temp+=s[i];
            }
        }
        string tempo;
        for(int i=0 ; i<len ; i++){
            tempo+=ans[i];
        }
        return tempo;
    }
};