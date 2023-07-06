#include <iostream>
using namespace std;
class Solution{
public:
    string findLargest(int N, int S){
        int ans=0 ; 
        string str;
        if(S>(N*9) || (S==0 && N>1))return "-1";
        else{
            while(N--){
                if(S>=9){
                    str+='9';
                    S-=9;
                }
                else if(S<9 && S>0){
                    string tmp = to_string(S);
                    str+=tmp;
                    S=0;
                }
                else{
                    str+='0';
                }
            }
            return str;
        }
    }
};