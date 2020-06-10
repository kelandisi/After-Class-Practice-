#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	ListNode* deleteNode(ListNode* head, int val) {
		if (head == NULL)return NULL;
		if (head->val == val)return head->next;
		ListNode *p = head;
		while (p->next) {
			if (p->next->val == val) {
				p->next = p->next->next;
				break;
			}
			p = p->next;
		}
		return head;
	}
};
