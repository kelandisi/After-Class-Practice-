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
	printf("˳�������%d��Ԫ��\n", SeqListSize(&seq));
	printf("˳����������%d\n", SeqListCapacity(&seq));
	if (SeqListEmpty(&seq))
		printf("˳���Ϊ��\n");
	else
	{
		printf("��Ϊ��\n");
	}
	printf("˳���ĵ�һ��Ԫ����%d\n", SeqListFront(&seq));
	printf("˳�������һ��Ԫ����%d\n", SeqListBack(&seq));

}
int main()
{
	test();
	system("pause");
	return 0;

}