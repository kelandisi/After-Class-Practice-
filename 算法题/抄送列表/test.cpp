#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string str, name;
	while (getline(cin, str))
	{
		getline(cin, name);
		vector <string> v;
		for (int i = 0; i < str.size(); i++)
			/*Joe, Kewell, Leon
			Joe
			"Letendre,Bruce",Joe,"Quan,William"
			William*/
		{
			if (str[i] == '\"')
			{
				v.push_back(str.substr(i + 1, str.find('\"', i + 1)-i-1 ));
				i = str.find('\"', i + 1) + 1;
			}
			else
			{
				if (str.find(',', i) == str.npos)
				{
					v.push_back(str.substr(i, str.size() - i));
					i = str.size();
				}
				else
				{
					v.push_back(str.substr(i, str.find(',', i) - i));
					i = str.find(',', i);
				}
			}
		}
		cout << ((find(v.begin(), v.end(), name) != v.end()) ? "Ignore" : "Important!") << endl;
	}
	system("pause");
	return 0;
}