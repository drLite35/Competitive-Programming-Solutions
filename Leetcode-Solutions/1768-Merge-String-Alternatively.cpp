#include<string>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        string s;
        while(i<word1.size() && j<word2.size()){
            s+=word1[i++];
            s+=word2[j++];
        }
        while(i<word1.size()){
            s+=word1[i++];
        }
        while(j<word2.size())s+=word2[j++];
        return s;
    }
};