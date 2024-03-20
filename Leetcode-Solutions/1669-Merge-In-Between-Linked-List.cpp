
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
  ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2) {
    ListNode *tmp = list1;
    int i = 1;
    for (; i < a; i++) {
      tmp = tmp->next;
    }
    ListNode *beforeA = tmp;
    for (; i <= b; i++) {
      tmp = tmp->next;
    }
    ListNode *afterB = tmp->next;
    beforeA->next = list2;
    while (list2->next != nullptr) {
      list2 = list2->next;
    }
    list2->next = afterB;
    return list1;
  }
};
