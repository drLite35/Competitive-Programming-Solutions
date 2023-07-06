#include <iostream>
using namespace std;
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    int len=S.size();
	    string a(len, ' ');
	    
	    
	    for(int i=0 ; i<len ; i++){
	        a[len-1-i]=S[i];
	    }
	    if(a==S)return 1;
	    else return 0;
	}

};