#include <iostream>
struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        struct ListNode* r = NULL;
        struct ListNode* q = NULL;
        while(head!=NULL){
            r = q;
            q = head;
            head = head->next;
            q->next = r;
        }
        return q;
    }
};