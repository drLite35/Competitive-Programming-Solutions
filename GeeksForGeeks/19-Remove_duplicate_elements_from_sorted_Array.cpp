class Solution{
public:
    int remove_duplicate(int a[],int n){
        int tmp =1 ;
        int arr[n];
        arr[0]= a[0];
        for(int i=0 ; i<n-1 ; i++){
            if(a[i]!=a[i+1]){
            arr[tmp] = a[i+1];
             tmp++;
            }
        }
        for(int i=0 ; i<tmp ; i++){
            a[i]=arr[i];
        }
        return tmp;
    }
};