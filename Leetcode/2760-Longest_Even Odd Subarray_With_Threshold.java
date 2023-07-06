class Solution {
    public int longestAlternatingSubarray(int[] nums, int threshold) {
        int currentLength = 0;
        int maxLength = 0;

        for (int l = 0; l < nums.length; l++) {
            if (nums[l] % 2 == 0 && nums[l] <= threshold) {
                currentLength = 1;
                for (int r = l + 1; r < nums.length; r++) {
                    if (nums[r] % 2 != nums[r - 1] % 2 && nums[r] <= threshold && nums[r - 1] <= threshold) {
                        currentLength++;
                    } else {
                        break;
                    }
                }
                maxLength = Math.max(maxLength, currentLength);
            }
        }

        return maxLength;
    }
}