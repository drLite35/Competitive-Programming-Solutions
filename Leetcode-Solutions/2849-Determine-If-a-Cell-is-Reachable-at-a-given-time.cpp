#include <iostream>
class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int min = abs(fx-sx)>=abs(fy-sy)?abs(fy-sy):abs(fx-sx);
        int tot = min;
        int max = abs(fx-sx)<=abs(fy-sy)?abs(fy-sy):abs(fx-sx);
        tot+=max-min;
        if(tot==0 && t==1)return false;
        if(tot<=t)return true;
        return false;
    }
};