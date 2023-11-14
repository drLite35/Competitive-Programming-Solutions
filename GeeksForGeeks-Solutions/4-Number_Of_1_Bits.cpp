class Solution {
    public:
      int setBits(int N) {
         int ans = 0;
         while(N>0){
             int tmp = N%2;
             if(tmp==1)ans++;
             N/=2;
         }
         return ans;
      }
  };