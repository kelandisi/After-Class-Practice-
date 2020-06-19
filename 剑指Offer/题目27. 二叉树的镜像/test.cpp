#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;


//递归
class Solution {
public:
	TreeNode* mirrorTree(TreeNode* root) {
		if (root == NULL) {
			return NULL;
		}
		swap(root->left, root->right);
		mirrorTree(root->left);
		mirrorTree(root->right);
		return root;
	}
};
//模拟栈
class Solution {
public:
	TreeNode* mirrorTree(TreeNode* root) {
		stack<TreeNode*> s;
		s.push(root);
		while (!s.empty()) {
			TreeNode* node = s.top();
			s.pop();
			if (node == NULL) {
				continue;
			}
			swap(node->left, node->right);
			s.push(node->left);
			s.push(node->right);
		}
		return root;
	}
};

//模拟队列
class Solution {
public:
	TreeNode* mirrorTree(TreeNode* root) {
		queue<TreeNode*> q;
		q.push(root);
		while (!q.empty()) {
			TreeNode* node = q.front();
			q.pop();
			if (node == NULL) {
				continue;
			}
			swap(node->left, node->right);
			q.push(node->left);
			q.push(node->right);
		}
		return root;
	}
};
