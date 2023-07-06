
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int arr[1000];
    int n = 1;
    int index = 0;
    while (index < 1000) {
        if (n%10 !=3 && n % 3 != 0) {
            arr[index] = n;
            index++;
        }
        n++;
    }
    while (t--) {
        int a;
        cin >> a;
        cout << arr[a-1] << endl;
    }

    return 0;
}
