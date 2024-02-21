#include <vector>
#include <utility>
#include <map>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int , int>a;
        for(int i=0 ; i<nums.size() ; i++){
            a[nums[i]]++;   
        }
        int i=0;
        for(const auto&p : a){
            if(p.second>1){
                nums[i++]=p.first;
                nums[i++]=p.first;
            }
            else {
                nums[i++]=p.first;
            }
        }
        return i;
    }
};