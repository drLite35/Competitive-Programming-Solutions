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
    string a[4];
    int arr[4];
    int brr[4];
    for(int i=0 ; i<4 ; i++){
    	cin>>a[i];
    	arr[i]=a[i].size()-2;
    	brr[i]=a[i].size()-2;

    }
    sort(arr , arr+4);
    if(2*arr[0]<=arr[1] && arr[3]>=2*arr[2])cout<<"C";
    else if(2*arr[0]>arr[1] && arr[3]<2*arr[2])cout<<"C";
    else{
    	char ans;
    	if(2*arr[0]<=arr[1]){
    		for(int i=0 ; i<4 ; i++){
    			if(arr[0]==a[i].size()-2)ans = i+65;
    		}
    	}
    	if(2*arr[2]<=arr[3]){
    		for(int i=0 ; i<4 ; i++){
    			if(arr[3]==a[i].size()-2)ans = i+65;
    		}
    	}
    	cout<<ans;
    }
    return 0;
}