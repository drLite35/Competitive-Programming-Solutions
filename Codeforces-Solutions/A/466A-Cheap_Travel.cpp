#include <iostream>
using namespace std;
int main(){
    int n , m , a , b;
    cin >> n >> m >> a >> b;
    int ans ;
    int tmp1 , tmp2;
    if((float(b)/m) <= (a)){
         tmp1 = (n%m)*a;
         tmp1 +=((n/m)*b);
         tmp2 = ((n/m)*b) + b;
         if(tmp1>=tmp2)ans = tmp2;
         else ans = tmp1;
    } 
    else ans = n*a;
    cout << ans;
    return 0;
    
}