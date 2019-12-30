#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<cmath>
#include <sstream>
using namespace std;
//第一种会溢出
/*class Solution {
public:
	string addBinary(string s1, string s2) {

		int len1 = s1.length();
		int len2 = s2.length();
		long long n1 = 0;
		long long n2 = 0;

		for (int i = 0; i<len1; ++i)
		{
			//其中注意if的判断两个条件相等的符号
			if (s1[i] == '1')
				n1 += pow(2, len1 - 1 - i);
		}
		for (int i = 0; i<len2; ++i)
		{
			//其中注意if的判断两个条件相等的符号
			if (s2[i] == '1')
				n2 += pow(2, len2 - 1 - i);
		}
		long long res = n1 + n2;
		long long result = 0, temp = res, j = 1;

		while (temp) {

			result = result + j * (temp % 2);

			temp = temp / 2;

			j = j * 10;

		}
		string str;
		stringstream ss;          
			ss << result;         
			ss >> str;
			return str;
	}
};*/

//采用位运算的解法，巧妙
class Solution {
public:
	string addBinary(string a, string b) {

		int i = a.size() - 1;
		int j = b.size() - 1;
		string res;
		res.reserve(i + j);

		int m = 0;
		while (i >= 0 || j >= 0 || m == 1)
		{
			m += i >= 0 ? a[i--] - '0' : 0;
			m += j >= 0 ? b[j--] - '0' : 0;
			res.push_back((m & 1) + '0');
			m >>= 1;
		}
		reverse(res.begin(), res.end());

		return res;

	}
};

int main()
{
	Solution s;	
	string s1;
	string s2;
	cin >> s1;
	cin >> s2;
	string s3;
	s3= s.addBinary(s1, s2);
	cout << s3;
	system("pause");
	return 0;
}
