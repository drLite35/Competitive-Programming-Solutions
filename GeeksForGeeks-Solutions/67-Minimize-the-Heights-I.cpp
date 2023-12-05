#include <iostream>
using namespace std;
class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr , arr+n);
        int maxi = arr[n-1]-k;
        int mini = arr[0]+k;
        int rn = arr[n-1]-arr[0];
        for(int i=1 ; i<n ; i++){
            int cmaxi = max(arr[i-1]+k , maxi);
            int cmini = min(arr[i]-k ,mini );
            rn = min(rn , cmaxi-cmini);
        }
        return rn;
    }
};
