#include <iostream>
#include <map>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size() , 0);
        bool flag = false;
        int f = -1;
        int a = 1;
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==0 && flag==true){
                return vector<int>(nums.size() , 0);
            }
            else if(nums[i]==0){
                flag=true;
                f=i;
            }
            else{
                a*=nums[i];
            }
           
        }
        if(flag){
            ans[f]=a;
        }
        else{
            for(int i=0 ; i<nums.size() ; i++){
                ans[i]=a/nums[i];
            }
        }
        return ans;
    }
};