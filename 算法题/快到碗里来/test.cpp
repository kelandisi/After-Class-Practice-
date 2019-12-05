#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	double n = 0;
	double r = 0;
	while (cin >> n >> r)
	{
		if (n <= 3.14* 2*r)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	system("pause");
	return 0;
}