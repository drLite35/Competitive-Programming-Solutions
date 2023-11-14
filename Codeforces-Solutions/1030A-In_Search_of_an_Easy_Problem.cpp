#include <iostream>
using namespace std;
int main(){
    int t;
    cin >>t;
    int tmp=0;
    int arr[t];
    for(int i=0 ; i<t ; i++){
        cin >> arr[i];
        if(arr[i]==1)tmp=1;
    }
    if(tmp==1)cout << "Hard";
    else cout<<"Easy";
    return 0;
}
