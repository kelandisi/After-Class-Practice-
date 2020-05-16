#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
/*
求n!
0的来源 2 * 5 所以一对2和5即可产生一个0,所以0的个数即为min(阶乘中5的个数和2的个数)
又因为是2的倍数的数一定比是5的倍数的数多 所以2的个数一定>=5的个数 所以只需要统计 5 的个数了
例如 5！ = 1 * 2 * 3 * 4 * 5
2      2 2  5    一个2和一个5配对出现0 所以5!末尾只有一个零
而在 n = 25 时 可以产生5的有 5 10 15 20 25
即 n/5 = 5个 然鹅 25 = 5*5 所以少算了一个5
n>=25时,故而需要补上它 因此所有可以产生25的也要加上
即为 n/5 + n/25  然鹅 125 = 5*25 所以又少算了一个5
n>=125时,故而需要补上它 因此所有可以产生125的也要加上
即为 n/5 + n/25 + n/125  然鹅 625 = 5*125 所以又少算了一个5
继续补上...
所以最终为 n/5 + n/25 + n/125 + n/625 + ...
即 n/5 + n/5/5 + n/5/5/5 + n/5/5/5/5 + ...
*/
class Solution {
public:
	int trailingZeroes(int n) {
		int count = 0;
		while (n>0)
		{
			count += n / 5;
			n /= 5;
		}
		return count;

	}
};
int main()
{
	Solution s;
	int n = 0;
	cin >> n;
	int ret = s.trailingZeroes(n);
	cout << ret;
	system("pause");
	return 0;
}




//这种方法时间复杂度过大
//int main()
//{
//	int n = 0;
//	int sum = 1;
//	int count = 0;
//	cin >> n;
//	for (int i = 1;i <= n; i++)
//	{
//		sum *= i;
//	}
//	while (sum % 10 == 0)
//	{	
//		count++;
//		sum = sum / 10;
//	}
//	cout << count;
//	system("pause");
//	return 0;
//}