#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
int fun(int n)
{
	int ret = 0;
	if (n < 10)
		return n;
	
	while (n > 0)
	{
		ret += n % 10;
		n/=10;
	}
	return fun(ret);
}
using namespace std;
int main()
{
	string s;
	
	while (cin>>s)
	{
		int n = 0;
		for (int i = 0; i < s.size(); i++)
		{
			n += s[i]-'0';
		}
		cout << fun(n) << endl;
	}
}