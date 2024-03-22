#include <vector>
using namespace std;
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
  bool isPalindrome(ListNode *head) {
    int i = 0;
    ListNode *q = head;
    ListNode *r = head;
    vector<int> v;
    while (!(q->next == NULL)) {
      i++;
      q = r;
      r = r->next;
      v.push_back(q->val);
    }
    int j = 0;
    i--;
    while (j < i) {
      if (v[i] != v[j])
        return false;
      j++;
      i--;
    }
    return true;
  }
};
