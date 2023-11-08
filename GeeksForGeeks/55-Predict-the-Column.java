class Solution
{
    int columnWithMaxZeros(int arr[][], int N)
    {
        int ans=-1;
        int max=-1;
        for(int i=0 ; i<N ; i++){
            int tmp=-1;
            for(int j=0 ; j<N ; j++)if(arr[j][i]==0)tmp++;
            if(tmp>max){
                max=tmp;
                ans=i;
            }
        }
        return ans;
    }
}