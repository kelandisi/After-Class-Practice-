#define _CRT_SECURE_NO_WARNINGS 1
#include"BinaryTree.h"
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
}
int main()
{
	test();
	system("pause");
	return 0;

}