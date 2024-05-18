#include <iostream>
using namespace std;

int main() {
    int len, k;
    cin >> len >> k;

    int arr[len];
    for(int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    int tmp = 0;
    int num = arr[k-1];
    for(int i = 0; i < len; i++) {
        if((arr[i] >= num) && (arr[i] > 0)) {
            tmp++;
        }
    }

    cout << tmp << endl;

    return 0;
}