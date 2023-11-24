import java.util.Arrays;
class Solution {
    public int maxCoins(int[] piles) {
        int ans=0;
        Arrays.sort(piles);
        int n = piles.length / 3 ;
        int l = piles.length - 2;
        for(int i=1 ; i<=n ; i++){
            ans+=piles[l];
            l-=2;
        }
        return ans;
    }
}