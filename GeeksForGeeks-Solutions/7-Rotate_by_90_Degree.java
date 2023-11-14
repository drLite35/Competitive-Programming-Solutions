class GFG
{
    static void rotate(int matrix[][]) 
    {
        int[][] ans = new int[matrix.length][matrix.length];
        for(int i =0 ; i<matrix.length ; i++){
            int k = matrix.length - i -1;
            for(int j=0 ; j<matrix.length ; j++){
                ans[i][j] = matrix[j][k];
            }
        }
         for(int i =0 ; i<matrix.length; i++){
            for(int j=0 ; j<matrix.length ; j++){
                matrix[i][j] = ans[i][j];
            }
        }
    }
}