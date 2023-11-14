class Solution
{
  public:
    int minOperation(int n)
    {
        int ans=0;
        while(n>0){
            if(n%2==1)n-=1;
            else{
                n/=2;
            }
            ans++;
        }
        return ans;
    }
};