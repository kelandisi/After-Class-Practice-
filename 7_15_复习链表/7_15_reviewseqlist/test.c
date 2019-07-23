#define _CRT_SECURE_NO_WARNINGS 1
#include"seqlist.h"
void test()
{
	Seqlist seqlist;
	InitSeqlist(&seqlist);
	FrontPush(&seqlist, 3);
	FrontPush(&seqlist, 2);
	FrontPush(&seqlist, 2);
	FrontPush(&seqlist, 1);
	Print(&seqlist);
	BackPush(&seqlist, 4);
	BackPush(&seqlist, 5);
	BackPush(&seqlist, 6);
	Print(&seqlist);
	FrontPop(&seqlist);
	Print(&seqlist);
	BackPop(&seqlist);
	Print(&seqlist);
	Insert(&seqlist, 2, 55);
	Print(&seqlist);
	Delete(&seqlist, 2);
	Print(&seqlist);
	//DelOneVal(&seqlist, 2);
	DelAllVal(&seqlist, 2);
	Print(&seqlist);


}
int main()
{
	test();
	system("pause");
	return 0;
}