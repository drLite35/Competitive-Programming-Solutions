#include <iostream>
using namespace std;
class Solution{
    public:
    string colName (long long int n)
    {
        string ans = "";
        while(n>0){
            char c;
            if(n%26 == 0){
                c=90;
                n-=1;
            }
            else{
                c=(n%26)+64;
            }
            n/=26;
            ans+=c;
        }
        //reverse(ans.begin(), ans.end());
        return ans;
    }
    
};
