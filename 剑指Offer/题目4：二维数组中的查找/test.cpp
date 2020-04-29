#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool fun(vector<vector<int>>& matrix, int target)
{
	if (matrix.size() == 0)
		return false;
	int row = matrix.size();
	int col = matrix[0].size();
	int m = 0;
	int n = col - 1;
	while (m < row && n >= 0)
	{
		if (matrix[m][n] == target)
			return true;
		else if (matrix[m][n] > target)		
			n--;		
		else
			m++;
	}
	return false;
}
int main()
{
	vector<int> input;
	string temp;
	vector<vector<int>> matrix;
	while ((getline(cin, temp)) && temp != "") 
	{
		for (int i = 0; i<temp.size(); ++i) 
		{
			int num = 0;
			while (temp[i] != ' '&&temp[i] != '\0')
			{
				num = num * 10 + (temp[i] - '0');
				++i;
			}
			input.push_back(num);
		}
		matrix.push_back(input);
		input.clear(); //每次循环需要将input数组清空
	}


	int target = 0;
	cin >> target;
	if (fun(matrix, target))
		cout << "true" << endl;
	else
		cout << "false"<<endl;
	system("pause");
	return 0;
}