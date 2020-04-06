#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	int n = 0;
	while (cin>>n)
	{
		stack <string>st;
		string name, state;
		int max = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> name >> state;
			if (state == "connect")
			{
				st.push(name);
				if (max < st.size())
					max = st.size();
			}
			else
				st.pop();
		}
		cout << max << endl;

	}
	system("pase");
	return 0;
}