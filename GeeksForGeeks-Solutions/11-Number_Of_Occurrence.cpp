class Solution{
public:
	int count(int arr[], int n, int x) {
	    int ans=0;
	   for(int i=0 ; i<n ; i++){
	       if(arr[i]==x)ans++;
	   }
	   return ans;
	}
};