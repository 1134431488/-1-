#include <stdio.h>
int main(void)
{
	static int a;
	int b;
	printf("a = %d 字节为 = %d\n", a, sizeof(a));//块内的静态变量的值被初始化为0，而块内自动变量是不会自己初始化的
	printf("b = %d", b);
	return 0;
}
