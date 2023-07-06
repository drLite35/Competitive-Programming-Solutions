#include <iostream>
using namespace std;
int main (){
    int n , m;
    cin >> n >>m ;
    int tm=0;
    while (true){
        for(int i=1 ; i<=n ;i++){
            if(m<i){
                tm=1;
                break;
            }
            m-=i;
        }
       if(tm==1)break;
    }
    cout << m;
    return 0;
}