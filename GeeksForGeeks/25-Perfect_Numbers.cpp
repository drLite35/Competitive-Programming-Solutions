#include <cmath>
class Solution {
  public:
    int isPerfectNumber(long long N) {
  // code here

        if(N==1){
            return 0;
        }
        long long sum=1;
        for(long long int i=2; i<=sqrt(N); i++){
            if(N%i==0){
                long long int s=N/i;
                sum = sum+i+s;
            }
        }
        if(sum==N) return 1;
        return 0;
    }
};
