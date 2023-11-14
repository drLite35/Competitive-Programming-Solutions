#include <iostream>
using namespace std;
class Solution {
  public:
    string construct(int N,int K) {
        char c = 'z';
        char v = 'i';
        string s = "iz";
        for(int i=2 ; i<N ; i++){
            if(i%2==0)s+=v;
            else s+=c;
        }
        return s;
    }
};
