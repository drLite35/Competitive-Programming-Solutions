class Solution {
    public int reductionOperations(int[] nums) {
        int max=nums[0];
        int min=nums[0];
        int len = nums.length;
        for(int i =0 ; i<len ; i++){
            if(max<nums[i])max=nums[i];
            if(min>nums[i])min=nums[i];
        }
        int[] h = new int [max+1];
        for(int i=0 ; i<max+1 ; i++)h[i]=0;
        int ans=0;
        int cnt=0;
        for(int i=0 ; i<len ; i++){
            h[nums[i]]++;
        }
        for(int i=max ; i>min ; i--){
            if(h[i]!=0){
                cnt+=h[i];
                ans+=cnt;
            }
        }
        return ans;
    }
}
