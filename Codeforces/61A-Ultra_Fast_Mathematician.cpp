#include <iostream>
using namespace std;

int main() {
    string a , b ,s;
    cin >> a >>b;
    for(int i=0 ;i<a.size() ; i++){
        if(a[i]==b[i])s+='0';
        else s+='1';
    }
    cout << s << endl;

    return 0;
}