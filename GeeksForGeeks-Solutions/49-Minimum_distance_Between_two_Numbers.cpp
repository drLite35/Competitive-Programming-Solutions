#include <iostream>
using namespace std;
class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int ans = INT_MAX , n1 = -1 , n2 = -1;
        for(int i =0 ; i<n ; i++){
            if(a[i]==x){
                n1 = i;
                if(n2!=(-1))ans=min(ans , n1-n2);
            }
            if(a[i]==y){
                n2 = i;
                if(n1!=(-1))ans=min(ans , n2-n1);
            }
        }
        return ((ans>n)?-1 : ans);
    }
};