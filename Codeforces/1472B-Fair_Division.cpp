#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int l;
        cin>> l;
        int arr[l];
        for(int i=0 ; i<l ;i++){
            cin>>arr[i];
        }
        if(l%2==1){
            int o(0);
            int t(0);
            for(int i=0 ; i<l ; i++){
                if(arr[i]==1)o++;
                if(arr[i]==2)t++;
            }
            if(o==0 || t==0 || o%2==1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        if(l%2==0){
            int o(0);
            int t(0);
            for(int i=0 ; i<l ; i++){
                if(arr[i]==1)o++;
                if(arr[i]==2)t++;
            }
            if((t%2==0) || (o&2==0))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}