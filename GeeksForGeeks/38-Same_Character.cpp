#include <iostream>
using namespace std;
class Solution {
  public:
    int solve(int N, string S) {
        int ans = 0;
        sort(S.begin() , S.end());
        for(int i=0 ; i<N-1 ; i++){
            if(S[i]!=S[i+1])ans++;
        }
        return ans;
    }
};