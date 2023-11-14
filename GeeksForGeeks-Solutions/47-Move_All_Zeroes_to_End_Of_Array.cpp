class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int ans[n];
	    int i=0;
	    for(int j=0 ; j<n ; j++){
	        if(arr[j]!=0){
	            ans[i]=arr[j];
	            i++;}
	    }
	    for( ; i<n ; i++){
	        ans[i]=0;
	    }
	    for(int i=0 ; i<n ; i++){
	        arr[i]=ans[i];
	    }
	}
};
