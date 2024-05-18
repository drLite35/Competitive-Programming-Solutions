#include <iostream>
#include <math.h>
using namespace std;
int main(){
    long long int a , b , c;
    cin>>a>>b>>c;
    long long int x = sqrt(a*b*c);
    long long int ans = 4*((x/a)+(x/b)+(x/c));
    cout <<ans;
    return 0;
}