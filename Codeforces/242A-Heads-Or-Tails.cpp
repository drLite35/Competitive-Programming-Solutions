
#include <iostream>
using namespace std;
int main() {
    int va, pa, vh, ph;
    cin >> va >> pa >> vh >> ph;
    int tot = 0;
    int tmp = vh>ph ? vh : ph+1;
    int tmp1 = vh>ph ? vh : ph+1;
    int ph1 = ph;
    if (ph >= va) {
        cout << 0;
    } else {
        for(int i=tmp1 ; i<=va ; i++){
            for(int j=ph1 ; j<=pa && j<i ; j++){
                tot++;
            }
        }
        cout << tot<<endl;
        for(int i=tmp1 ; i<=va ; i++){
            for(int j=ph1 ; j<=pa && j<i ; j++){
                cout<<i<<" "<<j<<endl;
            }
        }
    }

    return 0;
}