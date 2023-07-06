class Solution
{
    public:
    long long countWays(int n)
    {
        if(n==0)return 0;
        if(n==1)return 1;
        if(n==2)return 2;
        if(n==3)return 4;
        long long int a=1 , b=2 , c=4;
        long long int ans=0;
        for(int i=4 ; i<=n ; i++){
            ans=(a+b+c)%1000000007;
            a=b;
            b=c;
            c=ans;
        }
        return ans;
    }
};
