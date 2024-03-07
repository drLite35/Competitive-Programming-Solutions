struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
  ListNode *middleNode(ListNode *head) {
    ListNode *sl = head;
    ListNode *fa = head;
    while (fa != nullptr && fa->next != nullptr) {
      sl = sl->next;
      fa = fa->next->next;
    }
    return sl;
  }
};
