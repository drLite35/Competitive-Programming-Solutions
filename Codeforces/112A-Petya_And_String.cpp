#include <iostream>
#include <cctype> // Include this header for tolower() function
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    

    for (int i = 0; i < a.size(); i++) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }

    int ans = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] > b[i]) {
            ans = 1;
            break;
        } else if (a[i] < b[i]) {
            ans = -1;
            break;
        }
    }

    cout << ans;
    return 0;
}