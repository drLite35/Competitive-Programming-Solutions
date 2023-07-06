class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        if((n>>k)&1==1)return true;
        else return false;
    }
};