#include <iostream>
using namespace std;
class Solution{
public:
	bool checkTriplet(int arr[], int n) {
	    if(n<3)return false;
	    sort(arr , arr+n);
	    for(int i=0 ; i<n ; i++){
	        arr[i] = arr[i]*arr[i];
	    }
	    for(int i = n-1 ; i>1 ; i--){
	       int h = arr[i];
	       int l = 0 ;
	       int r = i-1;
	       while(l<r){
	           if(arr[l]+arr[r]==h)return true;
	           else if(arr[l]+arr[r]>h)r--;
	           else l++;
	       }
	    }
	    return false;
	}
};