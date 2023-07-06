#include <iostream>
#include <string>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt-- > 0) {
        string s;
        cin >> s;
        if (s.length() <= 10) {
            cout << s << endl;
        }
        else {
            int t = s.length() - 2;
            string mid = to_string(t);
            string star(1, s[0]);  // Create a string from a single character
            string end(1, s[s.length() - 1]);  // Create a string from a single character
            string n =  star + mid +  end;
            cout << n << endl;
        }
    }
    return 0;
}