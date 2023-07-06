class Solution {
    public int search(int[] nums, int target) {
        int l=0 ;
        int h=nums.length-1;
        while(l<=h){
            int mid = (l+h)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]>target)h=mid-1;
            else l=mid+1;
        }
        return -1;
    }
}