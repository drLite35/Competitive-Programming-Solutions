#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + m); 
    int ans = 1000000007;
    for(int i=0 ; i<=m-n ; i++){
        int diff=arr[i+n-1]-arr[i];
        if(diff<ans)ans=diff;
    }
    cout << ans;
    return 0;
}