class Solution {
    int largestSubsquare(int n, char[][] a) {
        int ans=0;
        int V[][] = new int[n][n];
        int H[][] = new int[n][n];
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                V[i][j]=0;
                H[i][j]=0;
                if(a[i][j]=='X'){
                    if(j==0)H[i][j] = 1;
                    else H[i][j] = H[i][j-1] + 1;
                }
                if(a[i][j]=='X'){
                    if(i==0)V[i][j] = 1;
                    else V[i][j] = V[i-1][j] + 1;
                }
            }
        }
        for(int i=n-1 ; i>=0 ; i--){
            for(int j=n-1 ; j>=0 ; j--){
                int size = Math.min(V[i][j] , H[i][j]);
                while(size>0){
                    if(V[i][j-size+1]>=size && H[i-size+1][j]>=size){
                        ans = Math.max(size , ans);
                        break;
                    }
                    size--;
                }
            }
        }
        return ans;
    }
}
