class Solution {
    public int differenceOfSum(int[] nums) {
        int sum1 = 0 ;
        int sum2 = 0 ; 
        int ans = 0;
        for(int i = 0 ; i<nums.length ; i++){
            sum1 = sum1 + nums[i];
            if(nums[i]>=10){
                int temp = nums[i];
                while(temp>0){
                    int rem = temp%10;
                    sum2 = sum2+rem;
                    temp=temp/10;
                    rem=0;
                    }
            }
            else{
                sum2 = sum2 + nums[i];

            }
        }
        if(sum1>sum2){
            ans = sum1-sum2;
        }
        else{
            ans = sum2-sum1;
        }
        return ans;
        
    }
}
