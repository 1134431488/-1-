#include <stdio.h>
static unsigned long int next = 1;	//����
unsigned int rand0(void);
int main(void)
{
	unsigned int a = 0;
	do                  //βѭ��
	{
		a = rand0();    //��ȡ���������ֵ
		printf("���ֵ = %d\n", a);
	}
	while(a != 0 && a < 20000);



	return 0;
}

unsigned int rand0(void)
{
	/*����α������Ĺ�ʽ*/
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;
}
