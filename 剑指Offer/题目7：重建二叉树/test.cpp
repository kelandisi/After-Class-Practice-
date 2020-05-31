#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
	{
		//�ݹ����
		return recursionBuild(preorder.begin(), preorder.end(), inorder.begin(), inorder.end());
	}

	//�ݹ����
	TreeNode* recursionBuild(vector<int>::iterator preBegin, vector<int>::iterator preEnd, vector<int>::iterator inBegin, vector<int>::iterator inEnd)
	{
		if (inEnd == inBegin) return NULL;
		TreeNode* cur = new TreeNode(*preBegin);
		auto root = find(inBegin, inEnd, *preBegin);
		cur->left = recursionBuild(preBegin + 1, preBegin + 1 + (root - inBegin), inBegin, root);
		cur->right = recursionBuild(preBegin + 1 + (root - inBegin), preEnd, root + 1, inEnd);
		return cur;
	}
};
