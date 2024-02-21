#include <algorithm>
#include<vector>
#include <__algorithm/sort.h>
using namespace std;
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int len = nums.size();
        sort(nums.begin() , nums.end());
        if(len==1)return 0;
        if(len<=k)return nums[len-1]-nums[0];
        int ans = nums[len-1];
        for(int i=0 ; i<len-k+1 ; i++){
            if(ans>nums[i+k-1]-nums[i])ans=nums[i+k-1]-nums[i];
        }
        return ans;
    }
};