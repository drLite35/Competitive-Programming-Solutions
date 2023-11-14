#include <iostream>
using namespace std;
class Solution{
    public:
    // You need to complete this function
    //(N , source , destination , helper )  
    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        long long int r = 0 , l=0;
        if(N==0)return 0;
        if(N>0){
            l = toh(N-1 , from , aux , to); 
            cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
            r = toh(N-1 , aux , to , from);
        }
        return r+l+1;
    }
//points to remember first disk will go from 1 to helper always then continue from helper 
};