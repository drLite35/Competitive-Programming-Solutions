#include <iostream>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int a , b, c;
        cin >>a>>b>>c;
        if(((a+b)>=10)||((c+b)>=10)||((a+c)>=10))cout<<"YES";
        else cout << "NO";
    }
    return 0;
}