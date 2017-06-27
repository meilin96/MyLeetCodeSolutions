class Solution {
	public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
		ListNode *lp1 = l1;
		ListNode *lp2 = l2;
		ListNode *res = (ListNode*)malloc(sizeof(ListNode));
		ListNode *THEREALRES = res;
		bool isJinwei = false;
		while(lp1 || lp2){
			int l1x,l2x;
			int resx;
			if(lp1 != NULL)
				l1x = lp1->val;
			else
				l1x = 0;
			if(lp2 != NULL)
				l2x = lp2->val;
			else
				l2x = 0;
			resx = (l1x + l2x + isJinwei)%10;
			isJinwei = (l1x + l2x + isJinwei)/10;
			res->val = resx;
			lp1 = lp1?lp1->next:NULL;
			lp2 = lp2?lp2->next:NULL;
			if(!(lp1 || lp2) && isJinwei){
				ListNode* tem = (ListNode*)malloc(sizeof(ListNode));
				tem->val = 1;
				tem->next = NULL;
				res->next = tem;
				break;
			} 
			if(lp1 || lp2 || isJinwei){
				ListNode* tem = (ListNode*)malloc(sizeof(ListNode));
				res->next = tem;
				res = tem;
			}else{
				res->next = NULL;
				break;
			}
		}
		return THEREALRES;
	}   		
};