class Solution {
public:
    bool isPowerOfTwo(int n) {
        if((n>0) && (n & (n-1)) == 0)return true;
        else return false;
    }
};
//2 , 4 , 8, 16
//10 , 100 , 1000 , 10000
//1 , 3 , 7 ,15
//01 , 011 , 0111 , 01111 