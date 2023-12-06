class Solution {
  public:
    int func(int a , int n){
        int cnt=0;
        while(a>0){
            int tmp = a%10;
            if(tmp==n)cnt++;;
            a/=10;
        }
        return cnt;
    }
    int countX(int L, int R, int X) {
        int ans=0;
        for(int i=L+1 ; i<R ; i++){
            ans+=(func(i , X));
        }
        return ans;
    }
};
