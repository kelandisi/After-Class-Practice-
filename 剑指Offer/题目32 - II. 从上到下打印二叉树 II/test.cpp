#define _CRT_SECURE_NO_WARNINGS 1
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>>res;
		if (root == NULL)return res;
		queue<TreeNode*>q;
		q.push(root);
		while (!q.empty()) {
			vector<int>r;
			int l = q.size();
			for (int i = 0; i<l; i++) { //��ǰ��ڵ㶼�ڶ����У�����ȡ��
				TreeNode* t = q.front();
				r.push_back(t->val);
				q.pop();
				if (t->left)q.push(t->left);
				if (t->right)q.push(t->right);
			}
			res.push_back(r);
		}
		return res;
	}
};
