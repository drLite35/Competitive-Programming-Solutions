void rotate(int arr[], int n)
{
    int tmp[n];
    tmp[0] = arr[n-1];
    for(int i=0 ; i<n-1 ;i++){
        tmp[i+1] = arr[i];
    }
    for(int i=0 ; i<n ;i++){
        arr[i]=tmp[i];
    }
}