#include <iostream>
#include <cmath>
#include <cstdlib>
#include <fstream>
struct ListNode {
	int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        long long int1 = 0;
//        long long int2 = 0;
//        ListNode* p1 = l1;
//        int cnt = 0;
//        do{
//            int1 += p1->val*pow(10,cnt);
//            cnt++;
//            p1 = p1->next;
//        }while(p1!=NULL);
//        cnt = 0;
//        ListNode* p2 = l2;
//        do{
//            int2 += p2->val*pow(10,cnt);
//            cnt++;
//            p2 = p2->next;
//        }while(p2!=NULL);
//        
//        long long value = int1 + int2;
//		
//		ListNode* res = (ListNode*)malloc(sizeof(ListNode));
//		ListNode* r = res;
//		r->val = value%10;
//		r->next = NULL;
//		if(value < 10){
//			return r;
//		}
//		value = value/10;
//		ListNode* p = r;
//		while(value!=0){
//			p = (ListNode*)malloc(sizeof(ListNode));
//			p->val = value%10;
//			r->next = p;
//			r = p;
//			value = value/10;
//		}
//		r->next = NULL;
//		return res;
	
    	ListNode* res = (ListNode*)malloc(sizeof(ListNode));
    	res->next = NULL;
    	bool isN = (l1->val + l2->val) > 9 ? true:false;
    	res->val = isN?(l1->val + l2->val)%10:(l1->val + l2->val);
    	ListNode* rc = res;
    	ListNode* rn = res;
		ListNode* r1 = l1->next;
    	ListNode* r2 = l2->next;
    	
    	

    	
		while(r1 || r2 || isN){
    		rn = (ListNode*)malloc(sizeof(ListNode));
    		rc->next = rn;
    		int sum = 0;
    		if(r1 && r2)
    			sum = r1->val + r2->val;
    		else if(r1 || r2)
    			sum = r1==NULL?r2->val:r1->val;
    			
			if(isN){
    			sum++;
    			isN = false;
    		}
			if(sum > 9){
    			sum = sum%10;
    			isN = true;
    		}
    		rn->val = sum;
    		rn->next = NULL;
    		rc = rn;
    		if(r1!=NULL)
    			r1 = r1->next;
    		else
    			r1 = NULL;
    		
    		if(r2!=NULL)
				r2 = r2->next;
    		else
    			r2 = NULL;
		}
    	return res;
	}
};

int main()
{
	ListNode* l1 = (ListNode*)malloc(sizeof(ListNode));
	l1->val = 5;
//	l1->next = (ListNode*)malloc(sizeof(ListNode));
//	l1->next->val = 7;
	l1->next = NULL;
		
	ListNode* l2 = (ListNode*)malloc(sizeof(ListNode));
	l2->val = 5;
	l2->next = NULL;
//	ListNode* r = l2;
//	ListNode* p;
//	for(int i = 2;i < 4;i++){
//		p = (ListNode*)malloc(sizeof(ListNode));
//		p->val = i;
//		r->next = p;
//		r = p;
//	}
//	r->next = NULL;
	
	
	Solution a;
	ListNode* test = a.addTwoNumbers(l1,l2);
	ListNode* q = test;
	while(q!=NULL){
		std::cout << q->val;
		if(q->next!=NULL)
			std::cout << "->";
		q = q->next;
	}
	std::ofstream outf("python.txt");
	for(int i = 0;i < 26;i++){
		outf << "'" << (char)('a' + i) << "': 0, ";
	}
}
