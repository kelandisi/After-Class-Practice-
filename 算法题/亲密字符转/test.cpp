#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;

class Solution {
public:
	bool buddyStrings(string A, string B) {
		if (A.size() != B.size())
			return false;
		//�����ַ������Ȳ�һ�������ȱ��ų�
		//ͳ�Ʋ�ͬ����ĸ�ĸ���   0 ���� 2
		//0����ʹ��AΪ�ظ��ַ������������������ϵ���ͬ��ĸ���
		vector<int> index;//��¼�±�
		for (int i = 0; i<A.size(); i++) {
			if (A[i] != B[i]) {
				index.push_back(i);
				if (2<index.size())    return false;
			}
		}
		if (index.size() == 0) {
			return set<char>(A.begin(), A.end()).size()<A.size();//set�����ܹ�ɸѡ����ͬ���ǲ���ͬ
		}
		else if (index.size() == 2) {
			return A[index[0]] == B[index[1]] &&
				A[index[1]] == B[index[0]];
		}
		return false;
	}
};
int main()
{
	Solution s;
	string str1;
	string str2;
	cin >> str1 >> str2;
	if (s.buddyStrings(str1, str2))
		cout << "true";
	else
		cout << "false";
	system("pause");
	return 0;
}
