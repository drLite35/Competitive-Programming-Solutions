#include<iostream>
#include<map>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int , int>mp;
        vector<int>ans;
        for(int i=0 ; i<nums.size() ; i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>tmp(mp.begin() , mp.end());

        sort(tmp.begin() , tmp.end() , comp);
        for(int i=0 ; i<k ; i++)ans.push_back(tmp[i].first);
        return ans;
    }
    static bool comp(const std::pair<int, int>& a, const std::pair<int, int>& b) {return a.second > b.second;}
};