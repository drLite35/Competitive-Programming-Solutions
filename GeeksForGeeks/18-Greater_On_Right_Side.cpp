class Solution{
public:	
	/* Function to replace every element with the
	next greatest element */
	void nextGreatest(int arr[], int n) {
	    int max = (-1);
	    for(int i=(n-1) ; i>=0 ; i--){
	        int tmp = arr[i];
	        arr[i] = max;
	        if(tmp>max)max=tmp;
	    }
	}


};