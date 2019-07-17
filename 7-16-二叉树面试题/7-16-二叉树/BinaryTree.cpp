#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTree.h"
Node* createNode(char ch)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->val = ch;
	node->left = node->right = NULL;
	return node;
}
void PreOrderTraversal(Node* root)				//前序遍历(根 左 右)
{
	if (root == NULL)			//递归的终止条件
	{
		return;
	}
	printf("%c ", root->val);
	PreOrderTraversal(root->left);
	PreOrderTraversal(root->right);
}
void InOrderTraversal(Node* root)				//中序遍历（左 根 右）
{
	if (root == NULL)			//递归的终止条件
	{
		return;
	}
	InOrderTraversal(root->left);
	printf("%c ", root->val);
	InOrderTraversal(root->right);
}
void PostOrderTraversal(Node* root)				//后序遍历（左 右 根）
{
	if (root == NULL)			//递归的终止条件
	{
		return;
	}
	PostOrderTraversal(root->left);
	PostOrderTraversal(root->right);
	printf("%c ", root->val);
}

int GetCount1(Node* root)		//二叉树结点个数（通过递归调用）
{
	if (root == NULL)
		return 0;
	return GetCount1(root->left) + GetCount1(root->right) + 1;
}
int my_Max(int a, int b)
{
	return a >= b ? a : b;
}
int GetHight(Node* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return ((my_Max(GetHight(root->left), GetHight(root->right))) + 1);
}
int GetLeafCount(Node* root)
{
	if (root == NULL)
	{
		return 0;
	}
	else if (root->left == NULL&&root->right == NULL)
	{
		return 1;
	}
	else
	{
		return (GetLeafCount(root->left) + GetLeafCount(root->right));
	}
}
int GetKleveCount(Node* root, int k)
{
	assert(k >= 1);
	if (root == NULL)
	{
		return 0;
	}
	else if (k == 1)
	{
		return 1;
	}
	else
	{
		return GetKleveCount(root->left, k - 1) + GetKleveCount(root->right, k - 1);
	}
}
Node* Find(Node* root, char v)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (root->val == v)
	{
		return root;
	}
	Node* left = Find(root->left, v);
	if (left != NULL)
	{
		return left;
	}
	Node* right = Find(root->right, v);
	if (right != NULL)
	{
		return right;
	}
	return NULL;
}
void LeveOrderTraversal(Node* root)
{
	if (root == NULL)
	{
		return;
	}
	std::queue<Node *>	q;
	q.push(root);
	while (!q.empty())
	{
		Node* front = q.front();
		q.pop();
		printf("%c ", front->val);
		if (front->left != NULL)
		{
			q.push(front->left);
		}
		if (front->right != NULL)
		{
			q.push(front->right);
		}
	}
}