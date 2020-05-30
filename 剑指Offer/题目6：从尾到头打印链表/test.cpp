#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	vector<int> reversePrint(ListNode* head) {
		vector<int> res;
		while (head) {
			res.push_back(head->val);
			head = head->next;
		}
		reverse(res.begin(), res.end());
		return res;
	}
};

typedef struct ListNode
{
	int val;
	ListNode* next;
};

int main()
{
	Solution s;
	ListNode* head;
	s.reversePrint(head);
	system("pause");
	return 0;
}