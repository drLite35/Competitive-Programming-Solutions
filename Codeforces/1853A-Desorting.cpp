#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; 
    cin >> n;

    while (n--) {
        int len; 
        cin >> len;

        vector<int> arr(len); 

        for (int i = 0; i < len; ++i) {
            cin >> arr[i]; 
        }

    
        vector<int> sortedArr = arr;
        sort(sortedArr.begin(), sortedArr.end());

      
        bool isSorted = (arr == sortedArr);

        if (isSorted) {
            int minDiff = INT_MAX;
            for (int i = 1; i < len; ++i) {
                int diff = arr[i] - arr[i - 1];
                minDiff = min(minDiff, diff);
            }
            cout << minDiff / 2 + 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}
