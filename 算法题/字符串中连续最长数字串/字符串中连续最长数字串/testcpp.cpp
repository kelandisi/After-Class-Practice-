#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	cin >> str;
	string temp;						//����������е����ִ�
	string maxnumstr;					//��������������鴮
	int maxlenth = 0;					//�������ִ��ĳ���
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] >= '0'&& str[i] <= '9')
		{
			while (str[i] >= '0'&& str[i] <= '9')		//	��һ�����ƺ������ifһ��������ǧ����ʡ�ԣ���Ϊ���ǰ����ִ�����temp��
			{
				temp = temp + str[i];
				i++;
			}
			if (temp.length() > maxlenth)
			{
				maxnumstr = temp;
				maxlenth = temp.length();
			}
		}
		temp.clear();					//��ղ����������Щ��ƥ������ִ�
	}	
	cout << maxnumstr;
	system("pause");
	return 0;
}
