#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<math.h>
using namespace std;

int main()
{	//动态开辟二维数组
	int H, i, j, W;			
	int **p = new int*[H];
	for (i = 0; i < H; ++i)
	{
		p[i] = new int[W];
		for (j = 0; j < W; ++j)
			cin >> p[i][j];
	}


	system("pause");
	return 0;
}