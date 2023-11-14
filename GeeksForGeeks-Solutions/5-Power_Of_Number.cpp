class Solution{
    long power(int N,int R){
        long MOD = 1000000007;
        long num = N;
        long result = 1;

        while (R > 0) {
            if (R % 2 == 1) {
                result = (result * num) % MOD;
            }
            num = (num * num) % MOD;
            R /= 2;
        }

        return result;
        
    }

}