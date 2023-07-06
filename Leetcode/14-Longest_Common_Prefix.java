import java.util.Arrays;
class Solution {
    public String longestCommonPrefix(String[] strs) {
        Arrays.sort(strs);
        String s1 = strs[0];
        String s2 = strs[strs.length-1];
        int ans = 0;
        while(ans < s1.length() && ans <s2.length()){
            if(s1.charAt(ans)==s2.charAt(ans))ans++;
            else break;
        }
        return s1.substring(0 , ans);
    }
}
