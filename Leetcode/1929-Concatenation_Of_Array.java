class Solution {
    public int[] getConcatenation(int[] nums) {
        int len = 2*(nums.length);
        int[] ans = new int[len];
        for(int i=0 ; i<(len/2) ; i++){
            ans[i] = nums[i];
        }
        int tmp=0;
        for(int i=(len/2) ; i<len ;i++){
            ans[i] = nums[tmp];
            tmp++;
        }
        return ans;
    }
}
