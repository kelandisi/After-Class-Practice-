#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if (root == NULL)return NULL;
		if (p->val > root->val && q->val > root->val)
			return lowestCommonAncestor(root->right, p, q);
		else if (p->val < root->val && q->val < root->val)
			return lowestCommonAncestor(root->left, p, q);
		else return root;
	}
};

class Solution {
public:
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if (root == NULL)return NULL;
		if (root == p || root == q)return root;
		TreeNode* left = lowestCommonAncestor(root->left, p, q);
		TreeNode* right = lowestCommonAncestor(root->right, p, q);
		if (left && right)return root;
		return left ? left : right; // ֻ��һ���ǿ��򷵻ظ�ָ�룬������Ϊ���򷵻ؿ�ָ��
	}
};

