class Solution {
public:
  ListNode *oddEvenList(ListNode *head) {
    if (!head || !head->next || !head->next->next)
      return head;
    ListNode *evenstart = head->next;
    ListNode *p = head;
    while (p->next && p->next->next) {
      ListNode *p4 = p->next->next->next;
      ListNode *p3 = p->next->next;
      p->next->next = p4;
      p->next = p3;
      p = p->next;
    }
    p->next = evenstart;
    return head;
  }
};
