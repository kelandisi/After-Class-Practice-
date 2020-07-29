#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	bool isBalanced(TreeNode* root) {
		if (root == NULL) return true;//���������Ϊ�գ���һ����ƽ��ģ���Ϊû������������
		if (abs(getHeight(root->left) - getHeight(root->right)) > 1) return false;
		return isBalanced(root->left) && isBalanced(root->right);
	}
	int getHeight(TreeNode* root)
	{
		if (root == NULL) return 0;
		int leftHeight = getHeight(root->left);
		int rightHeight = getHeight(root->right);
		return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
	}
};

/*�����������*/
/*
ʹ�ú�������ķ�ʽ������������ÿ���ڵ㣬��ô�ڱ�����һ���ڵ�֮ǰ���Ǿ��Ѿ�
��������������������ֻҪ��ÿ���ڵ��ʱ���¼�������(ĳһ�ڵ����ȵ�������Ҷ�ڵ��·���ĳ��ȣ�
�Ϳ����ж�ÿ���ڵ��ǲ���ƽ���
*/
class Solution {
public:
	bool isBalanced(TreeNode* root)
	{
		if (root == nullptr) return true;
		int depth = 0;
		return isBalanced(root, depth);
	}
	bool isBalanced(TreeNode* root, int &pDepth) {
		if (root == nullptr) { pDepth = 0; return true; }
		int left = 0, right = 0;
		if (isBalanced(root->left, left) && isBalanced(root->right, right))
		{
			int diff = left - right;
			if (abs(diff) <= 1)
			{
				pDepth = 1 + (left > right ? left : right);
				return true;
			}
		}
		return false;
	}
};

