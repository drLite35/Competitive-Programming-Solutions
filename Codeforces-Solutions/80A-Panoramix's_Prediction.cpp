#include <iostream>
#include <cmath>

using namespace std;

string isPrime(int n, int m) {
    for (int i = 2; i <= sqrt(m); i++) {
        if (m % i == 0) {
            return "NO";
        }
    }
    
    int near = n+1;
    int tmp = 0;
    
    while (near < 50) {
        tmp = 0;
        
        for (int i = 2; i <= sqrt(near); i++) {
            if (near % i == 0) {
                tmp = 1;
            }
        }
        
        if (tmp == 1) {
            near++;
            continue;
        } else {
            break;
        }
    }
    
    if (near == m) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    
    string result = isPrime(n, m);
    cout << result << endl;
    
    return 0;
}