class Solution {
    public int[] sortArrayByParity(int[] nums) {
        int n=nums.length;
        int i=0;
        int j=n-1;
        int[]ans = new int[n];
        for(int k=0 ; k<n ; k++){
            if(nums[k]%2==0){
                ans[i] = nums[k];
                i++;
            }
            else{
                ans[j] = nums[k];
                j--;
            }
        }
        return ans;
    }
}