#include <iostream>
using namespace std;
int main(){
  int tt;
  cin >> tt;
  int x ,fir;
  cin >> x>>fir;
  tt--;
  int tmp = fir-x;
  int max = tmp;
  while(tt-->1){
      int a ,b;
      cin >> a>>b;
      if((tmp-a+b)>=max)max=tmp-a+b;
      tmp = tmp-a+b;
      
  
       }
    cout<<max;
    return 0;
}