import java.util.*;
class Solution{
    public List<Integer> pattern(int N){
        List<Integer> ans = new ArrayList<>();
        if(N<=0)ans.add(N);
        else{
        int len = (N%5==0)?(N/5):(N/5)+1;
        for(int i=0 ; i<=len ; i++){
            ans.add(N);
            N-=5;
        }
        N+=5;
        for(int i=0 ; i<=len-1 ; i++){
            N+=5;
            ans.add(N);
        }
       }
        return ans;
    }
}