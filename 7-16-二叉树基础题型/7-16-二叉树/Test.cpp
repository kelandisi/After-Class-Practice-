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
	printf("�������Ľ������ǣ�%d\n", GetCount1(a));
	count = 0;
	GetCount2(a);
	printf("�������Ľ������ǣ�%d\n", count);
	printf("�������ĸ߶��ǣ�%d\n", GetHight(a));
	printf("��������Ҷ�ӽ������ǣ�%d\n", GetLeafCount(a));
	printf("�������ĵ� 1 ��Ľ������ǣ�%d\n", GetKleveCount(a, 1));
	printf("�������ĵ� 2 ��Ľ������ǣ�%d\n", GetKleveCount(a, 2));
	printf("�������ĵ� 3 ��Ľ������ǣ�%d\n", GetKleveCount(a, 3));
	printf("�������ĵ� 4 ��Ľ������ǣ�%d\n", GetKleveCount(a, 4));
	printf("B�ĵ�ַ�� 0X%p\n", Find(a, 'B'));
	printf("���������"); LeveOrderTraversal(a); printf("\n");
	if (IsCompleteTree(a))			//�ж��Ƿ�Ϊ��ȫ������
	{
		printf("A ����ȫ������\n");
	}
	else 
	{
		printf("A ������ȫ������\n");
	}

	if (IsCompleteTree(c))			
	{
		printf("C ����ȫ������\n");
	}
	else 
	{
		printf("C ������ȫ������\n");
	}
	if (IsSameTree((a), (b)))			//�ж��������Ƿ�����ͬ����
	{
		printf("a��b����ͬ����\n");
	}
	else
	{
		printf("a��b������ͬ����\n");
	}
	if (IsMirrorTree(a, c))				//�ж��������Ƿ��Ǿ����
	{
		printf("a��c�Ǿ������\n");
	}
	else
	{
		printf("a��c���Ǿ������\n");
	}
	if (IsSubTree(a, c))				//�ж�һ�����Ƿ�����һ����������
	{
		printf("a��c������\n");
	}
	else
	{
		printf("a����c������\n");
	}
	if (Symmetric(a))
	{
		printf("a�Գ�\n");
	}
	else
	{
		printf("a���Գ�\n");
	}
}
int main()
{
	test();
	system("pause");
	return 0;

}