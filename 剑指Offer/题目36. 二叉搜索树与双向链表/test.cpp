#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	Node* treeToDoublyList(Node* root) {
		if (!root) return nullptr;
		Node* head = nullptr, *pre = nullptr;
		helper(root, head, pre);
		head->left = pre;
		pre->right = head;
		return head;
	}
	void helper(Node* root, Node*& head, Node*& pre) {
		if (!root)  return;
		helper(root->left, head, pre);
		if (!head) {
			head = root;   // �ҵ�head
			pre = root;    // ��pre���г�ʼ��
		}
		else {
			pre->right = root;
			root->left = pre;
			pre = root;
		}
		helper(root->right, head, pre);
	}
};

