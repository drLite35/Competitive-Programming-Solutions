class Solution {
public:
    long long solve(long long a, long long b) {
        long long max = a>b?a:b;
        int p=0;
        while(max){
            p++;
            max>>=1;
        }
       for(int i=0 ; i<p; i++){
           if((((((1<<i) & a) ==0) && ((1<<i) & b) ==0)))return 0;
       }
       return (a & 1) + (b & 1) ;
    }
};