class Solution{
	public:
	void shuffleArray(int arr[],int n)
	{
	    int a[n/2];
	    int b[n/2];
	    int i=0;
	    for(; i<n/2 ; i++){
	        a[i] = arr[i];
	    }
	    for(int j=0 ; j<n/2 ;j++){
	        b[j] = arr[i++];
	    }
	    int l=0;
	    for(int k=0 ; k<n/2 ; k++){
	        arr[l++] = a[k];
	        arr[l++] = b[k];
	    }
	}
};