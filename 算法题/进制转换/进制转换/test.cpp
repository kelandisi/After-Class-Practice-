#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<vector>
using namespace std;

int main()
{
	long a;	//�����10���Ƶ���
	int p;  //Ҫת����p����
	int x;	//����
	int y = 0;//��������++
	int count[100];
		cin >> a >> p;
		while (a != 0)//����������������
		{
			x = a%p;
			a = a / p;
			y++;		//����ȡ��Ĵ���������λ����
			count[y] = x;
		}

		for (int i = y; i >= 1; i--)
		{
			if (count[i] >= 10)
			{
				cout << (char)(count[i] + 55); //�������ַ���ɴ�д��ĸ
			
			}
			else
			{
				cout << count[i];
				
			}
		}
		cout << endl;
	
	
	system("pause");
	return 0;
}
