class Solution {
    public int distanceTraveled(int mainTank, int additionalTank) {
        int len =0;
        int temp = 0;
        while(mainTank>0){
        mainTank = mainTank - 1;
        temp = temp + 1;
        len = len+10;
        if(temp%5==0 && additionalTank>0){
            mainTank+=1;
            additionalTank-=1;
        }
            
        
        
        } 
        return len;
    }
}
