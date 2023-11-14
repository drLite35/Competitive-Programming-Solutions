class Solution
{
    public:
    void insertionSort(int arr[], int n)
    {
        for(int i=1 ; i< n ; i++){
            int tmp = arr[i];
            int j = i-1;
            while(j>=0 && arr[j]>tmp){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1] = tmp;
        }
    }
};