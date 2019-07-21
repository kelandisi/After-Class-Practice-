#define _CRT_SECURE_NO_WARNINGS 1
#include"seqlist.h"
void Test()
{
	Seqlist seqlist;
	InitSeqlist(&seqlist);
	//PrintSeqlist(&seqlist);
	PushFrontSeqlist(&seqlist, 3);
	PushFrontSeqlist(&seqlist, 2);
	PushFrontSeqlist(&seqlist, 2);
	PushFrontSeqlist(&seqlist, 1);  
	PrintSeqlist(&seqlist);			//1 2 2 3
	PushBackSeqlist(&seqlist, 4);
	PushBackSeqlist(&seqlist, 5);
	PushBackSeqlist(&seqlist, 6);
	PrintSeqlist(&seqlist);			//1 2 2 3 4 5 6
	InsertSeqlist(&seqlist, 4, 100);
	PrintSeqlist(&seqlist);			//1 2 2 3 100 4 5 6
	PopFrontSeqlist(&seqlist);
	PrintSeqlist(&seqlist);			//2 2 3 100 4 5 6
	PopBackSeqlist(&seqlist);
	PrintSeqlist(&seqlist);			//2 2 3 100 4 5
	DeleteSeqlist(&seqlist, 3);
	PrintSeqlist(&seqlist);			//2 2 3 4 5
	//SeqlistRemove(&seqlist, 2);
	SeqlistRemoveAll(&seqlist, 2);	
	PrintSeqlist(&seqlist);			//3 4 5
	//DestroySeqList(&seqlist);
}
int main()
{
	Test();
	system("pause");
	return 0;
}