#include <iostream>
using namespace std;
class Solution {
  public:
    int fun1(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int fun2(int n){
        int sum=0;
        int i=2;
        while(n>1){
            if(n%i==0){
                sum+=fun1(i);
                n/=i;
            }
            else i++;
        }
        return sum;
    }
    bool isprime(int n){
        for(int i=2 ; i<=sqrt(n) ; i++){
            if(n%i==0)return false;
        }
        return true;
    }
    int smithNum(int n) {
        if(isprime(n))return 0;
        if(fun1(n)==fun2(n))return 1;
        else return 0;
    }
};