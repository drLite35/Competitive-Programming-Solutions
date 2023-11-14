import java.util.*;
class Solution
{
    static ArrayList<Integer> boundaryTraversal(int matrix[][], int n, int m)
    {
        ArrayList<Integer> ans = new ArrayList<>();
        if(n==1 && m==1){
            ans.add(matrix[0][0]);
        }
        else if(n==1 && (m>1)){
            for(int i=0 ; i<m ; i++){
                ans.add(matrix[0][i]);
            }
        }
        else if(m==1 && (n>1)){
            for(int i=0 ; i<n ; i++){
                ans.add(matrix[i][0]);
            }
        }
        else{
        for(int i=0 ; i<m ; i++){
            ans.add(matrix[0][i]);
        }
        for(int i=1 ; i<n-1 ; i++ ){
            ans.add(matrix[i][m-1]);
        }
        for(int i=m-1 ; i>=0 ; i--){
            ans.add(matrix[n-1][i]);
        }
        for(int i=n-2 ; i>0 ; i-- ){
            ans.add(matrix[i][0]);
        }
        }
        return ans;
    }
}