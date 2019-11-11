#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	int array[4] = { 0 };
	for (int i = 0; i < 4; i++)
	{
		cin >> array[i];
	}
	int A = (array[0] + array[2]) / 2;
	int B = (array[1] + array[3]) / 2;
	int C = (array[3] - array[1]) / 2;
	int B1 = (array[2] - array[0]) / 2;
	if (B != B1)
	{
		cout << "No" << endl;
	}
	else
	{
		cout << A << " " << B1 << " " << C << endl;
	}
	return 0;
}