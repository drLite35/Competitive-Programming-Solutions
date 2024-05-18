#include <iostream>
using namespace std; 
int two(int num){
    int ans(1);
    while(num%2==0){
        ans*=2;
        num/=2;
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int w , h , n;
        cin>>w>>h>>n;
            int tmp = w*h;
            if(two(tmp)>=n)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
    }
    return 0;
}