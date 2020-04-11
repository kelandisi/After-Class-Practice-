#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cstdlib>
#include<string>
#include<stack>
#include<sstream>
using namespace std;

int f(string x)
{
	stringstream ss;
	ss << x;
	int num;
	ss >> num;
	return num;
}
int main()
{

	int n;
	while (cin >> n)
	{
		stack<int>s;
		for (int i = 0; i<n; i++)
		{
			string x;
			cin >> x;
			if (x == "+")
			{
				int a, b;
				a = s.top();
				s.pop();
				b = s.top();
				s.pop();
				a += b;
				s.push(a);
			}
			else if (x == "+")
			{
				int a, b;
				a = s.top();
				s.pop();
				b = s.top();
				s.pop();
				a += b;
				s.push(a);
			}
			else if (x == "-")
			{
				int a, b;
				a = s.top();
				s.pop();
				b = s.top();
				s.pop();
				a = b - a;
				s.push(a);
			}
			else if (x == "*")
			{
				int a, b;
				a = s.top();
				s.pop();
				b = s.top();
				s.pop();
				a *= b;
				s.push(a);
			}
			else if (x == "/")
			{
				int a, b;
				a = s.top();
				s.pop();
				b = s.top();
				s.pop();
				a = b / a;
				s.push(a);
			}
			else
			{
				int a = f(x);
				s.push(a);
			}
		}
		cout << s.top() << endl;
	}

}