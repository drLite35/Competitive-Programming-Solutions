#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin() , s.end());
    int ans = s.size();
    for(int i = 0; i < s.size()-1;){
        int tmp = 0;
        for(int j = i; j < s.size(); j++){
            if(s[j] == s[j+1]) ans--;
            else{
                i = j+1;
                break;
            }
        }
    }
    if(ans % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}