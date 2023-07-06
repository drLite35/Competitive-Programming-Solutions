class Solution {
    public int[] findArray(int[] pref) {
        int len = pref.length;
        int [] ans = new int[len];
        int tmp = pref[0];
        ans[0] = tmp;
        for(int i=1 ; i<len ; i++){
            tmp = (pref[i-1]^pref[i]);
            ans[i] = tmp;
        }
        return ans;
    }
}