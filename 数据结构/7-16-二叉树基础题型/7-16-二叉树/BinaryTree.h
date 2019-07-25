#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<queue>
typedef struct Node
{
	char val;
	struct Node* left;		//×óº¢×Ó
	struct Node* right;		//ÓÒº¢×Ó
}Node;
Node* createNode(char ch);
void PreOrderTraversal(Node* root);
void InOrderTraversal(Node* root);
void PostOrderTraversal(Node* root);
int GetCount1(Node* root);
void GetCount2(Node* root);
int GetHight(Node* root);
int GetLeafCount(Node* root);
int GetKleveCount(Node* root, int k);
Node* Find(Node* root, char v);
void LeveOrderTraversal(Node* root);
bool IsCompleteTree(Node* root);
bool IsSameTree(Node* p, Node* q);
bool IsMirrorTree(Node* p, Node* q);
bool IsSubTree(Node* p, Node* q);
bool Symmetric(Node* root);