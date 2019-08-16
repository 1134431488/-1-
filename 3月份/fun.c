#include <stdio.h>
extern int count;	/*引用式声明，extern linkage*/
static int total = 0;	/*静态定义， internal linkage*/
void accumulate(int k);	//积累    函数原型
void accumulate(int k)
{
	static int subtotal = 0;	/*静态，block scope no linkage*/
	if(k <= 0)
	{
		printf("循环周期:%d\n", count);
		printf("subtotal:%d; total:%d\n", subtotal, total);
		subtotal = 0;
	}
	else
	{
		subtotal += k;
		total += k;
	}
}

