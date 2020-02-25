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
		//若两字符串长度不一样则首先被排除
		//统计不同的字母的个数   0 或者 2
		//0必须使得A为重复字符，由两个及两个以上的相同字母组成
		vector<int> index;//记录下标
		for (int i = 0; i<A.size(); i++) {
			if (A[i] != B[i]) {
				index.push_back(i);
				if (2<index.size())    return false;
			}
		}
		if (index.size() == 0) {
			return set<char>(A.begin(), A.end()).size()<A.size();//set集合能够筛选出相同还是不相同
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
