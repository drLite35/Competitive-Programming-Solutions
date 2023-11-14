#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[t];
    for(int i=0 ; i<t ; i++){
        cin>>arr[i];
    }
    int ans(1);
    int max(1);
    for(int i=0 ; i<t-1 ; i++){
        if(arr[i]<=arr[i+1])ans++;
        else {
            if(ans>max){
            max=ans;
            }
            ans=1;
        }
    }
    if(ans>max)cout<<ans;
    else cout<<max;
    return 0;
}