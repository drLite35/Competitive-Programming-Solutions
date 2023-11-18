import java.util.Arrays;
class Solution {
    public int maxFrequency(int[] nums, int k) {
        Arrays.sort(nums);
        int r = 0;
        int l = 0;
        int res = 0;
        long  tot = 0;
        while(r<nums.length){
            tot+=nums[r];
            while(((long)nums[r]*(r-l+1))>tot+k){
                tot-=nums[l];
                l++;
            }
        res= Math.max(res , r-l+1);
        r++;
        }
        return res;
    }
}