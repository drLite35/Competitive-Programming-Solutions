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
    int x1 , y1 , x2 , y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2){
    	int x3;
    	if(y1>=0 && y2>=0)x3 = abs(abs(y2)-abs(y1))+x1;
    	else x3 = abs(abs(y2)+abs(y1))+x1;
    	int y3 = y1;
    	int y4 = y2;
    	cout<<x3<<" "<<y3<<" "<<x3<<" "<<y4;
    }
    else if(y1==y2){
    	int x3 = x1;
    	int y3;
    	if(x1>=0 && x2>=0)y3 = abs(abs(x2)-abs(x1))+y1;
    	else y3 = abs(abs(x2)+abs(x1))+y1;    	
    	int x4 = x2;
    	cout<<x3<<" "<<y3<<" "<<x4<<" "<<y3;
    }
    else {
    	if(abs((x2)-(x1))!=abs((y2)-(y1))) cout<<-1;
    	else{
    		int x3 = x1;
    		int y3 = y2;
    		int x4 = x2;
    		int y4 = y1;
    		cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
    	}
    }
    return 0;

}