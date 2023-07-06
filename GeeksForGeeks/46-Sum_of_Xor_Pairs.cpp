class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
    	long long int res=0;
    	for(int i=0; i<32 ; i++){
    	  long long int o=0 , z=0;
    	    for(int j=0 ; j<n ; j++){
    	        if((arr[j]>>i)&1==1)o++;
    	        else z++;
    	    }
    	    res+=o*z*(1<<i);
    	}
    	return res;
    }
};
