#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

int fun1(const std::string& str, const std::string& sub)
{
	int num = 0;
	for (size_t i = 0; (i = str.find(sub, i)) != std::string::npos; num++, i++);
	return num;
}
int main()
{
	string str;
	string sub;
	cin >> str;
	cin >> sub;
	cout << fun1(str, sub) << endl;
	system("pause");
	return 0;
}