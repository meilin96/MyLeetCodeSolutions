class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return NULL;
        ListNode* headnode = new ListNode(0);
        headnode->next = head;
        ListNode* pre = headnode;
        ListNode* p = head;
        while(p){
            if(p->val == val){
                pre->next = p->next;
                p = p->next;
            }else{
                pre = p;
                p = p->next;
            }
        }
        return headnode->next;
    }
};