#include <stdio.h>
static unsigned long int next = 1;	//����
unsigned int rand0(void);
int main(void)
{
	int i = 0;
	unsigned int a = 0;
	while(a < 20000)
	{
		i++;
		a = rand0();    //��ȡ���������ֵ
		printf("���:%d ���ֵ = %d\n", i, a);
	}

	return 0;
}

unsigned int rand0(void)
{
	/*����α������Ĺ�ʽ*/
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;
}

