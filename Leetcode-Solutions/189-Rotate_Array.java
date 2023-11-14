class Solution {
    public void rotate(int[] nums, int k) {
        int a = nums.length;
        int[] ans = new int[a];
        int j= 0 ;
        k%=a;
        for(int i=0 ; i<a ; i++){
            j = i+k;
            if(j>=a)j-=a;
            ans[j]=nums[i];
        }
        for(int i=0 ; i<a ; i++){
            nums[i]=ans[i];
        }
    }
}
