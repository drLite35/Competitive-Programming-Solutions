#include <iostream>
using namespace std;
class Solution{
    public:
    int isRepresentingBST(int arr[], int N)
    {
        return is_sorted(arr , arr+N);
    }
};