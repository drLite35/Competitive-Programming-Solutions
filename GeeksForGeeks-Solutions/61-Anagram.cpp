#include <iostream>
using namespace std;
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        int h[26];
        int h1[26];
        if(a.size()!=b.size())return 0;
        for(int i=0 ; i<26 ; i++){
            h[i]=0;
            h1[i]=0;
        }
        for(int i=0 ; i<a.size() ; i++){
            h[a[i]-'a']++;
            h1[b[i]-'a']++;
        }
        for(int i=0 ; i<26 ; i++){
            if(h[i]!=h1[i])return 0;
        }
        return 1;
    }

};