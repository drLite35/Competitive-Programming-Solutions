import java.util.Arrays;
class Solution {
    public int maximumElementAfterDecrementingAndRearranging(int[] arr) {
        Arrays.sort(arr);
        arr[0]=1;
        for(int i=1 ; i<arr.length ; i++){
            if(arr[i]-arr[i-1]<2){}
            else{
                arr[i]=arr[i-1]+1;
            }
        }
        int max = 1;
        for(int i=0 ; i<arr.length  ; i++){
            if(arr[i]>max)max=arr[i];
        }
        return max;
    }
}