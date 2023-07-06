class Solution {
  public:
    int isPossible(int N, int arr[]) {
        long long int sum = 0;
        for(int i=0 ; i<N ; i++){
            sum+=arr[i];
        }
        if(sum%3==0)return 1;
        else return 0;
    }
};