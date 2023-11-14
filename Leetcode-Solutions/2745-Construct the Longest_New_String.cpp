class Solution {
public:
    int longestString(int x, int y, int z) {
        int ans = 0;
        if(x>y){
            ans = 2*y + 2*(y+1) +2*z;
        }
        else if(y>x){
            ans = 2*x + 2*(x+1) +2*z;
        }
        else{
            ans = 2*(x+y+z);
        }
        return ans;
        
    }
};