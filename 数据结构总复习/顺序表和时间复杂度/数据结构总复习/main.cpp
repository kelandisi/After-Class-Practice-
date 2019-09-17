#define _CRT_SECURE_NO_WARNINGS 1
#include"main.h"
using namespace std;
void testfun1()
{
	int a[] = { 1,22,9,10,0,51,4,8,21,2 };
	int size = sizeof(a) / sizeof(int);
	BubbleSort(a,size);						//冒泡排序				
	Print(a,size);
	int ret = BinarySearch(a, size,4);		//二分查找
	cout << "找到了下标是" << ret << endl;
}
void testseq()
{
	Seqlist seqlist;
	Initseq(&seqlist);						//初始化顺序表
	Frontpush(&seqlist, 2);					//头插
	Frontpush(&seqlist, 2);							
	Frontpush(&seqlist, 2);
	Frontpush(&seqlist, 1);
	Printseq(&seqlist);						//打印顺序表
	Bcakpush(&seqlist, 4);					//尾插				
	Bcakpush(&seqlist, 5);
	Bcakpush(&seqlist, 6);
	Printseq(&seqlist); 
	Insert(&seqlist, 520, 2);				//根据坐标插入	
	Printseq(&seqlist);
	Delete(&seqlist, 2);					//根据坐标删除		
	Printseq(&seqlist);
	//Deleteoneval(&seqlist, 2);				//删除第一个val
	//Printseq(&seqlist);
	DeleteAllval(&seqlist, 2);
	Printseq(&seqlist);
	Distroy(&seqlist);

}
int main()
{
	testfun1();
	testseq();
	system("pause");
	return 0;
}