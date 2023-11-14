class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        int cnt = 1;
        while(n){
            if(n%2==1)return cnt;
            n/=2;
            cnt++;
        }
        return 0;
    }
};