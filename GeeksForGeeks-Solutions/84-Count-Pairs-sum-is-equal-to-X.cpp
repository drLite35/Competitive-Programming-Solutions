#include <iostream>
using namespace std;
class Solution {
public:
  // your task is to complete this function
  int countPairs(struct Node *head1, struct Node *head2, int x) {
    vector<int> a1;
    vector<int> a2;
    while (head1 != NULL) {
      a1.push_back(head1->data);
      head1 = head1->next;
    }
    while (head2 != NULL) {
      a2.push_back(head2->data);
      head2 = head2->next;
    }
    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());
    int ans = 0;
    int i = 0;
    int j = a2.size() - 1;
    while (i < a1.size() && j >= 0) {
      if (a1[i] + a2[j] == x) {
        i++;
        j--;
        ans++;
      } else if (a1[i] + a2[j] > x) {
        j--;
      } else
        i++;
    }
    return ans;
  }
};
