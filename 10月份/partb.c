#include <stdio.h>

extern int count;   //����ʱ�������ⲿ���ӣ��������뵥Ԫ

static int total = 0;   //��̬���壬�ڲ����ӣ��ļ����������
//void accumulate(int k); //����ԭ�ͣ���parta.c�ļ�������һ�Σ������ظ�����Ҳ����������
void accumulate(int k)
{
	static int subtotal = 0;	//��̬�������ӣ������������
	if(k <= 0)
	{
		printf("loop cycle: %d\n", count);
		printf("subtotal: %d; total: %d\n", subtotal, total);
		subtotal = 0;
	}
	else
	{
		subtotal += k;
		total += k;
	}
}
