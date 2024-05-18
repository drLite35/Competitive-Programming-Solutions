#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans=a+b+c;
    if((a*b*c)>ans)ans=(a*b*c);
    if((a+b*c)>ans)ans=(a+b*c);
    if(((a+b)*c)>ans)ans=((a+b)*c);
    if((a*b+c)>ans)ans=(a*b+c);
    if((a*(b+c))>ans)ans=(a*(b+c));
    cout << ans;
    return 0;
    
}