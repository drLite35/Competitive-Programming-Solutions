#include <iostream>
using namespace std;
int main(){
    int len , k;
    cin >> len >>k;
    int tmp=0;
    int a[len];
    for(int i=0 ; i<len ;i++){
        cin>>a[i];
        if(a[i]<=(5-k))tmp++;
    }
    cout << tmp/3 ;
    return 0;
}