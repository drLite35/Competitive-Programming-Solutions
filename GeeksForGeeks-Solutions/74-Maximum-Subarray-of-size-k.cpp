class Solution{   
public:
    long maximumSumSubarray(int K, int Arr[] , int N){
       long ans = 0;
       long sum = 0;
       for(int i=0 ; i<K ; i++){
           ans+=Arr[i];
           sum=ans;
       }
       int i = 0;
       int j = i+K;
       for( ; j<N ; i++ , j++){
           ans-=Arr[i];
           ans+=Arr[j];
           if(sum<ans)sum=ans;
       }
       return sum;
    }
};