#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	int m, n;
	cin >> m >> n;
	int **a = new int*[m];
	for (int i = 0; i<m; i++) 
	{
		cin >> *a[i];
	}
	system("pause");
	return 0;
}