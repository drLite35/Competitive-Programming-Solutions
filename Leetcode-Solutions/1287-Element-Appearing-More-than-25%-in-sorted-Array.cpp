#include <iostream>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int , int>mp;
        for(int i=0 ; i<arr.size() ; i++){
            mp[arr[i]]++;
        }
        int ctrl = arr.size()/4;
        int ans=0;
        for(int i=0 ; i<arr.size() ; i++){
            if(mp[arr[i]]>ctrl)ans=arr[i];
        }
        return ans;

    }
};