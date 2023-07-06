import java.util.ArrayList;
class GFG
{
    ArrayList<Integer> find(int arr[], int n, int x)
    {
        ArrayList<Integer> ans = new ArrayList<>();
        int min = -1;
        int max = -1;
        for(int i=0 ; i<n ; i++){
            if(arr[i]==x){
                if(min==(-1))min=i;
                max=i;
            }
        }
            ans.add(min);
            ans.add(max);

        return ans;
    }
}