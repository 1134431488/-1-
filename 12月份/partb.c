#include <stdio.h>
extern int count;       //����ʽ�������ⲿ����
static int total = 0;   //�ļ������򣬾�̬���壬�ڲ�����
void accumulate(int k);   //����ԭ��

void accumulate(int k)		//��������������
{
	static int subtotal = 0;    //��̬��������
	if(k <= 0)
	{
		printf("loop cycle: %d\n", count);
		printf("Subtotal: %d; total: %d\n", subtotal, total);
		subtotal = 0;
	}
	else
	{
		subtotal += k;
		total +=k ;
	}
}
