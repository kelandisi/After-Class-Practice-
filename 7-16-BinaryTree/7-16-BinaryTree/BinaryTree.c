#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTree.h"
Node*  createNode(char ch)
{
	Node* node = (Node*)malloc(sizeof(Node*));
	node->val = ch;
	node->left = node->right = NULL;
}
void PreOrderTraversal(Node* root)				//ǰ�����(�� �� ��)
{
	if (root == NULL)			//�ݹ����ֹ����
	{
		return;
	}
	printf("%c ", root->val);
	PreOrderTraversal(root->left);
	PreOrderTraversal(root->right);
}
void InOrderTraversal(Node* root)
{
	if (root == NULL)			//�ݹ����ֹ����
	{
		return;
	}
	InOrderTraversal(root->left);
	printf("%c ", root->val);
	InOrderTraversal(root->right);
}
void PostOrderTraversal(Node* root)
{
	if (root == NULL)			//�ݹ����ֹ����
	{
		return;
	}
	PostOrderTraversal(root->left);
	PostOrderTraversal(root->right);
	printf("%c ", root->val);
}