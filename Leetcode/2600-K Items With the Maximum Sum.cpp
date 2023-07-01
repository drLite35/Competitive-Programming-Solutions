class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int ans=0;
        for(int i=1 ; i<=numOnes ;i++){
            if(k==0)break;
            k--;
            ans++;
        }
        for(int i=1 ; i<=numZeros ;i++){
            if(k==0)break;
            k--;
        }
        for(int i=1 ; i<=numNegOnes ;i++){
            if(k==0)break;
            k--;
            ans--;
            
            
        }
        return ans;
    }
};