import java.util.Arrays;
class Solution {
    public int minPairSum(int[] nums) {
        Arrays.sort(nums);
        int n= nums.length;
        int max = 0;
        for(int i=0 ; i<n/2 ; i++){
            int sum = nums[i]+nums[n-i-1];
            if(sum>max)max=sum;
        }
        return max;
    }
}