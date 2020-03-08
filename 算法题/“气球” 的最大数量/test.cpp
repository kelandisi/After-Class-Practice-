#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	int maxNumberOfBalloons(string text) {
		int cnum[5] = { 0 }; int min = 10000;
		for (int i = 0; i<text.size(); ++i) {
			switch (text[i]) {
			case 'a': ++cnum[0]; break; case 'b': ++cnum[1]; break; case 'l': ++cnum[2]; break;
			case 'n': ++cnum[3]; break; case 'o': ++cnum[4]; break; default:break; break;
			}
		}
		cnum[2] /= 2; cnum[4] /= 2;
		for (int j = 0; j<5; ++j) {
			if (cnum[j]<min) min = cnum[j];
		}
		return min;
	}

};
int main()
{
	Solution s;
	string str;
	cin >> str;
	int ret = s.maxNumberOfBalloons(str);
	cout << ret;
	system("pause");
	return 0;
}
