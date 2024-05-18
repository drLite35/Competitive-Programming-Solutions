#include <iostream>
using namespace std ;
int main(){
    int n ; 
    cin >> n;
    int num1 = n*n;
    int num2 = 1;
    while(num1>num2){
        cout << num2 <<" "<<num1<<endl;
        num1--;
        num2++;
    }
    return 0;
}