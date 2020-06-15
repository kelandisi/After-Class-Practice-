#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode* cur = NULL, *pre = head;
		while (pre != NULL) {
			ListNode* t = pre->next;
			pre->next = cur;
			cur = pre;
			pre = t;
		}
		return cur;
	}
};
