#include <iostream>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int len;
        cin >> len;
        int arr[len];
        int d(0) , e(0) , o(0);
        for(int i=0 ; i<len ; i++){
            cin>>arr[i];
            if((i%2)!=(arr[i]%2))d++;
            if(arr[i]%2==0)e++;
            else o++;
        }
        if(d==0)cout<<"0"<<endl;
        else{
            if(e!=o && len%2==0)cout<<"-1"<<endl;
            else if(e==0 || o==0)cout<<"-1"<<endl;
            else if(abs(e-o)>1)cout<<"-1"<<endl;
            else if(e>o && len%2==0)cout<<"-1"<<endl;
            else if(o>e && len%2==1)cout<<"-1"<<endl;
            else if(d%2==0)cout<<d/2<<endl;
            else cout<<(d/2)+1<<endl;
        }
    }
    return 0;
}