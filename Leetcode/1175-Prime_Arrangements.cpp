#include <cmath>
class Solution {
public: 
    long long int fact(long long int n) {
    long long int result = 1;
    for (long long int i = 1; i <= n; i++) {
        result = (result * i) % 1000000007;
    }
    return result;
}

    bool isprime(long long int i){
        for(int j=2 ; j<=sqrt(i) ; j++ ){
            if(i%j==0)return false;
        }
        return true;
    } 
    int numPrimeArrangements(int n) {
        long long int tmp(0);
        for(int i=2 ; i<=n ; i++){
            if(isprime(i))tmp++;
        }
        return (fact(tmp)*fact(n-tmp))%1000000007;
    }
};