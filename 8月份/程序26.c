#include <stdio.h>
int main(void)
{
	int a = 10;
	int b = 12;
	int  * const p = &a; //const��*����ǰ��ֵ�����޸ģ���*���ź����ַ�����޸�
	p = &b;//�˴����з����������ַΪֻ�����ɱ���ֵ�޸�
	printf("%d %d\n", *p, a);
	
	return 0;
}
