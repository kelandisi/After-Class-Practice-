#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	bool detectCapitalUse(string word) {
		if (islower(word[0]) && isupper(word[1]))  return false;
		int upCount = 0;
		for (int i = 1; i < word.length(); i++)
			if (word[i] >= 65 && word[i] <= 92)
				upCount++;
		if (upCount == 0 || upCount == word.length() - 1) return true;
		else return false;
	}
};
int main()
{
	Solution s;
	string str;
	cin >> str;
	if (s.detectCapitalUse(str))
		cout << "true";
	else
		cout << "false";
	system("pause");
	return 0;
}