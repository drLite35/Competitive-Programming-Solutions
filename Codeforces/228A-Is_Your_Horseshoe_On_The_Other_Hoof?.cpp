#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[4];
    for(int i=0 ; i<4 ;i++){
        cin >> arr[i];
    }
    sort(arr ,arr+4);
    int tmp=0;
    for(int i=0 ;i<3 ;i++){
        if(arr[i]==arr[i+1])tmp++;
    }
    cout<<tmp;
    return 0;
}