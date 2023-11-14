class Solution {
    public int missingNumber(int[] nums) {
        int l = nums.length;
        int sum = (l*(l+1))/2;
        int s=0;
        for(int i=0 ; i<l ; i++){
            s+=nums[i];
        }
        return sum-s;
    }
}