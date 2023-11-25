class Solution {
    public int[] getSumAbsoluteDifferences(int[] nums) {
        int n = nums.length;
        int sum=0;
        int[] sumarr =  new int [n];
        for(int i=0 ; i<n ; i++){
            sum+=nums[i];
            sumarr[i] = sum;
        }
        int[] ans = new int [n];
        for(int i=0 ; i<n ; i++){
            int tmp = Math.abs(sumarr[i]-(nums[i]*(i+1)));
            tmp+= sumarr[n-1]-sumarr[i]-(nums[i]*(n-i-1));
            ans[i]=tmp;
        }
        return ans;
    }
}