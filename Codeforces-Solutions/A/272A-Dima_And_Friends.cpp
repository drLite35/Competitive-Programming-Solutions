#include <iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int ans=0;
    int sum=0;
    for(int i=1 ; i<=n ; i++){
        int m ;
        cin>> m;
        sum+=m;
    }
    for(int i=1 ; i<=5 ; i++){
        if(((sum+i)%(n+1)!=1)){
            ans++;
        }
    }
    cout << ans;
    return 0;
}
