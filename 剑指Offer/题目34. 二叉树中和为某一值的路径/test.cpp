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
	vector<vector<int>> res;
	vector<vector<int>> pathSum(TreeNode* root, int sum) {
		if (root == NULL)
			return res;
		vector<int> nums;
		__pathSum(root, sum, nums);
		return res;
	}

	// nums: ���ڵ㵽��ǰ�ڵ�·����Ԫ��
	// want: target - sums(nums) = want
	void __pathSum(TreeNode* root, int want, vector<int>& nums) {
		if (root == NULL)
			return;

		nums.push_back(root->val); // �����ڵ�� val ��¼�� nums �У� �����´���
		if (want == root->val && root->left == NULL && root->right == NULL) { //  root -> left == NULL && root -> right == NULL  �Ǳ�֤�ýڵ�ΪҶ�ӽڵ�
			res.push_back(nums); // sum(nums) == taget �� nums ����ȫ�ֵ� res ��
		}

		__pathSum(root->left, want - root->val, nums);
		__pathSum(root->right, want - root->val, nums);

		nums.pop_back(); // ע��һ��Ҫ���� pop
	}
};
