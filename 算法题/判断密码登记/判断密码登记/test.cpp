#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int score = 0;
	int counta = 0;
	int countA = 0;
	int countN = 0;
	int countX = 0;
	string str;


	getline(cin, str);


	int len = str.size();
	if (len <= 4)
	{
		score = 5;
	}

	else if (len > 4 && len <= 7)
	{
		score = 10;
	}
	else
	{
		score = 25;
	}



	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')		//ÅÐ¶ÏÐ¡Ð´×ÖÄ¸
		{
			counta++;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			countA++;
		}
		if (str[i] >= '0'  &&  str[i] <= '9')
		{
			countN++;
		}
		if (!(str[i] >= '0' && str[i] <= '9') &&
			!(str[i] >= 'a' && str[i] <= 'z') &&
			!(str[i] >= 'A' && str[i] <= 'Z'))
			++countX;
	}



		if (counta == 0 && countA == 0)
			score = score;
		else if ((counta == 0 && countA > 0) || (counta > 0 && countA == 0))
		{
			score += 10;
		}
		else
		{
			score += 20;
		}



		if (countN == 0)score = score;
		else if (countN == 1)score += 10;
		else
		{
			score += 20;
		}



		if (countX == 0)score = score;
		else if (countX == 1)score += 10;
		else
		{
			score += 20;
		}


		if (counta > 0 && countA > 0 && countN > 0 && countX > 0) { score += 5; }
		else if ((counta > 0 && countA == 0 && countN > 0 && countX > 0) || (counta == 0 && countA > 0 && countN > 0 && countX > 0)) { score += 3; }
		else if ((counta > 0 && countA == 0 && countN > 0 && countX == 0) || (counta == 0 && countA > 0 && countN > 0 && countX == 0)) { score += 2; }



		if (score >= 90) { cout << "VERY_SECURE" << endl; }
		else if (score >= 80) { cout << "SECURE" << endl; }
		else if (score >= 70) { cout << "VERY_STRONG" << endl; }
		else if (score >= 60) { cout << "STRONG" << endl; }
		else if (score >= 50) { cout << "AVERAGE" << endl; }
		else if (score >= 25) { cout << "WEAK" << endl; }
		else if (score >= 0) { cout << "VERY_WEAK" << endl; }


		system("pause");
		return 0;
	
}
