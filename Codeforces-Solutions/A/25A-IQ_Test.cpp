#include <iostream>
using namespace std;
int main(){
    int tt;
    cin>>tt;
    int even =0;
    int i = 1;
    int e ,o;
    while(i++<(tt+1)){
        int n;
        cin >> n;
        if(n%2==1){
            even-=1;
            e = i-1;
        }
        if(n%2==0){
            even+=1;
            o = i-1;
        }
    }
    cout << (even>0?e:o);
    return 0;
}