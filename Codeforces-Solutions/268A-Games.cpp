#include <iostream>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    int arr[tt][2];
    int ans=0;
    for(int i=0 ; i<tt ; i++){
        for(int j=0 ; j<2 ; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0 ; i<tt ; i++){
        for(int j=0 ; j<tt ; j++){
            if(arr[i][0]==arr[j][1])ans++;
        }
    }
    cout<< ans;
    return 0;
}