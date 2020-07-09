#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	char firstUniqChar(string s) {
		if (s == "")
			return ' ';
		//map���Ƕ�Ӧ�ַ����ֵĴ���
		unordered_map<char, int> cmap;
		for (auto i = 0; i < s.size(); i++)
		{
			cmap[s[i]]++;
		}
		//���ַ�����˳����map�в��ҵ���һ������һ�ε��ַ�
		for (auto i = 0; i < s.size(); i++)
		{
			if (cmap[s[i]] == 1)
				return s[i];
		}
		//û���ҵ�
		return ' ';
	}
};

