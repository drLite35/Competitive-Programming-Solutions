class Solution {
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        String ans1= word1[0];
        String ans2= word2[0];
        for(int i=1 ; i<word1.length ; i++){
            ans1+=word1[i];
        }
        for(int i=1 ; i<word2.length ; i++){
            ans2+=word2[i];
        }
        if(ans1.equals(ans2))return true;
        return false;
    }
}