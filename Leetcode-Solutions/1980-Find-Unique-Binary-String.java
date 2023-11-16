import java.util.Arrays;

class Solution {
    public String findDifferentBinaryString(String[] nums) {
        Arrays.sort(nums);
        for (int i = 0; i <nums.length; i++) {
            String s = Integer.toBinaryString(i);
            s = "0".repeat(nums[0].length() - s.length()) + s;
            if (!s.equals(nums[i])) return s;
        }
        String s = Integer.toBinaryString(nums.length);
        return "0".repeat(nums[0].length() - s.length()) + s;
    }
}
