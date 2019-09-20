#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
void minNumberInRotateArray(vector<int> rotateArray)
{
	int n = rotateArray.size();
	if (n == 0)
		return 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (rotateArray[i] > rotateArray[i + 1])
		{
			return rotateArray[i + 1];
		}
	}
	return rotateArray[0];
}
int main()
{
	vector <rotateArray> new_vector = { 5,4,3,1,2 };
    minNumberInRotateArray(rotateArray);
	system("pause");
	return 0;
}