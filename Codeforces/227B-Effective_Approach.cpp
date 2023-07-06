 #include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    long long int len;
    cin >> len;
    
    unordered_map<int, int> indexMap; // Hash table to store the index of each element
    for (int i = 0; i < len; i++) {
        int num;
        cin >> num;
        indexMap[num] = i; // Store the index of the element in the hash table
    }
    
    int t;
    cin >> t;
    
    long long int v = 0;
    long long int p = 0;
    
    while (t-- > 0) {
        long long int m;
        cin >> m;
        
        if (indexMap.find(m) != indexMap.end()) {
            long long int i = indexMap[m]; // Retrieve the index of 'm' from the hash table
            v += (i + 1);
            p += (len - i);
        }
    }
    
    cout << v << " " << p << " " << endl;
    return 0;
}
