#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//����һ�������ƽ⣨ʱ�临�Ӷȹ���
void stringcontain1(string &s1, string &s2)
{
	int count = 0;
	for (int i = 0; i < s2.size(); i++)
	{
		int j = 0;	
		for (j = 0; j < s1.size(); j++)
		{
			if (s1[j] == s2[i])
			{
				count++;
				break;
			}	
		}
	}
	if (count == s2.size())
	{
		cout << "yes" << endl;
	}
	else
		cout << "no" << endl;
}
//�������������򣨿��ţ�����ѭ��
bool stringcontain2(string &s1, string &s2)
{
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	for (int pa = 0,pb = 0; pb < s2.size(); )
	{
		while ((pa < s1.size()) && (s1[pa] < s2[pb]))
		{
			++pa;
		}
		if ((pa >= s1.size()) || (s1[pa]>s2[pb]))
		{
			return false;
		}pb++;
	}
	return true;
}

//��������λ���㣨�������
int main()
{
	string s1; 
	string s2;
	while (cin >> s1 >> s2)
	{
		//stringcontain1(s1, s2);
		if (stringcontain2(s1, s2))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
		
	}
	
	system("pause");
	return 0;
}
