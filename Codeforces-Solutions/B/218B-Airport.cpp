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
    int n , m;
    cin>>n>>m;
    int arr[m];
    int brr[m];
    for(int i=0 ; i<m ; i++){
    	cin>>arr[i];
    	brr[i]=arr[i];
    }
    int min=0;
    int max=0;
    for(int i=0 ; i<n ; i++){
    	sort(arr , arr+m);
    	int k=0 ;
    	while(arr[k]==0)k++;
    	min+=arr[k];
    	arr[k]--;
    }
    for(int i=0 ; i<n ; i++){
    	sort(brr , brr+m);
    	int j=m-1;
    	while(brr[j]==0)j--;
    	max+=brr[j];
    	brr[j]--;
    }
    cout<<max<<" "<<min;
    return 0;
}