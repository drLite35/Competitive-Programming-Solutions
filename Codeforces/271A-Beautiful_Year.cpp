#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    year++;
    int tmp = year;
    
    while (true) {
        while (tmp > 0) {
            int arr[4];
            for (int i = 0; i < 4; i++) {
                arr[i] = tmp % 10;
                tmp /= 10;
            }
            
            if ((arr[0] != arr[1]) && (arr[0] != arr[2]) && (arr[0] != arr[3]) && (arr[1] != arr[2]) && (arr[1] != arr[3]) && (arr[2] != arr[3])) {
                cout << year << endl;
                return 0;  // Terminate the program
            } else {
                year++;
                tmp = year;
            }
        }
    }
    
    return 0;
}