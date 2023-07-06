
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans;
    while(n--){
        int i=-1000;
        int m;
        cin >> m;
        int tmp=1;
        while(m--){
            int a , b;
            cin >> a >> b;
            if((a<=10) && (b>=i)){
                i = b;
                ans = tmp;
            }
            tmp++;
        }
        cout << ans<<endl;
    }
    
    return 0;
}