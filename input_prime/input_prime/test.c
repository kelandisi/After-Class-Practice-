#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	//境界一：偶数不可能是素数，所以直接试除奇数，这样工作量减少一半！
	/*int i = 0;   
	int k = 0;
	int count = 0;
	for (i = 101; i <= 199; i += 2)
	{
		for (k = 2; k < i; k++)
		{
			if (i%k == 0)	
				break;
		}
		if (i == k)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n\n100到200之间共有素数  %d", count);*/

	//境界二：一个数的开平方必然<=他的一个质因子，所以试除到根号i即可
	int i = 0;
	int k = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (k = 2; k <= sqrt(i); k++)
		{
			if (i%k == 0)
				break;
		}
		if (k > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n\n%d", count);
	system("pause");
	return 0;
}