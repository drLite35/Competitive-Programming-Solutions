#include <iostream>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    
    while (tt-- > 0) {
        int x = 0;
        int y = 0;
        int tmp = 0;
        int len;
        cin >> len;
        
        for (int i = 0; i < len; i++) {
            char c;
            cin >> c;
            
            if (c == 'U') {
                y += 1;
            }
            else if (c == 'D') {
                y -= 1;
            }
                
            else if (c == 'L') {
                x -= 1;
            }
                
            else if (c == 'R') {
                x += 1;
            }
            if (x == 1 && y == 1){
                tmp = 1;
            }
                   
        }
        if (tmp == 1){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
    
    return 0;
}