class Solution {
    public static int stockBuyAndSell(int n, int[] prices) {
        int tmp = prices[0];
        int ans = 0;
        for(int i=1 ; i<n ;i++){
            if(prices[i]>tmp){
                ans=ans+prices[i]-tmp;
                tmp=prices[i];
            }
            else{
                tmp=prices[i];
            }
        }
        return ans;
    }
} 
