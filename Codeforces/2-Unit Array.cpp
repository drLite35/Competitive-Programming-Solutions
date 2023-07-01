#include <iostream>
using namespace std;
 
int main() {
    int tc;
    cin >> tc;
 
    while (tc > 0) {
        int input;
        cin >> input;
        int arr[input];
 
        for (int i = 0; i < input; i++) {
            cin >> arr[i];
        }
 
        int neg = 0;
        int pos = 0;
 
        for (int i = 0; i < input; i++) {
            if (arr[i] == -1) {
                neg++;
            } else {
                pos++;
            }
        }
        int ans = 0;
        if(neg>pos)
        {
            while(true){
                if(pos>=neg){break;}
                ans++;
                neg--;
                pos++;
            }
        }
    }
}