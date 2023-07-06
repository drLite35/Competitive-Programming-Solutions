class Solution{
  public:
    long long int totalFine(int n, int date, int car[], int fine[])
    {
        long long int a = 0;
        for(int i=0 ; i<n ; i++){
            if((car[i]%2)!=(date%2))a+=fine[i];
        }
        return a;
    }
};