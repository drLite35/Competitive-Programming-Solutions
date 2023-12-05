class Solution {
public:
    int numberOfMatches(int n) {
        int ans =0;
        if(n==1)return 0;
        while(n!=1){
            ans += n/2;
            n=n%2==0 ? n/2 : n/2+1;
        }
        return ans;
    }
};