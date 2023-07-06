class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int ans[n];
        int tmp(0);
        for(int i=0 ; i<n ; i++){
            if(arr[i]>=0){
                ans[tmp]=arr[i];
                tmp++;}
        }
        for(int i=0 ; i<n ; i++){
            if(arr[i]<0){
                ans[tmp]=arr[i];
                tmp++;
            }
        }
        for(int i=0 ; i<n ; i++){
            arr[i]=ans[i];
        }
    }
};