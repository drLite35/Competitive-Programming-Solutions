#include <iostream>
using namespace std;
bool solve(int i , int j , int n , int m){
    if((i*i)+j==n && (j*j)+i==m)return true;
    else return false;
}
//here we are directly using brute force 
int main(){
    int n , m;
    cin>>n>>m;
    int min = n<=m ? n : m;
    int ans=0;
    for(int i=0 ; i<=min ; i++){
        for(int j=0 ; j<=min ; j++){
            if(solve(i , j , n , m))ans++;
        }
    }
    cout<<ans;
    return 0;
}