class Solution {
public:
    int totalMoney(int n) {
       int ans = 0;
       int cnt = 1;
       int div = 7;
       while(n>0){
           if(cnt%div==0){
               ans+=cnt;
               cnt-=5;
               div++;
               n--;
               continue;
           }
           ans+=cnt;
           cnt++;
           n--;
           
       }
       return ans;
    }
};