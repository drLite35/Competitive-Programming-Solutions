#include <iostream>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size();
        int i=len-1;
        int ans=0;
        while(i>=0){
            if((s[i]==' ') && (ans==0)){
                i--;
                continue;
            }
            if(s[i]==' ')break;
            ans++;
            i--;
        }
        return ans;
    }
};