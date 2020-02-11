#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
	vector <char>compress(vector<char>& chars) {
		int n = chars.size();
		int cur = 0;
		for (int i = 0, j = 0; i < n; j = i) {
			while (i < n && chars[i] == chars[j]) {
				i++;//��¼������ͬ��ֵ
			}
			chars[cur++] = chars[j];//����¼�����ַ�����
			if (i - j == 1) {
				continue;//�������ַ�
			}
			string s = to_string(i - j);//���������ַ�����������ת��Ϊ�ַ�
			for (int t = 0; t < s.size(); t++) {
				chars[cur++] = s[t];//
			}
		}
		return chars;
	}
};
int main()
{
	Solution s;
	vector<char> arr;
	vector<char> ret;

	char a;
	while (cin >> a)
	{
		arr.push_back(a);
		if (cin.get() == '\n')
			break;
	}
	ret = s.compress(arr);
	for (int i = 0; i < ret.size() - 1; i++)
	{
		cout << ret[i] << " ";
	}
	system("pause");
	return 0;
}
