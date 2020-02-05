#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution
{
public:
	string reverseWords(string s)
	{
		if (s.size() == 0) {//���s�ǿ��ַ�����ֱ�ӷ���
			return s;
		}
		int front = 0, back = 0;//frontΪҪ��ת�ĵ��ʵ�����ĸ��backΪҪ��ת�ĵ��ʵ�ĩ��ĸ����һλ
		for (int i = 0; i < s.size() - 1; i++)
		{
			if (s[i] != ' ') {
				back++;
			}
			else {
				reverse(s.begin() + front, s.begin() + back);
				front = back + 1; //��ǰbackָ��ո�����frontҪ�ӿո����һ������һ�����ʵ�����ĸ��ʼ
				back = front;//front��backͬһ��
			}
		} //��ʱ���һ���ֻ�û�з�ת����Ϊs��ĩβ���ǿո����Դ�ʱbackӦ�������һ�����ʵ�ĩ��ĸ
		back++;
		reverse(s.begin() + front, s.begin() + back); //reverse�����һ��������Ҫ��ת�Ľ�β����һλ��backָ��s�����һλ������Ҫ+1
		return s;
	}
};

int main()
{
	Solution s;
	string str;
	string ret;
	cin >> str;
	ret = s.reverseWords(str);
	cout << ret;
	system("pause");
	return 0;
}