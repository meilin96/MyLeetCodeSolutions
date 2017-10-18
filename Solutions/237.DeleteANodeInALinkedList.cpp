class Solution {
 public:
  void deleteNode(ListNode* node) {
    ListNode* tem = node->next;
    *node = *tem;
    delete tem;
  }
};
