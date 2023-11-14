#include <iostream>
using namespace std;
class Solution{
  public:
  long long nearestSquare(long long n)
  {
      long long tmp = sqrt(n);
      long long tmp1 = tmp*tmp;
      long long tmp2 = (tmp+1)*(tmp+1);
      if(abs(tmp1-n)>abs(tmp2-n))return tmp2;
      return tmp1;
      
  }
};