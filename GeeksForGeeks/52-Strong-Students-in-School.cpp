#include<iostream>
using namespace std;
int diffSum(int n,int m,int arr[])
{
    sort(arr , arr+n);
    long long int sum1=0 , sum2=0;
    for(int i=0 ; i<m ; i++)sum1+=arr[i];
    for(int i=n-1 ;i>=n-m ;i-- )sum2+=arr[i];
    return sum2-sum1;
}