#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool cancap(int mid , int days , vector<int>& weights){
        // sort(weights.begin() , weights.end()); 
        int ans = 1;
        int tmp = mid;
        for(int i =0 ; i<weights.size() ; i++){
            if(tmp-weights[i]<0){
                tmp = mid;
                ans++;
            }
            tmp -= weights[i];
        }
        if(ans<=days)return true;
        else return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int max = weights[0];
        int sum = 0;
        for(int i=0 ; i<weights.size() ; i++){
            sum+=weights[i];
            if(max<weights[i])max=weights[i];
        }
        int ans = sum;
        while(max<=sum){
            int mid = max+((sum-max)/2);
            if(cancap(mid , days , weights)){
                ans = mid<ans?mid:ans;
                sum = mid - 1;
            }
            else max = mid + 1;
        }
        return ans;
    }
};