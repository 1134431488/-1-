#include <stdio.h>
extern int count;	//引用式声明，外部链接
static int total = 0;	//静态定义，内部链接.此变量记录k值之和 
void accumulate(int k); 	//函数原型声明表明此声明后的部分可以使用此函数 
void accumulate(int k)
{
	static int subtotal = 0;	//静态，无链接，块作用域.此变量记录传入的k值之和，当k为0则同时归0。便可重复利用，记录下一个k值 

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
