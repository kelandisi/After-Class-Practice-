#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int Find(int array[][4], int target)
{
	int row = 0;
	int col = 3;
	if (target<array[0][0] || target>array[3][3])
		return 0;
	else
	{
		while ((row < 4 && col >= 0))
		{
			if (target > array[row][col])
			{
				row++;
			}
			else if (target < array[row][col])
			{
				col--;
			}
			else
				return 1;
		}
		return 0;
	}
}
int main()
{
	int array[][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	int target = 1;
	int ret = Find(array,target);
	if (ret == 1)
		cout << "找到了！" << endl;
	else
		cout << "没找到！" << endl;
	system("pause");
	return 0;
}