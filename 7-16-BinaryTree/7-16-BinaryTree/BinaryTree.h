#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef struct Node
{
	char val;
	struct Node* left;		//×óº¢×Ó
	struct Node* right;		//ÓÒº¢×Ó
}Node;
void PreOrderTraversal(Node* root);
void InOrderTraversal(Node* root);
void PostOrderTraversal(Node* root);