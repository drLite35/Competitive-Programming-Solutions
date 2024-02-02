#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int index(vector<int>& nums , int target , bool b){
        int l = 0;
        int r = nums.size()-1;
        int ans = -1;
        while(l<=r){
            int mid = l + ((r-l)/2);
            if(nums[mid]<target)l=mid+1;
            else if(nums[mid]>target)r=mid-1;
            else{
                ans=mid;
                if(b)l=mid+1;
                else r=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        ans.push_back(index(nums , target , false));
        ans.push_back(index(nums , target , true));
        return ans;
    }
};