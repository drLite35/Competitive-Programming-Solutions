class Solution {
    public boolean isPalindrome(int x) {
        if(x<0){
            return false;
        }
        if(x==0){
            return true;
        }
        int tmp=x;
        int rev=0;
        int rem=0;
        while(x>0){
            rem = x%10;
            rev = (rev*10)+rem;
            x/=10;
        }
        if(rev==tmp){
            return true;
        }
        else{
            return false;
        }
        
    }
}
