/**
* 顺序表补充
*
* @author 艾启超
* @date 2019-7-5
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include"seqlist.h"
void text()
{
	Seqlist p;
	InitSeqlist(&p);   //初始化结构体
	Pushfront(&p, 4);  //头插
	Pushfront(&p, 3);
	Pushfront(&p, 2);
	Pushfront(&p, 1); 

	PrintSeqlist(&p);  //打印结构体

	Pushback(&p, 5);   //尾插
	Pushback(&p, 6);
	Pushback(&p, 7);
	Pushback(&p, 8);

	PrintSeqlist(&p);  //打印结构体
	Insert(&p, 2, 555);//根据下标插入

	PrintSeqlist(&p);  //打印结构体

	Popfront(&p);      //头删

	PrintSeqlist(&p);  //打印结构体

	Popback(&p);       //尾删

	PrintSeqlist(&p);  //打印结构体

	EraseSeqlist(&p, 3);

	PrintSeqlist(&p);  //打印结构体



}
int main()
{
	text();
	system("pause");
	return 0;
}