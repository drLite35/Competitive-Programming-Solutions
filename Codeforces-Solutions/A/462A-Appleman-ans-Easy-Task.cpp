#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <bitset>         
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;
#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    char mat[n][n];
    bool ans = true;
    for(int i=0 ; i<n ; i++){
    	for(int j=0 ; j<n ; j++){
    		cin>>mat[i][j];
       	}
    }
    for(int i=0 ; i<n ; i++){
    	for(int j=0 ; j<n ; j++){
    		int tmp=0;
    		if(i>0 && j>0 && i<n-1 && j<n-1){
    			if(mat[i-1][j]=='o')tmp++;
    			if(mat[i+1][j]=='o')tmp++;
    			if(mat[i][j-1]=='o')tmp++;
    			if(mat[i][j+1]=='o')tmp++;
    		}
    		else if(i==0 && j==0){
    			if(mat[i+1][j]=='o')tmp++;
    			if(mat[i][j+1]=='o')tmp++;
    		}
    		else if(i==0 && j==n-1){
    			if(mat[i+1][j]=='o')tmp++;
    			if(mat[i][j-1]=='o')tmp++;
    		}
    		else if(i==n-1 && j==0){
    			if(mat[i-1][j]=='o')tmp++;
    			if(mat[i][j+1]=='o')tmp++;
    		}
    		else if(i==n-1 && j==n-1){
    			if(mat[i-1][j]=='o')tmp++;
    			if(mat[i][j-1]=='o')tmp++;
    		}
    		else if(i==0){
    			if(mat[i+1][j]=='o')tmp++;
    			if(mat[i][j-1]=='o')tmp++;
    			if(mat[i][j+1]=='o')tmp++;
    		}
    		else if(i==n-1){
    			if(mat[i-1][j]=='o')tmp++;
    			if(mat[i][j-1]=='o')tmp++;
    			if(mat[i][j+1]=='o')tmp++;
    		}
    		else if(j==0){
    			if(mat[i-1][j]=='o')tmp++;
    			if(mat[i+1][j]=='o')tmp++;
    			if(mat[i][j+1]=='o')tmp++;
    		}
    		else if(j==n-1){
    			if(mat[i-1][j]=='o')tmp++;
    			if(mat[i][j-1]=='o')tmp++;
    			if(mat[i+1][j]=='o')tmp++;
    		}
    		if(tmp%2==1){
    			ans=false;
    			break;}
    	}
    	if(!ans)break;
    }
    if(ans)cout<<"YES";
    else cout<<"NO";
    return 0;

}