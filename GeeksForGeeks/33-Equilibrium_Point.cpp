class Solution{
    public:
    
    int equilibriumPoint(long long a[], int n) {
        long long int ans = -1;
        long long int sum = 0;
        for(long long int i=0 ; i<n ; i++){
            sum+=a[i];
        }
        if(n==1)ans=1;
        else{
        long long int psum = a[0];
        for(long long i=1 ; i<n-1 ; i++){
            sum-=psum;
            psum +=a[i];
            if(sum==psum){
                ans=i+1;
                break;
            }
            sum+=psum-a[i];
        }
        
        }
        return ans;
    }

};