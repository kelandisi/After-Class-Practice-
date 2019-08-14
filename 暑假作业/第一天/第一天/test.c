#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define ROW 4
#define COL 4
int FindKey(int a[][COL], int key)
{
	int row = ROW - 1;
	int col = 0;
	if (a != NULL && ROW > 0 && COL > 0)
	{
		while (col<COL && row >= 0)
		{
			if (a[row][col] < key)
			{
				col++;
			}
			else if (a[row][col]>key)
			{
				row--;
			}
			else
				return 1;
		}
		return -1;
	}
	return -1;
}
int main()
{
#if 0
	int a[] = { 2,4,6,8,10,12,14,16,18,20,22,24 }, *q[4], k;
	for (k = 0; k < 4; k++)
	{
		q[k] = &a[k * 3];
	}
	printf("%d\n", q[2][5]);
#endif


#if 0
	int i, j, a = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (j % 2)
				break;
			a++;
		}
		a++;
	}
	printf("%d\n", a);
#endif

#if 0
	//int a = 5;
	//char b = 2;
	int c = 2;
	char d = 3.52;
	cout << d*c << endl;
#endif

	/*int a[4][5] = { {1,2,3,4,5},{5,6,7,8,9},{9,10,11,12,13},{13,14,15,16,17} };
	printf("%p", a[1]+3);*/



	//Ëã·¨Ìâ£º
	int a[ROW][COL] = { {1,2,8,9},{2,4,9,12},{4,7,10,13},{6,8,11,15} };
	int key = 2;
	int ret = FindKey(a, key);
	if (ret == 1)
	{
		printf("Search Success\n");
	}
	else if (ret == -1)
	{
		printf("Search Failure\n");
	}
	system("pause");
	return 0;
}