#include <iostream>
using namespace std;
class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<vector<int>> ans(grid.size() , vector<int>(grid[0].size() , 0));
        vector<int>r1(grid.size() , 0);
        vector<int>c1(grid[0].size() , 0);
        vector<int>r0(grid.size() , 0);
        vector<int>c0(grid[0].size() , 0);
        for(int i=0 ; i<grid.size() ; i++){
            int tmp0=0;
            int tmp1=0;
            for(int j=0 ; j<grid[0].size() ; j++){
                if(grid[i][j]==0)tmp0++;
                else tmp1++;
            }
            r1[i]=tmp1;
            r0[i]=tmp0;
        }
        for(int i=0 ; i<grid[0].size() ; i++){
            int tmp0=0;
            int tmp1=0;
            for(int j=0 ; j<grid.size() ; j++){
                if(grid[j][i]==0)tmp0++;
                else tmp1++;
            }
            c1[i]=tmp1;
            c0[i]=tmp0;
        }
        for(int i=0 ; i<grid.size() ; i++){
            for(int j=0 ; j<grid[0].size() ; j++){
                ans[i][j] = r1[i]-r0[i]+c1[j]-c0[j];
            }
        }
        return ans;
    }
};