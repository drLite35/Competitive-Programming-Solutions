#include <iostream>
using namespace std;
struct Node
{
    bool data;   // NOTE data is bool
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

class Solution
{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
        long long unsigned int decimalValue(Node *head)
        {
           long long unsigned int res = 0;
           while(head){
               res=(res*2 + head->data)%1000000007;
               head = head ->next;
           }
           return res;
        }
};