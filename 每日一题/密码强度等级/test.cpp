#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int Password_strength(string& str)
{
	int lenth_fen = 0;
	if (str.size() <= 4)
		lenth_fen = 5;
	if (str.size() <=7 && str.size()>=5)
		lenth_fen = 10;
	if (str.size() >= 8)
		lenth_fen = 25;

	vector<char> A_sum, a_sum, sum_1, sum_char;
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			a_sum.push_back(str[i]);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			A_sum.push_back(str[i]);
		else if (str[i] >= 0 && str[i] <= 9)
			sum_1.push_back(str[i]);
		else
			sum_char.push_back(str[i]);
	}

	int a_fen=0, A_fen=0, fen_1=0, fen_char=0;

	if (a_sum.size()>0)
		a_fen = 10;
	if (A_sum.size() > 0)
		A_fen = 10;
	if (sum_1.size() == 1)
		fen_1 = 10;
	else if (sum_1.size() > 1)
		fen_1 = 20;
	if (sum_char.size() == 1)
		fen_char = 10;
	else if (sum_char.size()> 1)
		fen_char = 25;

	int fen_jiangli = 0;
	if ((a_sum.size() > 0 && sum_1.size() > 0) || (A_sum.size() > 0 && sum_1.size() > 0))
		fen_jiangli = 2;
	else if ((a_sum.size() > 0 && sum_1.size() > 0 && sum_char.size() > 0) || (A_sum.size() > 0 && sum_1.size() > 0 && sum_char.size() > 0))
		fen_jiangli = 3;
	else if (a_sum.size() > 0 && sum_1.size() > 0 && sum_char.size() > 0 && A_sum.size() > 0)
		fen_jiangli = 5;



	int total = fen_1 + fen_char + fen_jiangli + lenth_fen + A_fen + a_fen;
	return total;
}

int main()
{
	string str;
	while (cin >> str)
	{
		int sum = Password_strength(str);

		switch (sum/10)
		{
		case 9:cout << "VERY_SECURE" << endl;
			break;
		case 8:cout << "SECURE" << endl;
			break;
		case 7:cout << "VERY_STRONG" << endl;
			break;
		case 6:cout << "STRONG" << endl;
			break;
		case 5:cout << "AVERAGE" << endl;
			break;
		default:
		{
			if (sum >= 25)
				cout << "WEAK" << endl;
			else
				cout << "VERY_WEAK" << endl;
		}
		}
	}
	system("pause");
	return 0;
}