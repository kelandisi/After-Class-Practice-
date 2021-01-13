#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Node
{
public:
	Node(int);
	int _data;
	Node* left;
	Node* right;
};

Node::Node(int data)
{
	_data = data;
	left = NULL;
	right = NULL;
}

//vector<vector<int> > levelQuery(Node* root) //按层号进行遍历
//{
//	vector<int> tmp;
//	vector<vector<int> > res;
//
//	queue <Node*> q;
//	Node* p = root;
//	Node* last = p;
//	Node* nlast = p;
//	q.push(p);
//	while (!q.empty())
//	{
//		p = q.front();
//		//cout << p->_data;
//		tmp.push_back(p->_data);
//		p->left != NULL ? q.push(p->left) : 0;
//		p->right != NULL ? q.push(p->right) : 0; 
//		nlast = q.back();
//		q.pop();
//		if (p == last)
//		{
//			res.push_back(tmp);
//			tmp.clear();
//			last = nlast;
//		}
//		
//	}
//	return res;
//}

void avg(Node* root) //取每层的平均值
{
	vector<int> tmp;
	vector<vector<int> > res;

	queue <Node*> q;
	Node* p = root;
	Node* last = p;
	Node* nlast = p;
	q.push(p);
	while (!q.empty())
	{
		p = q.front();
		//cout << p->_data;
		tmp.push_back(p->_data);
		p->left != NULL ? q.push(p->left) : 0;
		p->right != NULL ? q.push(p->right) : 0; 
		nlast = q.back();
		q.pop();
		if (p == last)
		{
			int sum = 0;
			int avg = 0;

			//计算平均值
			for (int i = 0; i < tmp.size(); ++i)
			{
				
				sum += tmp[i];
			}
			avg = sum / tmp.size();	
			//
			res.push_back(tmp);
			cout << avg<<endl;
			tmp.clear();
			last = nlast;
		}
	}
}
//void levelQuery(Node* root) //层序遍历
//{
//	Node* p = root;
//	queue<Node*> q;
//	q.push(p);
//	while (!q.empty())
//	{
//		p = q.front();
//		cout << p->_data;
//		q.pop();
//		if (p->left != NULL)
//			q.push(p->left);
//		else
//			p->left = 0;
//
//		if (p->right != NULL)
//			q.push(p->right);
//		else
//			p->right = 0;
//
//	}
//}
int main()
{
	Node root = Node(1);
	Node l2 = Node(2);
	Node l3 = Node(3);
	Node l4 = Node(4);
	Node l5 = Node(5);
	Node l6 = Node(6);
	Node l7 = Node(7);
	Node l8 = Node(8);
	root.left = &l2;
	root.right = &l3;
	l2.left = &l4;
	l3.left = &l5;
	l3.right = &l6;
	l5.left = &l7;
	l5.right = &l8;
	//levelQuery(&root);
	avg(&root);
	system("pause");
	return 0;
}