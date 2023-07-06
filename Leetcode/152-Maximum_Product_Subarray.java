class Solution {
    public int maxProduct(int[] nums) {
        int ans = nums[0];
        int pro = 1;
        for(int i=0 ; i<nums.length ; i++){
            pro= 1;
            for(int j=i ; j<nums.length ; j++){
                pro*=nums[j];
                if(pro>ans){
                    ans=pro;
                }
            }
        }
        return ans;
    }
}
