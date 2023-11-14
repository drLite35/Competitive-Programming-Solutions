class Solution {
    public int fib(int n) {
        int f0 = 0;
        int f1 = 1;
        int f2 = 1;
        int ans = 0;
        if(n==0){
            ans = f0;
        }
        else if(n==1 || n==2){
            ans = f1;
        }
        else{
            for(int i = 3 ; i<=n ; i++){
                ans = f1 + f2;
                f1 = f2;
                f2 = ans;
                
            }
        }
        return ans;
        
    }
    
}
