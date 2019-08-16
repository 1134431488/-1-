#include <stdio.h>

extern int count;   //引用时声明，外部链接，其它翻译单元

static int total = 0;   //静态定义，内部链接，文件作用域变量
//void accumulate(int k); //函数原型，在parta.c文件声明过一次，这里重复声明也不存在问题
void accumulate(int k)
{
	static int subtotal = 0;	//静态，无链接，块作用域变量
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
