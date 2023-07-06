#include <iostream>
using namespace std;
int main(){
    int len;
    cin>>len;
    int arr[len];
    for(int i=0 ; i<len  ; i++){
         cin>>arr[i];
    }
    int z=0;
    int f=0;
    for(int i=0 ; i<len ; i++){
        if(arr[i]==0)z++;
        else f++;
    }
    f/=9;
    if(z==0)cout<<-1;
    else{
        if(f==0)cout<<0;
        else{
            string s="555555555";
            string t="555555555";
            for(int i=1 ; i<f ; i++){
                s+=t;
            }
            for(int i=0 ; i<z ; i++){
                s+='0';
            }
            cout<<s;
        }
    }
    return 0;
}