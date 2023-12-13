#include <iostream>
using namespace std;
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int row =  mat.size();
        int col =  mat[0].size();
        int ans = 0;
        for(int i=0 ; i<row ; i++){
            for(int j=0 ; j<col ; j++){
                bool flag = true;
                if(mat[i][j]==0)continue;
                else{
                    for(int a = 0 ; a<col ; a++ ){
                        if(a!=j && mat[i][a])flag = false;
                    }
                    for(int a = 0 ; a<row ; a++ ){
                        if(a!=i && mat[a][j])flag = false;
                    }
                }
                if(flag)ans++;
            }
        }   
        return ans;
    }
};