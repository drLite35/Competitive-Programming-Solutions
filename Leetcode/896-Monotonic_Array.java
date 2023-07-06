import java.util.Arrays;
class Solution {
    public boolean isMonotonic(int[] nums) {
    int len = nums.length;
    int[] dec = new int[len];
    int[] num = new int[len];
    for(int i=0 ; i<len ; i++){
        num[i] = nums[i];
    }
    int a = 0;
    int d = 0;
    Arrays.sort(nums);
    for(int i=0 ; i<len ; i++){
        dec[i] = nums[len-i-1];
    }
    for(int i=0 ; i<len ; i++){
        if(num[i] != nums[i]){
            a=1;
        }
    }
    for(int i=0 ; i<len ; i++){
        if(dec[i] != num[i]){
            d=1;
        }
    }
    if(a==0 || d==0)return true;
    else return false;
    }
}