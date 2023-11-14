#include <iostream>
using namespace std;
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    sort(arr , arr+n);
	    int max=arr[n-1];
	    for(int i=n-1 ; i>=0 ; i--){
	        if(arr[i]<max){
	            max=arr[i];
	            break;
	        }
	    }
	    if(max==arr[n-1])return -1;
	    return max;
	}
};