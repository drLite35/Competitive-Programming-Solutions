import java.util.*;
class Solution
{
    //Function to return list of integers visited in snake pattern in matrix.
    static ArrayList<Integer> snakePattern(int matrix[][])
    {
        int n = matrix.length;
        ArrayList<Integer> ans = new ArrayList<>();
        for(int i=0 ; i<matrix.length ; i++){
            if(i%2==1){
                for(int j=n-1 ; j>=0 ; j--){
                    ans.add(matrix[i][j]);
                }
            }
            else{
                for(int j=0 ; j<n ; j++){
                    ans.add(matrix[i][j]);
                }
            }
        }
        return ans;
    }
}