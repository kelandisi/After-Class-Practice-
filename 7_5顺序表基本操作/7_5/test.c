/**
* ˳�����
*
* @author ������
* @date 2019-7-5
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include"seqlist.h"
void text()
{
	Seqlist p;
	InitSeqlist(&p);   //��ʼ���ṹ��
	Pushfront(&p, 4);  //ͷ��
	Pushfront(&p, 3);
	Pushfront(&p, 2);
	Pushfront(&p, 1); 

	PrintSeqlist(&p);  //��ӡ�ṹ��

	Pushback(&p, 5);   //β��
	Pushback(&p, 6);
	Pushback(&p, 7);
	Pushback(&p, 8);

	PrintSeqlist(&p);  //��ӡ�ṹ��
	Insert(&p, 2, 555);//�����±����

	PrintSeqlist(&p);  //��ӡ�ṹ��

	Popfront(&p);      //ͷɾ

	PrintSeqlist(&p);  //��ӡ�ṹ��

	Popback(&p);       //βɾ

	PrintSeqlist(&p);  //��ӡ�ṹ��

	EraseSeqlist(&p, 3);

	PrintSeqlist(&p);  //��ӡ�ṹ��



}
int main()
{
	text();
	system("pause");
	return 0;
}