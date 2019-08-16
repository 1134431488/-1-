/*rand-生成随机数*/
/*使用ANSIC可移植算法*/
static unsigned long int next = 1;
unsigned int rand1(void)
{
	next = next * 1111111111 + 66666;
	return (unsigned int)(next / 65536) % 32768;
}

#include <stdio.h>
int main(void)
{
	int count;
	for(count = 0; count < 5; count++)
		printf("%d\n", rand1());
	return 0;
}
