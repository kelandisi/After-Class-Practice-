#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Solution
{
public:
	int fun(int n)
	{
		n && (n = n + fun(n - 1));
		return n;
	}
};
int main()
{
	Solution s;
	int n = 0;
	while (cin >> n)
	{
		cout << s.fun(n) << endl;
	}	
	system("pause");
	return 0;
}