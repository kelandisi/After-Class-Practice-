#define _CRT_SECURE_NO_WARNINGS 1
#include"Seqlist.h"
void Test()
{
	Seqlist seqlist;
	InitSeqlist(&seqlist);
	FrontPush(&seqlist, 3);
	FrontPush(&seqlist, 2);
	FrontPush(&seqlist, 2);
	FrontPush(&seqlist, 1);
	PrintSeqlist(&seqlist);
	BackPush(&seqlist, 4);
	BackPush(&seqlist, 5);
	BackPush(&seqlist, 6);
	PrintSeqlist(&seqlist);
	FrontPop(&seqlist);
	PrintSeqlist(&seqlist);
	BackPop(&seqlist);
	PrintSeqlist(&seqlist);
	Insert(&seqlist, 2, 55);
	PrintSeqlist(&seqlist);
	Delete(&seqlist, 2);
	PrintSeqlist(&seqlist);
	//DelOneval(&seqlist, 2);
	//PrintSeqlist(&seqlist);
	DelAllval(&seqlist, 2);
	PrintSeqlist(&seqlist);
}
int main()
{
	Test();
	system("pause");
	return 0;
}