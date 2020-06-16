#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode* head = new ListNode(1);
		ListNode* ret = head;
		while (l1 != NULL && l2 != NULL) {
			if (l1->val < l2->val) {
				head->next = l1;
				l1 = l1->next;
			}
			else {
				head->next = l2;
				l2 = l2->next;
			}
			head = head->next;
		}
		head->next = l1 == NULL ? l2 : l1;
		return ret->next;
	}
};




class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if (l1 == NULL) {
			return l2;
		}
		if (l2 == NULL) {
			return l1;
		}
		if (l1->val <= l2->val) {
			l1->next = mergeTwoLists(l1->next, l2);
			return l1;
		}
		l2->next = mergeTwoLists(l1, l2->next);
		return l2;
	}
};

