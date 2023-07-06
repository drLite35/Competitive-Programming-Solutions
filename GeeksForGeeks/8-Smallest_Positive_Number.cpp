#include <iostream>
using namespace std;
class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) {
    //sort(arr,arr+n);
       int num=1;
       for(int i = 0 ; i<n ;i++){
           if(arr[i]==num && arr[i]>=1){
               num++;
           }
       }
       return num;
}

};