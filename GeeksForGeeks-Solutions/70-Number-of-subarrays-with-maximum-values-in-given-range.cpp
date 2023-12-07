class Solution{
    public:
    long countSubarrays(int a[], int n, int L, int R)
    {
        long long int cnt=0;
        int l = 0;
        int r = 0;
        int m = 0;
        while(l<n){
           if(a[l]<L){
               l++;
               cnt+=m;}
           else if(a[l]>R){
               l++;
               r=l;
               m=0;
           }
           else{
               m=l-r+1;
               cnt+=m;
               l++;
           }
        }
        return cnt;
    }
};
