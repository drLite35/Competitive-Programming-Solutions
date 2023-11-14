class Solution {
    public int[] replaceElements(int[] arr) {
        int len = arr.length;
        int []ans = new int[len];
        ans[len-1]=(-1);
        for(int i = 0 ; i< len-1 ; i++){
            int max = arr [i+1];
            for(int j=i+1 ; j<len ; j++){
                if(arr[j]>max)max=arr[j];
            }
            ans[i]=max;
        }
        return ans;
    }
}