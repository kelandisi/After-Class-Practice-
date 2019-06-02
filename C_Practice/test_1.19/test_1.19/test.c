#define _CRT_SECURE_NO_WARNINGS 1
//有一头母牛，它每年年初生一头小母牛。
//每头小母牛从第四个年头开始，
//每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？

#include <stdio.h>
#include <stdlib.h>
int main() {
	int f[50], i, n;
	while (scanf("%d", &n) != EOF)
	{
		f[1] = 1; f[2] = 2; f[3] = 3;
		for (i = 4; i <= n; i++) 
		{
			f[i] = f[i - 3] + f[i - 1];
		}
		printf("%d\n", f[n]);
	}
	system("pause");
	return 0;
}



