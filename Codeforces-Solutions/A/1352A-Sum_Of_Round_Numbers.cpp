#include <iostream>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n ;
        cin >> n;
        int a[n];
        int tmp = 0;
        int x = 1;
        while(n>0){
            if((n%10)!=0){
                a[tmp] = (n%10)*(x);
                tmp++;
            }
            n/=10;
            x*=10;
        }
        cout << tmp << endl;
        for(int i=0 ; i<tmp ; i++){
            cout << a[i] << " ";
        }
        cout<<" "<<endl;
    }
    return 0;
}
