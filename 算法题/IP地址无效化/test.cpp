#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	string defangIPaddr(string address) {
		int len = address.size();//ֱ�Ӽ����IP��ַ�ĳ���
		for (int i = 0; i < len; i++)//����ÿһ���ַ�
		{
			if (address[i] == '.')//�����ǰ�ַ�Ϊ'.'
			{
				address.insert(i, "[");//������ǰ�����'['�ַ�
				address.insert(i + 2, "]");//�����ĺ������']'�ַ�
				i = i + 2;//���������2���ַ�,��˵�ǰλ��Ӧ�ü���2
				len = len + 2;//�ַ�������ҲҪ����2
			}
		}
		return address;//���ش���õ�IP��ַ
	}
};
int main()
{
	Solution s;
	string str;
	cin >> str;
	cout<<s.defangIPaddr(str);
	system("pause");
	return 0;
}