#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int w = 0, d = 0, l = 0;
    for(int i=1 ; i<=6 ; i++){
    if (abs(a - i) > abs(b - i)) {
        l++;
    } else if (abs(a - i) == abs(b - i)) {
        d++;
    } else if (abs(a - i) < abs(b - i)){
        w++;
    }
    }
    
    cout << w << " " << d << " " << l << endl;
    return 0;
}