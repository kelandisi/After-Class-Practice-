#define _CRT_SECURE_NO_WARNINGS 1
//��һͷĸţ����ÿ�������һͷСĸţ��
//ÿͷСĸţ�ӵ��ĸ���ͷ��ʼ��
//ÿ�����Ҳ��һͷСĸţ������ʵ���ڵ�n���ʱ�򣬹��ж���ͷĸţ��

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



