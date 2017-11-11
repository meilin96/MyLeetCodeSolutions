class Solution {
public:
  ListNode *reverseList(ListNode *head) {
    ListNode *p1 = NULL;
    ListNode *p2 = head;
    ListNode *p3 = NULL;
    while (p2) {
      if (p2->next)
        p3 = p2->next;
      else
        p3 = p2;
      p2->next = p1;
      if (p3 == p2)
        return p2;
      p1 = p2;
      p2 = p3;
    }
    return p2;
  }
  ListNode* reverse(ListNode* head){
    ListNode* p = NULL;
    while(head != NULL){
        ListNode* p1 = head;
        head = head->next;
        p1.next = p;
        p = p1;
    }
    return p;
  }
};

