class Solution{
    //Function to count the frequency of all elements from 1 to N in the array.
    public static void frequencyCount(int arr[], int N, int P){
    int ans[] = new int[N+1];
    for(int i=0 ; i<=N ; i++){
        ans[i]=0;
    }
    for(int i=0 ; i<N ; i++){
        if(arr[i]<=N){
            ans[arr[i]]++;
        }
    }
    for(int i=0 ; i<N ; i++){
        arr[i] = ans[i+1];
    }
    }
}