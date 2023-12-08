#include <iostream>
class Solution
{
    public:
    bool isprime(int n){
        for(int i=2 ; i<=sqrt(n);i++){
            if(n%i==0)return false;
        }
        return true;
    }
    int minNumber(int arr[],int N)
    {
        int sum=0;
        for(int i=0 ; i<N ; i++)sum+=arr[i];
        int cnt=0;
        if(sum==1)return 1;
        if(sum==0)return 0;
        while(!isprime(sum)){
            sum+=1;
            cnt++;
        }
        return cnt;
    }
};