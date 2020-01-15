#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	string reverseOnlyLetters(string S) {
		int left = 0;
		int right = S.size()-1;
		while (left<right)
		{
			while (left < right && isalpha(S[left]) == 0)
			{
				left++;
			}
			while (left < right && isalpha(S[right]) == 0)
			{
				right--;
			}
			swap(S[left], S[right]);
			left++;
			right--;
		}
		return S;
	}
};
int main()
{
	Solution s;
	string str;
	string ret;
	cin >> str;
	ret = s.reverseOnlyLetters(str);
	cout << ret;
	system("pause");
	return 0;
}