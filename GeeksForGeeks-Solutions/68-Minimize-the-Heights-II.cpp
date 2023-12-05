#include <iostream>
using namespace std;
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int a = arr[0]+k;
        int b = arr[n-1]-k;
        int rn = arr[n-1]-arr[0];
        for(int i=1 ; i<n ; i++){
            if(arr[i]<k)continue;
            int cmaxi = max(arr[i-1]+k ,b);
            int cmini = min(arr[i]-k ,a);
            rn = min(rn , cmaxi-cmini);
        }
        return rn;
    }
};
