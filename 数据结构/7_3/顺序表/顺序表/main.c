#include"seqlist.h"
void test()
{
	Seqlist seqlist;
	SeqlistInit(&seqlist);
	PushbackSeqlist(&seqlist, 1);
	PushbackSeqlist(&seqlist, 2);
	PushbackSeqlist(&seqlist, 3);
	PushbackSeqlist(&seqlist, 4);
	SeqlistPrint(&seqlist);
	PushfrontSeqlist(&seqlist, 9);
	PushfrontSeqlist(&seqlist, 8);
	PushfrontSeqlist(&seqlist, 7);
	PushfrontSeqlist(&seqlist, 6);
	SeqlistPrint(&seqlist);
	SeqlistInsert(&seqlist, 3, 10);
	SeqlistPrint(&seqlist);
	PopfrontSeqlist(&seqlist);
	SeqlistPrint(&seqlist);
	PopbackSeqlist(&seqlist);
	SeqlistPrint(&seqlist);
	EraseSealist(&seqlist, 2);
	SeqlistPrint(&seqlist);
}
int main()
{
	test();
	system("pause");
	return 0;
}