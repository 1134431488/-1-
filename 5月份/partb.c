#include <stdio.h>
extern int count;	//����ʽ�������ⲿ����
static int total = 0;	//��̬���壬�ڲ�����.�˱�����¼kֵ֮�� 
void accumulate(int k); 	//����ԭ������������������Ĳ��ֿ���ʹ�ô˺��� 
void accumulate(int k)
{
	static int subtotal = 0;	//��̬�������ӣ���������.�˱�����¼�����kֵ֮�ͣ���kΪ0��ͬʱ��0������ظ����ã���¼��һ��kֵ 

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
