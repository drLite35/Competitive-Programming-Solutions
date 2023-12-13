class Solution{
public:
	// #define ll long long
	long long int countStrings(int n) {
	    long long int t1=2;
	    long long int t2=3;
	    if(n==1)return t1;
	    if(n==2)return t2;
	    for(int i=1 ; i<=n-2; i++){
	        long long int tmp = t2;
	        t2 +=t1;
	        t1 = tmp;
	        t1%=1000000007;
	        t2%=1000000007;
	    }
	   return t2;
	}
};