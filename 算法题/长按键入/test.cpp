#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
/*������typedΪ��ѭ������������Ȼ����name�е��ַ����бȽϡ�
������name��typedͬʱ����ƶ�һ���ַ��������typed�ƶ�һ���ַ���
���ѭ������������ֻ��Ҫ�鿴j�Ƿ����name�ĳ��Ⱦ�����*/

using namespace std;
class Solution {
public:
	bool isLongPressedName(string name, string typed) {
		int j = 0;
		for (int i = 0; i < typed.size(); i++)
		{
			if (name[j] == typed[i])
				j++;
		}
		if (j != name.size())
			return false;
		else
			return true;
	}
};
int main()
{
	string name;
	string typed;
	cin >> name;
	cin >> typed;
	Solution s;
	if (s.isLongPressedName(name, typed))
		cout << "��";
	else
		cout << "��";
	system("pause");
	return 0;
}