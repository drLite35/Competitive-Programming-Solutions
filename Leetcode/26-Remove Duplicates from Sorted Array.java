class Solution {
    public int removeDuplicates(int[] nums) {
        int ans = 0;
        int tmp = 1;
        for(int i=0 ; i<nums.length-1 ;i++){
            if(nums[i]!=nums[i+1]){
                nums[tmp]=nums[i+1];
                tmp++;
            }
        }
        return tmp;

    }
}
