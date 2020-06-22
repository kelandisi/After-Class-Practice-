#define _CRT_SECURE_NO_WARNINGS 1

class Solution {
public:
	vector<int> levelOrder(TreeNode* root) {

		vector<int> res;

		if (root == nullptr)
			return res;

		queue<TreeNode*> q;
		q.push(root); //�����

		while (!q.empty())
		{
			//����
			TreeNode* node = q.front();
			q.pop();

			res.push_back(node->val); //����ʱ��¼

									  //���ӽڵ����
			if (node->left)
			{
				q.push(node->left);
			}

			//���ӽڵ����
			if (node->right)
			{
				q.push(node->right);
			}
		}

		return res;
	}
};

