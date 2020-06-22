#define _CRT_SECURE_NO_WARNINGS 1

class Solution {
public:
	vector<int> levelOrder(TreeNode* root) {

		vector<int> res;

		if (root == nullptr)
			return res;

		queue<TreeNode*> q;
		q.push(root); //根入队

		while (!q.empty())
		{
			//出队
			TreeNode* node = q.front();
			q.pop();

			res.push_back(node->val); //出队时记录

									  //左子节点入队
			if (node->left)
			{
				q.push(node->left);
			}

			//右子节点入队
			if (node->right)
			{
				q.push(node->right);
			}
		}

		return res;
	}
};

