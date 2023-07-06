#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n + 1; i++) {
        for (int k = n; k > i; k--) {
            cout << "  "; // Two spaces for each position
        }
        for (int j = 0; j <= i; j++) {
            if(j==0 && i==0)cout<<j;
            else cout << j << " ";
        }
        for (int j = i - 1; j >= 0; j--) {
            if(j==0)cout<<j;
            else cout << j << " ";
        }
        cout << endl;
    }

    for (int i = n; i > 0; i--) {
        for (int k = n; k >= i; k--) {
            cout << "  "; // Two spaces for each position
        }
        for (int j = 0; j < i; j++) {
            if(j==0 && i==1)cout<<j;
            else cout << j << " ";
        }
        for (int j = i - 2; j >= 0; j--) {
            if(j==0 )cout<<j;
            else cout << j << " ";
        }
        if(i!=0)cout << endl;
    }

    return 0;
}
