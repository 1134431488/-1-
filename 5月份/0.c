#include <stdio.h>
int main(void)
{
	int a, b, c;	//b地址在a和c之间，假设b溢出，观察a和c的变化
	a = 0;
	b = 2;
	c = 0;
	while(a == 0 || b == 0)
	{
		printf("%d\n", b);
		b += 20000000;
	}
	printf("%a=d b=%d\n", a, b);
	return 0;
}
