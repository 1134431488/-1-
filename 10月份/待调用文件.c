#include <stdio.h>
extern int max(int x, int y)//定义时，也可以不加extern，默认为外部函数
{
	int z;  //自动变量，无链接，块作用域
	z = x > y ? x : y;
	return z;
}

extern void gccx(void)
{
	printf("外部函数\n");
}
int kk = 10; //定义式声明, 不允许在定义式声明前带有extern
