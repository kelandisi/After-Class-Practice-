#define _CRT_SECURE_NO_WARNINGS 1
#include"main.h"
using namespace std;
void testfun1()
{
	int a[] = { 1,22,9,10,0,51,4,8,21,2 };
	int size = sizeof(a) / sizeof(int);
	BubbleSort(a,size);						//ð������				
	Print(a,size);
	int ret = BinarySearch(a, size,4);		//���ֲ���
	cout << "�ҵ����±���" << ret << endl;
}
void testseq()
{
	Seqlist seqlist;
	Initseq(&seqlist);						//��ʼ��˳���
	Frontpush(&seqlist, 2);					//ͷ��
	Frontpush(&seqlist, 2);							
	Frontpush(&seqlist, 2);
	Frontpush(&seqlist, 1);
	Printseq(&seqlist);						//��ӡ˳���
	Bcakpush(&seqlist, 4);					//β��				
	Bcakpush(&seqlist, 5);
	Bcakpush(&seqlist, 6);
	Printseq(&seqlist); 
	Insert(&seqlist, 520, 2);				//�����������	
	Printseq(&seqlist);
	Delete(&seqlist, 2);					//��������ɾ��		
	Printseq(&seqlist);
	//Deleteoneval(&seqlist, 2);				//ɾ����һ��val
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