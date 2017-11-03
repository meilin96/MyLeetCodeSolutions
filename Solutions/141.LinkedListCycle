class Solution {
public:
  bool hasCycle(ListNode *head) {
    if (!head)
      return false;
    ListNode *walker = head;
    ListNode *runner = head->next;
    while (walker && runner && runner->next) {
      if (walker == runner)
        return true;
      runner = runner->next->next;
      walker = walker->next;
    }
    return false;
  }
};
