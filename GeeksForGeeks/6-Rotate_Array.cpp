class Solution{
    public:
    
    void rotateArr(int arr[], int d, int n){
        int a[n];
        int j=0;
        d%=n;
        int tmp = n-d;
        for(int i=0 ; i<n ; i++){
            j=i+tmp;
            if(j>=n)j-=n;
            a[j]=arr[i];
           
        }
        for(int i=0 ; i<n ; i++){
            arr[i]=a[i];
        }
    }
};