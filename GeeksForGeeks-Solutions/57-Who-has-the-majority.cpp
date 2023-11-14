class Solution{
  public:
    // Function to find element with more appearances between two elements in an
    // array.
    int majorityWins(int arr[], int n, int x, int y) {
        int max=arr[0];
        for(int i=0 ; i<n ; i++){
            if(max<arr[i])max=arr[i];
        }
        if(x>max)max=x;
        if(y>max)max=y;
        int h[max+1];
        for(int i=0 ; i<max+1 ; i++)h[i]=0;
        for(int i=0 ; i<n ; i++){
            h[arr[i]]++;
        }
        if(h[x]>h[y])return x;
        else if(h[y]>h[x])return y;
        else if(h[x]==h[y]){
            if(x>y)return y;
            else return x;
        }
        return 0;
    }
};