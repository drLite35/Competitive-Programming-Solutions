#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        int a[n] , b[n];
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        for(int i=0 ; i<n ; i++){
            cin>>b[i];
        }
        sort(a, a + n);
        sort(b, b + n);
        int i=0;
        int j=n-1;
        while(k--){
            if(a[i]<=b[j]){
                a[i]=b[j];
                i++;
                j--;
            }
        }
        int ans=0;
        for(int l=0 ; l<n ; l++){
            ans+=a[l];
        }
        cout<<ans<<endl;
    }
    return 0;
}