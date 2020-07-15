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
		// ��д�ݹ���ֹ����
		if (A == NULL && B == NULL)
			return true;
		// �������֮һΪ�գ�Ҳ���ǶԳƵ�
		if (A == NULL || B == NULL)
			return false;
		// �ߵ��������һ����Ϊ��
		if (A->val != B->val)
			return false;
		// ǰ�����
		return helper(A->left, B->right) && helper(A->right, B->left);
	}
};
