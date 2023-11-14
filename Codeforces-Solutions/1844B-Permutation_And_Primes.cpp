
#include <iostream>
#include <string>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt-->0){
        long long a;
        cin >> a;
        long long mid = a/2;
        long long end = a-1;
        long long flag;
        flag = 4;
        long long arr[a];
        arr[0] = 2;
        arr[end] = 3;
        arr[mid] = 1;
        
        
        long long num =0;
        while(num++<a-2){
            if(num==mid)continue;
            else{
                arr[num]=flag++;
            }
        }
        for(int i = 0 ; i<a ; i++){
            cout<<arr[i]<<" ";
        }
        cout<< endl;
        
        
        
    }
    
    return 0;
}