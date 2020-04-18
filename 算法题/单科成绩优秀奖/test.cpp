#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	int arr[] = { 0 };
	long long int a = 0, b = 0, m = 0, x = 0; 	
	while (cin >> a >> b >> m >> x)
	{
			long long int count = 1;
			int i = 0;
			x = (a*x + b) % m;
			arr[i] = x;
			while (1)
			{
				x = (a*x + b) % m;
				arr[i+1] = x;
				if (arr[i + 1] != arr[0])
				{
					count++;
					i++;
				}					
				else
					break;
			}
			cout << count << endl;
	}			
	system("pause");
	return 0;
}