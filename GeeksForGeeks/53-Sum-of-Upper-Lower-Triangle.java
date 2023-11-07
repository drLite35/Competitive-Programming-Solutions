import java.util.*;
class Solution
{
    //Function to return sum of upper and lower triangles of a matrix.
    static ArrayList<Integer> sumTriangles(int matrix[][], int n)
    {
        ArrayList <Integer> ans = new ArrayList<>();
        int a=0;
        int b=0;
        for(int i=0 ; i<n ; i++){
            for(int j=i ; j<n ; j++ ){
                 a+=matrix[i][j];
            }
            for(int j=0 ; j<=i ; j++){
                b+=matrix[i][j];   
            }
        }
        ans.add(a);
        ans.add(b);
        return ans;
    }
}