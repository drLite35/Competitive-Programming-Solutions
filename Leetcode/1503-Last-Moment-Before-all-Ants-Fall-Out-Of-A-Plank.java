class Solution {
    public int getLastMoment(int n, int[] left, int[] right) {
        int ans=0;
        for(int i=0 ; i<left.length ; i++){
            if(ans<left[i])ans=left[i];
        }
        for(int i=0 ; i<right.length ; i++){
            if(ans<(n-right[i]))ans=n-right[i];
        }
        return ans;
    }
}