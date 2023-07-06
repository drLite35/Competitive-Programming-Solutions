#include <iostream>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    int t = tt/3;
    int rem = tt%3;
    int ch =0;
    int bi =0;
    int bc =0;
    while(t--){
        int a , b , c;
        cin >> a >> b>> c;
        ch+=a;
        bi+=b;
        bc+=c;
    }
    if(rem==1){
        int n ; 
        cin >> n;
        ch+=n;
    }
    if(rem==2){
        int n , n1; 
        cin >> n >>n1;
        ch+=n;
        bi+=n1;
    }
    
    if (ch > bi && ch > bc)
        cout << "chest";
    else if (bi > ch && bi > bc)
        cout << "biceps";
    else
        cout << "back";
        
        return 0;
    
}