#include <iostream>
using namespace std;
int sol(int x , int k){
    int sum=0;
    while(x>0){
        sum+=(x%10);
        x/=10;
    }
    if(sum%k==0)return 1;
    else return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x , k;
        cin>>x>>k;
        while(true){
            if((sol(x,k))==1){
                cout<<x<<endl;
                break;
            }
            else x++;
        }
    }
    return 0;
}