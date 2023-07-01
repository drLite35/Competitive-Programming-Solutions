class Solution {
    public int subarraySum(int[] nums, int k) {
        int ans = 0;
        int tmp = 0;
        for(int i=0 ; i<nums.length ;i++){
            tmp=0;
            for(int j=i ; j<nums.length ; j++){
                tmp+=nums[j];
                if(tmp==k){
                    ans++;
                }
            }
        }
        return ans;
    }
}
