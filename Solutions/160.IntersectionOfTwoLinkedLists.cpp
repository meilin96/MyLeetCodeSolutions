class Solution {
public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    set<ListNode *> a;
    while (headA) {
      a.insert(headA);
      headA = headA->next;
    }
    while (headB) {
      auto res = a.find(headB);
      if (res != a.end())
        return *res;
      headB = headB->next;
    }
    return NULL;
  }
};
