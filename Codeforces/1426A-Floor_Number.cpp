#include <iostream> 
using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int x , y;
        cin>>x>>y;
        if(x==1 || x==2)cout<<1<<endl;
        else{
            x-=2;
            if(x%y==0)cout<<(x/y)+1<<endl;
            else cout<<(x/y)+2<<endl;
        }
    }
    return 0;
}