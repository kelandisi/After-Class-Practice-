#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int kthLargest(TreeNode* root, int k) {
		stack<TreeNode*> stk;
		TreeNode* cur = root;
		while (cur || stk.size()) {
			while (cur) {
				stk.push(cur);
				cur = cur->right;
			}
			cur = stk.top();
			stk.pop();
			if (--k == 0) return cur->val;
			cur = cur->left;
		}
		return root->val;
	}
};

