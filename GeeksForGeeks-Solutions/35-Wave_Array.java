class Solution {
    public static void convertToWave(int n, int[] a) {
        for(int i=0 ; i<n-1 ; i++){
            int tmp = a[i];
            a[i] = a[i+1];
            a[i+1] = tmp;
            i++;
        }
    }
}