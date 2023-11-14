class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        if(n==0)return 0;
        if(n==1)return 1;
        while(true){
            if(n%2==1 && n!=1)return 0;
            n/=2;
            if(n==1)return 1;
        }
    }
};