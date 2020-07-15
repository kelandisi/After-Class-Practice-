#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	bool isSymmetric(TreeNode* root) {
		bool res = true;
		if (root != NULL)
		{
			res = helper(root->left, root->right);
		}
		return res;
	}

	bool helper(TreeNode*A, TreeNode* B)
	{
		// 先写递归终止条件
		if (A == NULL && B == NULL)
			return true;
		// 如果其中之一为空，也不是对称的
		if (A == NULL || B == NULL)
			return false;
		// 走到这里二者一定不为空
		if (A->val != B->val)
			return false;
		// 前序遍历
		return helper(A->left, B->right) && helper(A->right, B->left);
	}
};
