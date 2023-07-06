#include <iostream>
using namespace std;
int main(){
    int t; 
    cin >> t;
    while(t--){
        int len ;
        cin >> len;
        int max(-100);
        int min(1000000001);
        for(int i=0 ; i<len ; i++){
            int a;
            cin >>a;
            if(a>max)max=a;
            if(a<min)min=a;
        }
        cout<<max-min<<endl; 
    }
    return 0;
}