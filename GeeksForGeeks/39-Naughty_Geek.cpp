class Solution{   
public:
    long long int totalWays(int N)
    {
        long long int ans = 1;
        for(int i=1 ; i<=N ; i++){
            ans*=i;
        }
        return ans;
    }
};