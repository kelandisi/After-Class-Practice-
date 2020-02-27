#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;

class Solution {
public:
	int numUniqueEmails(vector<string>& emails) {
		set<string> ans;
		for (int i = 0; i<emails.size(); i++) {
			string temp = ""; int flag = 1;      //��ÿ���ַ����ֳ�3��״̬����ʼΪ1��������+��֮ǰ��״̬
			for (int j = 0; j<emails[i].size(); j++) {
				if (emails[i][j] == '+')       //����+��֮��temp�����κ�Ԫ��
					flag = 0;
				if (emails[i][j] == '@')       //����@֮��temp���κ�Ԫ��
					flag = 2;
				switch (flag) {
				case 1:if (emails[i][j] != '.')temp += emails[i][j]; break;
				case 2:temp += emails[i][j]; break;
				case 0:break;
				}
			}
			ans.insert(temp);
		}
		return ans.size();
	}
};
int main()
{
	Solution s;
	string str;
	vector<string> arr;
	while (cin >> str)
	{
		if (cin.get() == '\n')
			break;
	}
	int ret = s.numUniqueEmails(arr);
	cout << ret;
	system("pause");
	return 0;
}