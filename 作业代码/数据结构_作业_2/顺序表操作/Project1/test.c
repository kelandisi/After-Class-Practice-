#define _CRT_SECURE_NO_WARNINGS 1
#include"seqlist.h"
void test()
{
	Seqlist seq;
	InitSeqlist(&seq);
	FrontPushSeqlist(&seq, 3);
	FrontPushSeqlist(&seq, 2);
	FrontPushSeqlist(&seq, 2);
	FrontPushSeqlist(&seq, 1);
	Print(&seq);
	BackPushSeqlist(&seq, 4);
	BackPushSeqlist(&seq, 5);
	BackPushSeqlist(&seq, 6);
	Print(&seq);
	InsertSeqlist(&seq, 2, 55);
	Print(&seq);
	FrontPopSeqlist(&seq);
	Print(&seq);
	BackPopSeqlist(&seq);
	Print(&seq);
	DeleteSeqlist(&seq, 1);
	Print(&seq);
	SeqListRemoveAll(&seq, 2);
	//SeqListRemove(&seq, 2);
	Print(&seq);
	printf("顺序表中有%d个元素\n", SeqListSize(&seq));
	printf("顺序表的容量是%d\n", SeqListCapacity(&seq));
	if (SeqListEmpty(&seq))
		printf("顺序表为空\n");
	else
	{
		printf("不为空\n");
	}
	printf("顺序表的第一个元素是%d\n", SeqListFront(&seq));
	printf("顺序表的最后一个元素是%d\n", SeqListBack(&seq));

}
int main()
{
	test();
	system("pause");
	return 0;

}