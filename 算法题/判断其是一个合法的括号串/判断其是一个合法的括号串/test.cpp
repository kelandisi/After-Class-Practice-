#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	string tmp = "";
	getline(cin, str);
	int arr[256] = { 0 };
	int len = str.size();
	for (int i = 0; i<len; i++)
	{
		if (arr[str[i]] == 0)
		{
			tmp += str[i];
			arr[str[i]]++;
		}
	}
	cout << tmp << endl;
	system("pause");
	return 0;
}