#include <vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0 ; j<nums.size() ; j++){
            if(nums[j]!=0){
                nums[i]=nums[j];
                i++;
            }
        }
        while(i<nums.size()){
            nums[i++]=0;
        }
    }
};