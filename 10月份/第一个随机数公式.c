#include <stdio.h>
static unsigned long int next = 1;	//种子
unsigned int rand0(void);
int main(void)
{
	unsigned int a = 0;
	do                  //尾循环
	{
		a = rand0();    //获取随机数返回值
		printf("随机值 = %d\n", a);
	}
	while(a != 0 && a < 20000);



	return 0;
}

unsigned int rand0(void)
{
	/*生成伪随机数的公式*/
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;
}
