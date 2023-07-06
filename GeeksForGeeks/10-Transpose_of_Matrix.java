class Solution{
    public void transpose(int n,int a[][]){
        int[][] arr = new int[n][n];
        for(int i=0 ; i<n ; i++){
            for(int j=0 ;j<n ;j++){
                arr[i][j]=a[i][j];
            }
        }
        
         for(int i=0 ; i<n ; i++){
            for(int j=0 ;j<n ;j++){
                a[i][j]=arr[j][i];
            }
        }
    }
}