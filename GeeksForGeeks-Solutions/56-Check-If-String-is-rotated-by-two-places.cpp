#include <iostream>
using namespace std;
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        int n = str1.size();
        if(str1.size()!=str2.size())return false;
        string a = "";
        string b = "";
        for(int i=0 ; i<str1.size() ; i++){
            a+=str1[(i+2)%n];
            if(i-2<0){
                b+=str1[i-2+n];
            }
            else{
                b+=str1[i-2];
            }
        }
        if(a==str2 || b==str2)return true;
        return false;
        
    }

};