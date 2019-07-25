#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTree.h"
int count = 0;
void GetCount2(Node* root)
{
	if (root == NULL)
	{
		return;
	}
	GetCount2(root->left);
	count++;
	GetCount2(root->right);
}
void test()
{
	Node *a = createNode('A');
	Node *b = createNode('B');
	Node *c = createNode('C');
	Node *d = createNode('D');
	Node *e = createNode('E');
	Node *f = createNode('F');
	Node *g = createNode('G');
	Node *h = createNode('H');

	a->left = b; a->right = c;
	b->left = d; b->right = e;
	c->left = f; c->right = g;
	d->left = NULL; d->right = NULL;
	e->left = NULL; e->right = h;
	f->left = NULL; f->right = NULL;
	g->left = NULL; g->right = NULL;
	PreOrderTraversal(a);
	printf("\n");
	InOrderTraversal(a);
	printf("\n");
	PostOrderTraversal(a);
	printf("\n");
	printf("二叉树的结点个数是：%d\n", GetCount1(a));
	count = 0;
	GetCount2(a);
	printf("二叉树的结点个数是：%d\n", count);
	printf("二叉树的高度是：%d\n", GetHight(a));
	printf("二叉树的叶子结点个数是：%d\n", GetLeafCount(a));
	printf("二叉树的第 1 层的结点个数是：%d\n", GetKleveCount(a, 1));
	printf("二叉树的第 2 层的结点个数是：%d\n", GetKleveCount(a, 2));
	printf("二叉树的第 3 层的结点个数是：%d\n", GetKleveCount(a, 3));
	printf("二叉树的第 4 层的结点个数是：%d\n", GetKleveCount(a, 4));
	printf("B的地址是 0X%p\n", Find(a, 'B'));
	printf("层序遍历："); LeveOrderTraversal(a); printf("\n");
	if (IsCompleteTree(a))			//判断是否为完全二叉树
	{
		printf("A 是完全二叉树\n");
	}
	else 
	{
		printf("A 不是完全二叉树\n");
	}

	if (IsCompleteTree(c))			
	{
		printf("C 是完全二叉树\n");
	}
	else 
	{
		printf("C 不是完全二叉树\n");
	}
	if (IsSameTree((a), (b)))			//判断两棵树是否是相同的树
	{
		printf("a和b是相同的树\n");
	}
	else
	{
		printf("a和b不是相同的树\n");
	}
	if (IsMirrorTree(a, c))				//判断两棵树是否是镜像的
	{
		printf("a和c是镜像的树\n");
	}
	else
	{
		printf("a和c不是镜像的树\n");
	}
	if (IsSubTree(a, c))				//判断一棵树是否是另一棵树的子树
	{
		printf("a是c的子树\n");
	}
	else
	{
		printf("a不是c的子树\n");
	}
	if (Symmetric(a))
	{
		printf("a对称\n");
	}
	else
	{
		printf("a不对称\n");
	}
}
int main()
{
	test();
	system("pause");
	return 0;

}