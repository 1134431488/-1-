#include <stdio.h>
extern int count;	/*����ʽ������extern linkage*/
static int total = 0;	/*��̬���壬 internal linkage*/
void accumulate(int k);	//����    ����ԭ��
void accumulate(int k)
{
	static int subtotal = 0;	/*��̬��block scope no linkage*/
	if(k <= 0)
	{
		printf("ѭ������:%d\n", count);
		printf("subtotal:%d; total:%d\n", subtotal, total);
		subtotal = 0;
	}
	else
	{
		subtotal += k;
		total += k;
	}
}

