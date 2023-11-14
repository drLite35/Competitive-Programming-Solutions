#include <iostream>
using namespace std;
int main(){
    int p;
    cin>>p;
    int ap[p];
    for(int i =0 ; i<p ; i++){cin>>ap[i];}
    int r;
    cin>>r;
    int ar[r];
    for(int i=0 ; i<r ; i++){cin>>ar[i];}
    int maxr=1;
    for(int i=0 ; i<p ; i++){
        for(int j=0 ; j<r ; j++){if(ar[j]%ap[i]==0 && (ar[j]/ap[i])>maxr)maxr=ar[j]/ap[i];}
    }
    int ans=0;
    for(int i=0 ; i<p ; i++){
        for(int j=0 ; j<r ; j++){if(ar[j]%ap[i]==0 && (ar[j]/ap[i])==maxr)ans++;}
    }
    cout<<ans;
    return 0;
}