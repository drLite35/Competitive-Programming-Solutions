class Solution
{
    //Function to return list containing first n fibonacci numbers.
    public static long[] printFibb(int n) {
        long[] arr =new long [n];
        if(n==1)arr[0]=1;
        if(n==2){
            arr[0]=1 ;
            arr[1]=1;
        }
        if(n>2){
            long f1=1;
            long f2=1;
            long f3;
            arr[0]=1;
            arr[1]=1;
            for(int i=2 ; i<n ; i++){
                f3 = f2+f1;
                f1 = f2;
                f2 = f3;
                arr[i] = f3;
            }
        }
        return arr;
    }
}