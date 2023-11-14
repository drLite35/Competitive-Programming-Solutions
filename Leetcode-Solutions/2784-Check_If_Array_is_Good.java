import java.util.*;
class Solution {
    public boolean isGood(int[] nums) {
        Arrays.sort(nums);
        int len = nums.length;
        if(len==1)return false;
        for(int i=0 ; i<len-1 ; i++){
            if(nums[i]!=i+1)return false;
        }
        if(nums[len-1]!=nums[len-2])return false;
        return true;
    }
}