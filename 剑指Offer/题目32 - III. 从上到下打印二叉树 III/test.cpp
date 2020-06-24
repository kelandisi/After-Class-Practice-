#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> res;
		if (root == NULL)
			return res;
		bool flag = true; //�������Ҵ�ӡΪtrue�����������ӡΪfalse
		deque<TreeNode*> q;
		q.push_back(root);
		while (!q.empty())
		{
			int n = q.size();
			vector<int> out;
			TreeNode* node;
			while (n>0)
			{
				if (flag) // ǰȡ��ţ��������Ҵ�ӡ�����Դ�ǰ��ȡ����߷���
				{
					node = q.front();
					q.pop_front();
					if (node->left)
						q.push_back(node->left);  // ��һ��˳������β
					if (node->right)
						q.push_back(node->right);
				}
				else  //��ȡǰ�ţ� �������󣬴Ӻ��ȡ��ǰ�߷���
				{
					node = q.back();
					q.pop_back();
					if (node->right)
						q.push_front(node->right);  // ��һ������������
					if (node->left)
						q.push_front(node->left);
				}
				out.push_back(node->val);
				n--;
			}
			flag = !flag;
			res.push_back(out);
		}
		return res;
	}
};

