class Solution {
    int findMissing(int[] arr, int n) { 
        int d = (arr[n-1]-arr[0])/n;
        int ans=0;
        int a = arr[0];
        for(int i=1 ; i<n ; i++){
            if(arr[i]!=(a+(i*d))){
                ans = a+(i*d);
                break;
            }
        }
        return ans;
    }
}