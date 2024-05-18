#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    string ans;
    

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            ans += s[i];
    }
    int o = 1;
    sort(ans.begin(), ans.end());
    if(ans.length() == 0) {
        o=0;}
    else{
    
    for (int i = 0; i < ans.length()-1; i++) {
        if (ans[i] == ans[i + 1])continue;
         else   o++;
    }
    }
    cout << o << endl;
    
    return 0;
}